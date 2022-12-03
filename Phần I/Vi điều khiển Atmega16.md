# 1 Giới thiệu về họ vi điều khiển Atmega16
## 1.1 Họ vi điều khiển AVR
### 1.1.1 Vi điều khiển
Vi điều khiển có thể được so sánh với một máy tính độc lập nhỏ; nhỏ là một thiết bị cực kỳ mạnh mẽ, có khả năng thực hiện một loạt các tác vụ được lập trình sẵn và tương tác với các thiết bị phần cứng bổ sung. Được đóng gói trong một mạch tích hợp nhỏ (IC) có kích thước và trọng lượng thường không đáng kể, nó đang trở thành một bộ điều khiển hoàn hảo cho robot hay bất kì máy nào cần một số loại tự động hóa thông minh.Có rất nhiều loại vi điều khiển với các chức năng khác nhau, một bộ vi điều khiển duy nhất thường chỉ để đảm nhận một chức năng chính. Một số bộ vi điều khiển chứa bộ nhớ để lưu chương trình sẽ được thực thi và rất nhiều dòng đầu vào / đầu ra có thể được sử dụng để hoạt động chung với các thiết bị khác, như đọc trạng thái của cảm biến hoặc điều khiển động cơ
### 1.1.2 Vi điều khiển AVR
AVR là một họ vi điều khiển do hãng Atmel sản xuất được giới thiệu lần đầu vào năm 1996. sau đó được Microchip Technology mua lại vào năm 2016. AVR bao gồm nhiều dòng vi xử lí khác nhau như là Tiny AVR có kích thước bộ nhớ nhỏ, ít bộ phận ngoại vi cho đến dòng AVR có kích thước bộ nhớ loại trung bình và mạnh hơn nữa là dòng Mega có bộ nhớ có kích thước vài Kbye đến vài trăm Kb cùng với các bộ ngoại vi đa dạng được tích hợp trên chip, cũng có dòng tích hợp cả bộ LCD trên chip. Về cơ bản sự khác nhau giữa các dòng chính là cấu trúc ngoại vi, còn phần nhân thì vẫn như nhau.Do ra đời muộn hơn nên họ vi điều khiển AVR có nhiều tính năng mới đáp ứng tối đa nhu cầu cảu người sử dụng , so với họ 8051 89xx sẽ có độ ổn định, khả năng tích hợp, sự mềm dẻo trong việc lập trình và rất tiện lợi.Về mặt công nghệ và tính năng AVR có thể đem ra so sánh với các họ vi điều khiển 8 bit khác như PIC, Pisoc
#### Cấu trúc mạch AVR và chức năng chính
- Để thử nghiệm được nhiều chức năng ngoại vi với phần cứng tối thiểu, mạch Kit được thiết kế như cấu trúc bên dưới với các chức năng được nêu rõ ở trong bảng sau:

