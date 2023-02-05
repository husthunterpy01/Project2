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

## MODULE SIM800L
### 1. Giới thiệu Module SIM800L 
- Module SIM800L dùng điều khiển thiết bị hoặc cảnh báo từ xa thông qua mạng di động như gọi điện, nhắn tin, GPRS.
- Dễ giao tiếp với các họ vi điều khiển như Pic, 8051, AVR, Arduino…
- Module SIM800L được ứng dụng rộng rãi ngoài thực thế,các phòng thông minh, ngôi nhà thông minh, IOT…
- Điều khiển module sử dụng bộ tập lệnh AT dễ dàng và tiêu thụ điện năng nhỏ phù hợp cho các đồ án hoặc dư án cần dùng Pin hoặc Acquy
![image](https://user-images.githubusercontent.com/124513040/216827703-74d4896f-f498-42f9-8945-5e8060cb0d77.png)

### 2. Thông số kỹ thuật của Module SIM800L
Datasheet	Module SIM800L
Chân	12
Điện áp hoạt động	4.2v
Dòng khi hoạt động	100mA – 1A (nên chọn nguồn trên 1A)
Dòng ở chế độ chờ	10mA
Khe cắm Sim	MicroSim
Kích thước	25mm x 22mm

### 3. Chức năng các chân của Module SIM800L
•	VCC: Nguồn vào 4.2V
•	TXD: Chân truyền Uart TX.
•	RXD: Chân nhận Uart RX.
•	DTR : Chân UART DTR, thường không xài.
•	SPKP, SPKN: ngõ ra âm thanh, nối với loa để phát âm thanh.
•	MICP, MICN: ngõ vao âm thanh, phải gắn thêm Micro để thu âm thanh.
•	Reset: Chân khởi động lại Sim800L (thường không xài).
•	RING : báo có cuộc gọi đến
•	GND: Chân Mass, cấp 0V.

### 4. Tập lệnh AT của Module SIM800L cần giao tiếp vi điều khiển
- Các lệnh chung
•	Lệnh: AT<CR><LF>
•	Mô tả : Kiểm tra đáp ứng của Module Sim 900A, nếu trả về OK thì Module hoạt động
•	Lệnh: ATE[x]<CR><LF>
•	Mô tả: Chế độ echo là chế độ phản hồi dữ liệu truyền đến của module Sim 900A,
x = 1 bật chế độ echo , x = 0 tắt chế độ echo (bạn nên tắt chế độ này khi giao tiếp với vi điều khiển)
•	Lệnh: AT+IPR=[baud rate]<CR><LF>
•	Mô tả:  cài đặt tốc độ giao tiếp dữ liệu với Module Sim800C, chỉ cài được các tốc độ sau
•	baud rate :    0  (auto), 1200, 2400, 4800, 9600, 19200, 38400, 57600, 115200
•	Lệnh:  AT&W<CR><LF>
•	Mô tả :  lưu lại các lệnh đã cài đặt
- Các lệnh điều khiển cuộc gọi
•	Lệnh: AT+CLIP=1<CR><LF>
•	Mô tả: Hiển thị thông tin cuộc gọi đến
•	Lệnh: ATD[Số_điện_thoại];<CR><LF>
•	Mô tả: Lệnh thực hiện cuộc gọi
•	Lệnh: ATH<CR><LF>
•	Mô tả: Lệnh thực hiện kết thúc cuộc gọi , hoặc cúp máy khi có cuộc gọi đến
•	Lệnh: ATA<CR><LF>
•	Mô tả: Lệnh thực hiện chấp nhận khi có cuộc gọi đến
- Các lệnh điều khiển tin nhắn
•	Lệnh: AT+CMGF=1<CR><LF>
•	Mô tả: Lệnh đưa SMS về chế độ Text , phải có lệnh này mới gửi nhận tin nhắn dạng Text
•	Lệnh: AT+CMGS=”Số_điện _thoại”<CR><LF>
•	Đợi đến khi có ký tự ‘>’ được gửi về thì đánh nối dung tin nhắn   
•	Gửi mã Ctrl+Z  hay 0x1A hoặc giá trị 26 để kết thúc nội dung và gửi tin nhắn
•	Mô tả: Lệnh gửi tin nhắn
•	Lệnh: AT+CMGR=x<CR><LF>
•	x là địa chỉ tin nhắn cần đọc
•	Mô tả: Đọc một nhắn vừa gửi đến, lệnh được trả về nội dung tin nhắn, thông tin người gửi, thời gian gửi
•	Lệnh: AT+CMGDA=”DEL ALL”<CR><LF>
•	Mô tả:  Xóa toàn bộ tin nhắn trong các hộp thư
•	Lệnh: AT+CNMI=2,2<CR><LF>
•	Mô tả: Hiển thị nội dung tin nhắn ngay khi có tin nhắn đến

