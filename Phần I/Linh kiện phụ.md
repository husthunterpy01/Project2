# Một vài linh kiện bổ trợ khác
## LCD1602
### 1. Giới thiệu module
Ngày nay, thiết bị hiển thị LCD1602 (Liquid Crystal Display) được sử dụng trong rất nhiều các ứng dụng của VĐK. LCD 1602 có rất nhiều ưu điểm so với các dạng hiển thị khác như: khả năng hiển thị kí tự đa dạng (chữ, số, kí tự đồ họa); dễ dàng đưa vào mạch ứng dụng theo nhiều giao thức giao tiếp khác nhau, tiêu tốn rất ít tài nguyên hệ thống, giá thành rẻ,…
Màn hình text LCD1602 xanh lá sử dụng driver HD44780, có khả năng hiển thị 2 dòng với mỗi dòng 16 ký tự, màn hình có độ bền cao, rất phổ biến, nhiều code mẫu và dễ sử dụng thích hợp cho những người mới học và làm dự án.

![image](https://user-images.githubusercontent.com/96186749/206466419-9819e72f-a1fb-4435-a05e-1de89d73c379.png)
### 2 Một số thông số kĩ thuật 
Thông số kỹ thuật của LCD1602:
- Điện áp MAX : 7V
- Điện áp MIN : - 0,3V
- Hoạt động ổn định : 2.7-5.5V
- Điện áp ra mức cao : > 2.4
- Điện áp ra mức thấp : <0.4V
- Dòng điện cấp nguồn : 350uA - 600uA
- Nhiệt độ hoạt động : - 30 - 75 độ C
### 3 Sơ đồ chân
![image](https://user-images.githubusercontent.com/96186749/206465512-27332d72-14f1-41d1-9143-04ccc8827982.png)
## Module I2C LCD
### 1 Giới thiệu module 
- Module chuyển đổi I2C cho LCD sẽ giúp người sử dụng dễ dàng hơn trong quá trình kết nối. Thay vì sử dụng tối thiểu 6 chân của vi điều khiển để kết nối với LCD (RS, EN, D7, D6, D5 và D4) thì với module chuyển đổi bạn chỉ cần sử dụng 2 chân (SCL, SDA) để kết nối. 
- Module chuyển đổi I2C hỗ trợ các loại LCD sử dụng driver HD44780(LCD 1602, LCD 2004, … ), kết nối với vi điều khiển thông qua giao tiếp I2C, tương thích với hầu hết các vi điều khiển hiện nay.
![image](https://user-images.githubusercontent.com/96186749/206466605-e71b97cc-7a7e-4bc9-b724-97fb0db43034.png)

### 2 Thông số kĩ thuật 
- Điện áp hoạt động: 3 – 6V
- Giao tiếp: I2C
- Địa chỉ mặc định: 0x27, có thể mắc vào I2C bus tối đa 8 module (3bit address set)
- Jump Chốt: Cung cấp đèn cho LCD hoặc ngắt
- Biến trở xoay độ tương phản cho LCD
- Kích thước: 41.5 x 19 x 15.3mm
- Trọng lượng: 5g
### 3. Ưu điểm của việc sử dụng giao tiếp I2C
- Giao tiếp I2C chỉ sử dụng duy nhất 2 dây tín hiệu: SDA và SCL giúp tiết kiệm chân trên vi điều khiển.
- Tốc độ truyền dữ liệu lên đến 400Kbps.
- Dữ liệu truyền nhận đảm bảo tính toàn vẹn vì sử dụng cơ chế phản hồi (ACK) trên mỗi byte dữ liệu.
- Có khả năng kết nối nhiều thiết bị với nhau: trên mạch có sẵn các mối hàn A0, A1, A2 để thay đổi địa chỉ của module.
