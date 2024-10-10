#include <OneButton.h>

#define LED_PIN 13 // Chân LED
#define BUTTON_PIN 12 // Chân nút nhấn

OneButton button(BUTTON_PIN); // Tạo đối tượng OneButton

bool ledState = false; // Trạng thái LED
bool isBlinking = false; // Trạng thái nháy LED

void setup() {
    pinMode(LED_PIN, OUTPUT);
    button.begin();
    button.attachClick(clickHandler); // Đăng ký hàm xử lý click đơn
    button.attachDoubleClick(doubleClickHandler); // Đăng ký hàm xử lý click đôi
}

void loop() {
    button.tick(); // Cập nhật trạng thái nút nhấn

    // Nháy LED nếu đang ở chế độ nháy
    if (isBlinking) {
        digitalWrite(LED_PIN, HIGH);
        delay(250);
        digitalWrite(LED_PIN, LOW);
        delay(250);
    }
}

// Hàm xử lý click đơn
void clickHandler() {
    ledState = !ledState; // Chuyển đổi trạng thái LED
    digitalWrite(LED_PIN, ledState ? HIGH : LOW); // Bật/tắt LED
}

// Hàm xử lý click đôi
void doubleClickHandler() {
    isBlinking = !isBlinking; // Chuyển đổi trạng thái nháy LED
}
