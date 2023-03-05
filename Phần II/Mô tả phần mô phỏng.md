# Mô phỏng mạch
## Proteus
![image](https://user-images.githubusercontent.com/96186749/208045531-3708a54d-2b53-45ba-a46d-31619295b010.png)
**Sau khi hiệu chỉnh và cài đặt code thông qua phần mềm CodeVisionAVR, mạch đã hoạt động được đúng chức năng mà nhóm đã đề ra**
![image](https://user-images.githubusercontent.com/96186749/216868435-1db38203-9bdc-4231-9a8e-2c75ed73dc39.png)

![image](https://user-images.githubusercontent.com/96186749/222940385-60dfa5c3-585b-4e74-a0bd-44fb7798c413.png)


- Phần chức năng sau khi đã hoàn thiện sẽ hoạt động theo 3 mức tương đương với 3 mức không khí là: tốt, trung bình và xấu tương ứng với lượng ppm.
- Trong đó nếu lượng ppm nhỏ hơn 600 sẽ được coi là tốt, phần đèn tím sẽ được bật lên và màn hình hiển thị **"GOOD"**. Nếu ppm thuộc khoảng từ 600 đến 800 thì chất lượng không khí được coi là trung bình và màn hình sẽ hiển thị là **"AVG"**. Ngược lại nếu ppm > 800 thì chất lượng không khí sẽ được coi là xấu và màn hình hiển thị là **"BAD"**.
- Phần chất lượng không khí dựa trên nguồn: [Air quality](https://www.co2radical.com.au/aranet4-what-is-a-normal-co2-level) với tiêu chuẩn không khí được lấy theo nồng độ CO2 trong phòng.

![image](https://user-images.githubusercontent.com/96186749/222940477-1310e3d9-d325-45b3-b434-959c5f5b0dae.png)

The full simulation is in this [video](https://husteduvn-my.sharepoint.com/:v:/g/personal/minh_dtn193231_sis_hust_edu_vn/EeMyHEep7lxNtSg5wuvAWPUBkEjLh8_qN7npxQnsix0TAw?e=SZu1PP)
## Altium
![image](https://user-images.githubusercontent.com/124513040/216827906-8d130ae6-6e18-4cdf-9bac-a1a5a94ed649.png)
## AVR studio
```
unsigned int gas;
char arr[15];
// ADC initialization
// ADC Clock frequency: 125.000 kHz
// ADC Voltage Reference: AREF pin
// ADC Auto Trigger Source: Free Running
ADMUX=ADC_VREF_TYPE;
ADCSRA=(1<<ADEN) | (0<<ADSC) | (1<<ADATE) | (0<<ADIF) | (0<<ADIE) | (1<<ADPS2) | (1<<ADPS1) | (0<<ADPS0);
SFIOR=(0<<ADTS2) | (0<<ADTS1) | (0<<ADTS0);

lcd_init(16); //khoi dong lcd
DDRA.0 = 0;
DDRD.4= 1;
lcd_gotoxy(0,0);
lcd_puts("Gas sensor MQ135");

while (1)
      { 

      // Place your code here
         gas = read_adc(0);//du lieu gas
         sprintf(arr,"Gas:%02d PPM",gas);
         PORTD.4=1;
         lcd_gotoxy(0,1);
         lcd_puts(arr);
}    
}
```
