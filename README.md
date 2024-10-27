# MicroProcessor
## ریز پردازنده
University Microprocessor Project by Arduino پروژه ریز پردازنده دانشگاه بوسیله آردوینو

ما در اینجا گزارش آزمایش ها ها و کد های نوشته شده برای برد آردوینو و مینی پروژه ها گداشته می شود ، فایل کد های قابل اجرا در نرم افزار Arduino IDE در پوشه Arduino File قزار داده می شود و در اینجا توضیحات تکمیلی هر کد داده می شود.
#

[چشمک زن](https://github.com/MohammadamMan/micro_arduino/blob/main/New%20folder%20(2)/LED.gif)






در برد آردوینو یک LED طراحی شده است که به پایه 13 دیجیتال متصل است و ما با کدی که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/1blinker.ino)  قرار دارد آن را خاموش رو روشن می کنیم که حالت چشمک زن داشتنه باشد . این کد اولین کد و ساده ترین کد برای تست و راه اندازی برد آردوینو می باشد.
همچنین می توانیم به جای استفاده از ال ای دی روی برد ، یک ال ای دی دیگر به پایه 13 متصل کنیم:

<p align="center">
  <img src="https://raw.githubusercontent.com/mohsenkmt/MicroProcessor/main/Photo/1_one_led_blinker1.jpeg" />
</p>

#

[چشمک زن با دو عدد LED](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/2TwoLedBlinker.ino)
<p align="center">
  <img src="[https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/2_Two_Led_Blinker.jpeg" alt="Two LED Blinker](https://github.com/MohammadamMan/micro_arduino/blob/main/New%20folder/photo_2024-10-20_21-05-07.jpg)" />
</p>


در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/2TwoLedBlinker.ino) قرار دارد 2 عدد LED را به نوبت خاموش و روشن می کنیم.
#
[خاموش و روشن کردن LED با ارسال پیام سریال](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/3OnOffLedBySerial.ino)

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/3_On_Off_Led_By_Serial.jpeg" alt="On Off Led By Serial " />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/3OnOffLedBySerial.ino) است می توانیم با فرستادن پیام به صورت سریال به برد ال ای دی روی برد را روشن یا خاموش کنیم.

#

[ماشین حساب ](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/4CalculatorSerial.ino)
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/4_Calculator_Serial.jpeg" alt="Calculator Serial " />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/4CalculatorSerial.ino) است می توان چهار عمل اصلی جمع و تفریق ، ضرب و تفسیم را برای برد فرستاد و جواب را دریافت کرد.
#
[نمودار سینوس ، کسیسنوس ]()

<p align="center">
  <img src="https://github.com/MohammadamMan/micro_arduino/blob/main/New%20folder/photo_2024-10-20_21-04-58.jpg" />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/5-Sin%26Cos.ino) قرار دارد می توان نمودار سینوس و کسیسنوس را در Serial Ploter نشان داد.
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/5_Sin_Cos.jpeg" alt="Sin,Cos" />
</p>

#


[روشن شدن ال ای دی با کلید ](https://github.com/mohsenkmt/MicroProcessor/blob/main/Arduino%20File/6_Pushbutton_LED_ON_OFF.ino)
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Video/6_Pushbutton_LED_ON_OFF.gif" alt="Pushbutton LED ON OFF" />

#

  
[رقص نور](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/7danclight.ino)
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Video/7_danclight.gif" alt="DanceLight" />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/7danclight.ino) است می توان بوسیله یک کلید برنامه رقض نور اچرا کرد.که شماتیک آن به صورت زیر است:
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/7_danclight.jpeg" alt="DanceLight" />
</p>
#

[تاس الکترونیکی](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/8Electronic_dice.ino)

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Video/8_Electronic_dice.gif" alt="Electronic dice" />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/8Electronic_dice.ino) است می توان بوسیله یک کلید برنامه تاس الکترونیکی اچرا کرد که با هر بار زدن دکمه یک عدد تصادفی بین 1 تا 6 در سریال مانیتور چاپ می شود و همچنین ال ای دی مربوط به همان شماره نیز روشن می شود.که شماتیک آن به صورت زیر است:

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/8_Electronic_dice.jpeg" alt="Electronic dice" />
</p>

#

[روشن شدن ال ای دی با پتاسیومتر](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/9Potentiometer_LED.ino)

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Video/9_Potentiometer_LED.gif" alt="Potentiometer LED" />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/9Potentiometer_LED.ino) است می توان بوسیله یک پتاسیومتر ال ای دی را خاموش و روشن کرد و شدت نور آن را تنظیم کرد.که شماتیک آن به صورت زیر است:

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/9_Potentiometer_LED.jpg" alt="Potentiometer LED" />
</p>

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Video/9_Potentiometer_LED1.gif" alt="Potentiometer LED" />
</p>

#

[تغییر ولتاژ با پتاسیومتر و نمایش ولتاژ](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/10Potentiometer_Voltage.ino)

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/10_Potentiometer_Voltage1.png" alt="Potentiometer Voltage" />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/10Potentiometer_Voltage.ino) است می توان بوسیله یک پتاسیومتر ولتاژ خروجی پایه را بین 0 تا 5 ولت تغییر داد همچنین ولتاژ را در سریال مانیتور چاپ کرد.که شماتیک آن به صورت زیر است:
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/10_Potentiometer_Voltage.jpg" alt="Potentiometer Voltage" />
</p>

#

[خاموش روشن شدن ال ای دی به صورت از شدت کم به زیاد](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/11LED_LowtoHigh.ino)

<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Video/11_LED_LowtoHigh.gif" alt="LED LOW TO HIGH" />
</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/11LED_LowtoHigh.ino) است ،  ال ای دی از شدت کم به زیاد روشن می شود و سپس از شدت زیاد به کم خاموش می شود . شماتیک به صورت زیر است:
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/11_LED_LowtoHigh.jpeg" alt="LED LOW TO HIGH" />
</p>

#

</p>

در این کد که در [اینجا](https://github.com/MohammadamMan/micro_arduino/blob/main/Arduino%20Code/6PushBottonLED-ON%2COFF.ino) است می توان بوسیله یک کلید ال ای دی را روشن کرد.
<p align="center">
  <img src="https://github.com/mohsenkmt/MicroProcessor/blob/main/Photo/6_Pushbutton_LED_ON_OFF.jpeg" alt="Pushbutton LED ON OFF" />
</p>
