# Đặt vấn đề: Điều Khiển LED bằng ESP32 

Dự án này sử dụng ESP32 để điều khiển một đèn LED với một nút bấm, sử dụng thư viện `OneButton`. Đèn LED có hai chế độ hoạt động:
1. Nhấn nút một lần (singleclick) để bật/tắt đèn LED
2. Nhấn nút hai lần (doubleclick) để đèn LED nhấp nháy theo chu kì

## Phần cứng
-  ESP32
- LED(sử dụng LED là chân GPIO 2 có sẵn trên board)
- BUTTON(sử dụng button là chân GPIO 0 có sẵn trên board)

## Thư Viện Sử Dụng
- `OneButton`: Một thư viện hỗ trợ phát hiện nhấn một lần, nhấn hai lần, và nhấn giữ từ một nút bấm
- `LED.h`: Thư viện tùy chỉnh để điều khiển trạng thái của đèn LED (bật, tắt, và nhấp nháy) do thầy Nguyễn Anh Tuấn trường ĐHKHTN viết
- `OneButton` tác giả Matthias Hertel: https://github.com/mathertel/OneButton 

## Cấu Hình Chân Kết Nối
- `LED_PIN`: Chân GPIO2 kết nối với đèn LED.
- `BTN_PIN`: Chân GPIO0 số kết nối với nút bấm.
- `LED_ACT`: Định nghĩa đèn LED hoạt động ở mức cao.
- `BTN_ACT`: Định nghĩa nút bấm hoạt động ở mức thấp.

## Yêu cầu chức năng

1. **Nhấn Nút Một Lần**: Khi nhấn nút một lần, đèn LED sẽ chuyển đổi giữa trạng thái bật và tắt
2. **Nhấn Nút Hai Lần**: Khi nhấn nút hai lần liên tiếp, đèn LED sẽ bắt đầu nhấp nháy với chu kỳ 100ms
## Mục tiêu 
- Tạo ra 1 dự án đơn giản dựa trên bài tập mẫu đã được giao
- Hiểu hơn về PlatformIO và thực hành với ESP32
