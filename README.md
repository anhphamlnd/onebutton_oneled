# esp32_IoT
# Bài toán : Điều Khiển LED bằng ESP32 với Thư Viện OneButton

Dự án này sử dụng ESP32 để điều khiển một đèn LED với một nút bấm, sử dụng thư viện `OneButton`. Đèn LED có hai chế độ hoạt động:
1. Nhấn nút một lần (singleclick) để bật/tắt đèn LED.
2. Nhấn nút hai lần (doubleclick) để đèn LED nhấp nháy theo chu kì.

## Phần cứng
-  ESP32
- LED
- BUTTON

## Thư Viện Sử Dụng
- `OneButton`: Một thư viện hỗ trợ phát hiện nhấn một lần, nhấn hai lần, và nhấn giữ từ một nút bấm.
- `LED`: Thư viện tùy chỉnh để điều khiển trạng thái của đèn LED (bật, tắt, và nhấp nháy).
    Project này sử dụng thư viện mã mở nổi tiếng gần đây là OneButton và thư viện LED tự viết(do thầy Nguyễn Anh Tuấn trường ĐHKHTN viết):
- `OneButton` tác giả Matthias Hertel: https://github.com/mathertel/OneButton 
- `LED.h` Cung cấp API sáng sủa để khởi tạo và điều khiển LED (đảo trạng thái - flip, và nháy - blink)

## Cấu Hình Chân Kết Nối
- `LED_PIN`: Chân kỹ thuật số kết nối với đèn LED.
- `BTN_PIN`: Chân kỹ thuật số kết nối với nút bấm.
- `LED_ACT`: Định nghĩa đèn LED hoạt động ở mức cao hay thấp.
- `BTN_ACT`: Định nghĩa nút bấm hoạt động ở mức cao hay thấp.

## Cách Hoạt Động

1. **Nhấn Nút Một Lần**: Khi nhấn nút một lần, đèn LED sẽ chuyển đổi giữa trạng thái bật và tắt.
2. **Nhấn Nút Hai Lần**: Khi nhấn nút hai lần liên tiếp, đèn LED sẽ bắt đầu nhấp nháy với chu kỳ 500ms.
### Thư Viện
```cpp
#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>
