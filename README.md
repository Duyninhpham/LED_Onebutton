# LED Control Project with OneButton Library

## Mô Tả Dự Án
Dự án này sử dụng thư viện OneButton để điều khiển LED thông qua nút nhấn. Có hai chức năng chính:
- **Chức năng ON/OFF**: Nhấn đơn nút để bật hoặc tắt LED.
- **Chức năng Nháy LED**: Nhấn đôi nút để chuyển sang chế độ nháy LED.

## Thiết Bị
- **ESP32/ESP8266 hoặc Arduino**: Có chân GPIO cho LED và nút nhấn.
- **LED**: Được kết nối với chân GPIO đã định nghĩa.
- **Nút nhấn**: Được kết nối với chân GPIO đã định nghĩa.

## Sơ Đồ Kết Nối
- Kết nối chân LED với chân GPIO 13.
- Kết nối chân nút nhấn với chân GPIO 12.

## Cách Thức Hoạt Động
1. Khi nhấn đơn nút nhấn, LED sẽ bật hoặc tắt.
2. Khi nhấn đôi nút nhấn, LED sẽ nháy liên tục.

## Cài Đặt Thư Viện
Để sử dụng thư viện OneButton, bạn cần cài đặt nó thông qua Library Manager trong Arduino IDE hoặc sử dụng PlatformIO.

## Chạy Dự Án
- Tải mã nguồn lên board ESP32/ESP8266 hoặc Arduino.
- Mở Serial Monitor để theo dõi trạng thái LED.

