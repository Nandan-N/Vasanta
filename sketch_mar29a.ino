//INCLUDES
#include <DHT.h>
#include <Wire.h>
#include <Adafruit_BMP085.h>

//DEFINITIONS
#define DHTPIN 7     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
#define seaLevelPressure_hPa 1013.25

Adafruit_BMP085 bmp;
  
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino


//VARIABLES
int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value
int dust; //Connect dust sensor to Arduino A0 pin
int samplingTime = 280;
int deltaTime = 40;
int sleepTime = 9680;
float voMeasured = 0;
float calcVoltage = 0;
float dustDensity = 0;

void setup()
{
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
    //LIGHT
    unsigned int light;
    //Serial.print("RAW Light data: ");
    light = analogRead(A0);
    //Serial.println(light);
    if(light>=400 && light<700)
    {
      Serial.println("Normal lighting conditions");
    }
    else if(light<400)
    {
      Serial.println("Too bright");
    }

    else if(light>1000)
    {
      Serial.println("Dark environmental conditions");
    }


    //Temp & Humdidity
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print("%, Temp: ");
    Serial.print(temp);
    Serial.println("C");

    //UV values
    float sensorVoltage; 
    float uv_sensor;
    uv_sensor = analogRead(1);
    sensorVoltage = uv_sensor/1024*5.0;
    //Serial.print("UV data= ");
    //Serial.print(uv_sensor);
    //Serial.print("UV sensor voltage = ");
    //Serial.print(sensorVoltage);
    //Serial.println(" V");
    if(uv_sensor<=5)
    {
      Serial.println("Normal UV detected");
    }

    else if(uv_sensor>5)
    {
      Serial.println("High atmospheric UV detected");
    }
  
    //dust
    // power on the LED
    delayMicroseconds(samplingTime);

    voMeasured = analogRead(A0); // read the dust value

    delayMicroseconds(deltaTime);

    delayMicroseconds(sleepTime);

    // 0 - 5V mapped to 0 - 1023 integer values
    // recover voltage
    calcVoltage = voMeasured * (5.0 / 1024.0);

    // linear eqaution taken from http://www.howmuchsnow.com/arduino/airquality/
    // Chris Nafis (c) 2012
    dustDensity = 170 * calcVoltage - 0.1;

    Serial.print("Dust particles: ");
    Serial.print(dustDensity); 
    Serial.println("PPM");
  
    //Baro
    //Serial.print("Temperature = ");
    //Serial.print(bmp.readTemperature());
    //Serial.println(" *C");
    
    Serial.print("Pressure = ");
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");

    Serial.print("Altitude = ");
    Serial.print((bmp.readAltitude()/100)*2.77);
    Serial.println(" meters");

    Serial.print("Pressure at sea level = ");
    Serial.print(bmp.readSealevelPressure());
    Serial.println(" Pa");

    //Rain
    int value;
    value = analogRead(3);
    //Serial.println("Rain data:");
    //Serial.println(value);
    //value = map(value,0,1023,225,0);
    //Serial.println(value);
    if(value>=1000)
    {
      Serial.println("Rain detected");
    }
    else
    {
      Serial.println("No rain detected");
    }
    
    Serial.println();
   delay(3000);

}