![image](https://user-images.githubusercontent.com/96186749/205429746-0ad2a0be-3a45-456c-92c2-989c44c7b683.png)

| STT | Tên linh kiện | Chức năng |
| --- | --- | --- |
| 1 | Giắc cắm nguồn | Nhận nguồn điện 9 - 12VDC cấp cho mạch Kit |
| 2 | IC ổn áp 7805 | Hạ 9 -12 VDC xuống 5VDC và giữ ổn định mức điện áp này để cấp cho toàn mạch | 
| 3 | LED báo nguồn | Báo nguồn |
| 4 | Vi điều khiển họ AVR | Điều khiển hoạt động của toàn mạch theo mã nguồn do ngườ lập trình và nạp xuống |
| 5 | Thạch anh | Quyết định tần số xung nhịp cấp cho vi điều khiển |
| 6 | Nút ấn Reset | Khởi động lại vi điều khiển | 
| 7 | Giắc ISP | Kết nối mạch nạp để nạp mã nguồn cho vi điều khiển |
| 8 | Nhóm 4 phím ẩn | Nhận lệnh điều khiển từ người sử dụng | 
| 9 | Giắc cắm 8 chân | Nối tới 8 chân vào/ ra (ứng với các Port A ) đa năng của vi điều khiển | 
| 10 | Giắc cắm 8 chân | Nối tới 8 chân vào/ ra (ứng với các Port B) đa năng của vi điều khiển |
| 11 | Giắc cắm 8 chân | Nối tới 8 chân vào/ ra (ứng với các Port C) đa năng của vi điều khiển |
| 12 | Giắc cắm 8 chân | Nối tới 8 chân vào/ ra (ứng với các Port D) đa năng của vi điều khiển |
| 13 | Dây LED đơn | Báo trạng thái logic của 8 chân ở Port D ( sáng : logic 0, tối logic 1) | 
| 14 | Jumper dây LED đơn | Cho phép hoặc vô hiệu hóa dây LED đơn | 
| 15 | LED 7 thanh | Hiển thị số 0-9 và một vài ký tự do người dùng định nghĩa | 
| 16 | Jumper LED 7 thanh | Cho phép hoặc vô hiệu hóa LED 7 thanh | 
| 17 | Giắc cắm LCD | Kết nối màn hình L:CD dạng text có bán sẵn. Loại phù hợp nhất là 1602 ( 16 ký tự x 2 dòng ) | 
| 18 | Biến trở vi chính | Điều chỉnh trơn và liên tục, từ 0 đến 5VDC, mức điện áp tại đầu vào AD0 của bọ ADC (chân PA0) |
| 19 | Giắc UART-USB | Kết nối mô đun chuyển đổi UART-USB có bán sẵn |

- Một số chức năng khác bao gồm 
  -  Điện áp nguồn : 
    - Tiêu chuẩn : 9 -12 VDC
    -  Giới hạn: 7-18 VDC
   - Dòng điện tiêu thụ :
    - Không có mô đun mở rộng, topanf bộ LED chỉ thị I/O tắt : 18mA
    - Khi có LCD và mô đun USB, các LED chỉ thị I/O bị vô hiệu hóa : 22mA
    - Khi có LCD và mô đung USB, toàn bộ LED chỉ thị I/O sáng : 80 mA 
   - Mạch có khả năng tự bảo vệ khi bị lắp ngược cực tính nguồn
   - Mức logic các cổng I/P: TTL (5V)
   - Điện áp tương tự các chân ADC : từ 0 đến + 5V
   - Loại VĐK được hỗ trợ : Atmega32, 16,...
   - Cổng I/O mở rộng: 4 giắc cắm (loại 8 chân _ ứng với 4 Port( 8 bit mỗi Port)
   - Hỗ trợ màn hình LCD : dạng text, giao tiếp 8 bit hoặc 4 bit
   - Hỗ tợ mô đun USB: UART-USB hay COM-USB ( mức 5VDC)
   - Xung nhịp tích hợp sẵn : thạc anh 8MHz
## 1.2 Atmega 16
### 1.2.1 Giới thiệu tổng quan về Atmega16
- Atmega16 là bộ vi điều khiển công suất thấp 40 chân được phát triển bằng công nghệ CMOS. CMOS là một công nghệ tiên tiến được sử dụng churt yếu để phát hiện các mạch tích hợp. Nó có mức tiêu thụi điện năng thấp và khả năng chống nhiễu cao. Atmega16 là bộ điều khiển 8-bit dựa trên kiến trúc RISC tiến tiến AVR như đã đề cập ở trên. Nó là một máy tính chip đơn đi kèm với CPU,ROM, RAM,EEPROM, bộ định thời, bộ đếm, ADC và bốn cổng 8-bit được gọi là PORTA, PORTB, PORTC, PORTD trong đó mỗi cổng gồm 8 chân I/O.
- Atmega 16 có các thanh ghi tích hợp được sử dụng để tạo kết nối giữa CPU và các thiết bị ngoại vi bên ngoài. CPU không có kết nối trực tiếp với các thiết bị bên ngoài. Nó có thể nhận đầu vào bằng cách đọc thanh ghi và đưa ra đầu ra bằng cách ghi thanh ghi.Ngoài ra, Atmega 16 đi kèm với hai bộ định thời 8 bit và một bộ định thời 16 bit. Tất cả các bộ định thời này có thể được sử dụng làm bộ đếm khi chúng được tối ưu hóa để đếm tín hiệu bên ngoài. Atmega 16 hoạt động trên tần số tối đa 16MHz, các lệnh được thực hiện trong một chu kì máy.
- Dưới đây là một vài thông số cơ bản của vi điều khiển Atmega16:
- 
![image](https://user-images.githubusercontent.com/96186749/205425722-3280c253-dbd0-444f-aa75-aaceebabcd0a.png)

#### **Kiến trúc của Atmega16**
Atmega16 dựa trên Kiến trúc Harvard và đi kèm với các bus và bộ nhớ riêng biệt. Các lệnh được lưu trữ trong bộ nhớ chương trình. Các lệnh được lưu trữ trong bộ nhớ chương trình bao gồm các thành phần như là CPU, ROM, RAM, EEPROM, Ngắt, I/O analog và kĩ thuật số, bộ định thời/ bộ đếm, watchdog timer và giao tiếp nối tiếp.
#### Sơ đồ chân Atmega16
- Atmega 16 được ưa chuộng hơi các bộ vi điều khiển khác như Atmel 8051 vì nó có khả năng thực thi các lệnh nhanh hơn nhiều và bao gồm bộ xử lý RISC đã được sửa đổi. Nó có 1 flash tích hợp đi kèm với các tính năng của một bộ nạp khởi động bao gồm ADC, SPI PWM và EEPROM 10-bit được tích hợp sẵn.
- Atmega16 bao gồm 40 chân, mỗi chân được sử dụng để thực hiện một nhiệm vcuj cụ thể, có tổng cộng 32 chân I/O và bốn cổng, mỗi cổng gồm 8 chân I/O
  + PORTA = 8 chân (chân 33 -40)
  + PORTB = 8 chân (chân 1- 8)
  + PORTC = 8 chân (chân 22 -29)
  + PORTD = 8 chân (chân 14 - 21)
![image](https://user-images.githubusercontent.com/96186749/205422258-762df937-a210-4145-9ee7-3c6ed56fe789.png)
#### Một vài tính năng của vi điều khiển Atmega16
- Có bộ điều khiển 8-bit CMOS công suất thấp với chip AVR RISC
- Thông lượng lên đến 16MIPS với mỗi MHZ
- Có 32 thanh ghi chức năng chung
- Bộ nhớ Flash 16Kbytes
- 512 byte EEPROM, 1Kbyte SRAM, JTAG
- Ba bộ định thời / bộ đếm để so sánh tín hiệu
- Ngắt trong và ngoài
- Giao thức USART + I2C
#### Các chức năng chính liên quan đến các chân:

| Tên chân | Chức năng |
| --- | --- |
| PORTA | Các chân từ 33 đến 40 hoạt động như đầu vào analog cho bộ chuyển đổi A/D. Tuy nhiên trong trường hợp không có bộ chuyển đổi A/D, PORTA được sử dụng làm cổng I/O hai chiều 8 bit có đi kèm với điện trở kéo bên trong |
| PORTB |Chân từ 1 đến 8. Đây là các chân hai chiều I/O. Cổng này cũng bao gồm các điện trở kéo lên bên trong |
| PORTC | Chân từ 22 đến 29.Đi kèm với điện trở kéo bên trong |
| PORTD | Chân từ 14 đến 21 thuộc về cổng này. Đây là cổng 2 chiều trong đó mỗi chân có thể được sử dụng như là chân đầu vào hoặc chân đầu ra. Tuy nhiên có tồn tại các tính năng bổ sung liên quan đến cổng này như ngắt, giao tiếp nối tiếp, bộ hẹn giờ và PWM |
| Reset | Chân 9 là chân reset mức thấp đang hoạt động. Xung mức thấp dài hơn độ dài xung tối thiểu sẽ tạo ra reset. Các xung ngắn không có khả năng tạo ra reset |
| GND | Chân 11 là chân nối đất |
| AREF | Chân 32 là chân tham chiếu tương tự chủ yếu được sử dụng cho bộ chuyển đổi A/D |
| AVCC | Chân 30 là AVCC là chân điện áp cung cấp cho PORTA và ADC. Nó được kết nối với VCC thông qua bộ lọc thông thấp khi có ADC. Tuy nhiên trong trường hợp không có ADC, AVCC được kết nối bên ngoài với VCC |
| XTAL1, XTAL2 | Một bộ dao động tinh thể được kết nối với các chân này. Atmega 16 hoạt động ở tần số bên trong 1 MHZ, bộ dao động được thêm vào để tạo ra xung clock và tần số cao |
