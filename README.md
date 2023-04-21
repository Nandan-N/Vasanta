# Vasanta :leaves:
### WEATHER-STATION-ARDUINO project:

The weather station is an IOT project that collects the following data related to the weather and environment using different sensors on an arduino board :

### REQUIRED SENSORS:
- Temperature & Humidity : ```DHT22 SENSOR```<br>  <img src="https://hackster.imgix.net/uploads/attachments/194717/FGRE2J4IOXJ1IHX.LARGE.jpg?auto=compress%2Cformat&w=740&h=555&fit=max" alt="image" width="200"/>
<!-- ![image](https://hackster.imgix.net/uploads/attachments/194717/FGRE2J4IOXJ1IHX.LARGE.jpg?auto=compress%2Cformat&w=740&h=555&fit=max) -->
- Atmospheric pressure : `BAROMETER SENSOR - BMP 180`<br><img src="https://m.media-amazon.com/images/I/51ZHs-WXUML._SY450_.jpg" alt="image" width="200"/>
<!-- ![image](https://m.media-amazon.com/images/I/51ZHs-WXUML._SY450_.jpg) -->
- Light intensity : ```LIGHT SENSOR(LDR)-MH SERIES```<br><img src="https://hackster.imgix.net/uploads/attachments/194714/F4KSMWIIOXJ1IEK.LARGE.jpg?auto=compress%2Cformat&w=740&h=555&fit=max" alt="image" width="200"/>
- UV index : ```UV SENSOR : HW-837```<br><img src="https://robu.in/wp-content/uploads/2020/02/edit-462x462.jpg" alt="image" width="200"/>
- Dust concentration : ```DUST SENSOR : GP2Y10```<br><img src="https://robu.in/wp-content/uploads/2017/04/GP2Y1014AU0F-Compact-Optical-font-b-Dust-b-font-Sensor-Compatible-GP2Y1010AU0F-GP2Y1010AUOF-Smoke-font-b-Particle.jpg" alt="image" width="200"/>
- Rain sensor : ```RAIN SENSOR```<br><img src="https://cdn.shopify.com/s/files/1/0559/1970/6265/products/71wjp-s2kml._sl1000_540x.jpg?v=1670581013" alt="image" width="200"/><br>
- The aim is to make a small and simple weather station, using open hardware.

### OTHER REQUIRED COMPONENTS :
- ```Arduino Uno Board```<br><img src="https://static.wixstatic.com/media/b29d1d_39f700190172453ebda2408b96e67879~mv2.jpg/v1/fill/w_500,h_350,al_c,q_85/b29d1d_39f700190172453ebda2408b96e67879~mv2.jpg" alt="image" width="300" />
- ```Arduino Uno Proto Shield```<br><img src="https://m.media-amazon.com/images/I/618RJG9qLxL._SL1000_.jpg" alt="image" width="300"/>
- ```Jumper Wires```<br><img src="https://www.flyrobo.in/image/cache/catalog/product/20cm-male-to-female-jumper-cable-wire-for-arduino-10pcs-600x600.jpg" alt="image" width="300"/><br>

### WORKING OF THE PROJECT :
- The circuit is powered by the USB port (connected to a computer or a ordinary phone charger), but you may also add an external DC power supply or a battery connected to the Arduino power jack.
- A case for the weather station circuit is out of the scope of this project.
- Connecting the Parts : 
  - Connect all the components according to the schematic. You'll need some jumper wires to connect each sensor to the breadboard. You might use a protoshield (for a more compact circuit), an ordinary breadboard, or design you own Arduino shield.
    ![alt text](https://hackster.imgix.net/uploads/attachments/194721/FUZK0IKIOYPYQ2V.LARGE.jpg?auto=compress%2Cformat&w=740&h=555&fit=max)
  - Plug the USB cable to the Arduino Uno board and proceed to the next step.
  
- Assuming you have already installed the latest Arduino IDE, download and install the following libraries:
  - [DHT22 library](https://github.com/adafruit/DHT-sensor-library)
  - [Adafruit BMP085 library](https://github.com/adafruit/Adafruit-BMP085-Library)
  - Then work with the code uploaded in the drive.

- For further insights, please refer to the attached [PPT](https://github.com/Nandan-N/Vasanta/blob/main/SENSORS_BOARD_DESCRIPTION.pdf)

### Output 
![output](https://github.com/Nandan-N/Vasanta/blob/main/Screenshot%202023-04-21%20123815.png)

