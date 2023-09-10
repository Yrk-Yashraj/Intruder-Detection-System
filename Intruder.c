// Neopixel
#include <Adafruit_NeoPixel.h>
#ifdef _AVR_
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif
#define PIN 5       // input pin Neopixel is attached to
#define NUMPIXELS 4 // number of neopixels in strip
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, 5, NEO_GRB + NEO_KHZ800);
int redColor = 0;
int greenColor = 0;
int blueColor = 0;

// Ultrasonic Distance Sensor
const int pingPin = 3;

// LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup()
{
    pixels.begin(); // Neopixel
    lcd.begin(16, 2);
    lcd.print("Intruder Alert!");
    pinMode(4, OUTPUT); // Buzzer,Bulb
}

void loop()
{
    // Ultrasonic Distance Sensor
    long duration, inches, cm;
    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(pingPin, LOW);
    pinMode(pingPin, INPUT);
    duration = pulseIn(pingPin, HIGH);
    inches = microsecondsToInches(duration);
    cm = microsecondsToCentimeters(duration);

    // LCD
    lcd.setCursor(0, 1);
    lcd.print("Distance = ");
    lcd.print(cm);
    lcd.print("cm ");

    // PIR with Piezo,Bulb and Neopixel
    digitalWrite(5, HIGH);
    int pir = digitalRead(6);
    pixels.clear();
    if (pir == HIGH)
    {
        digitalWrite(4, HIGH);
        for (int i = 0; i < NUMPIXELS; i++)
        { // For each pixel...

            // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
            // For Red color
            pixels.setPixelColor(i, pixels.Color(255, 0, 0));

            pixels.show(); // Send the updated pixel colors to the hardware.

            delay(100); // Delay for 100 microseconds.
        }
    }
    else if (pir == LOW)
    {
        digitalWrite(4, LOW);
        for (int i = 0; i < NUMPIXELS; i++)
        { // For each pixel...

            // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
            // For Green color
            pixels.setPixelColor(i, pixels.Color(0, 255, 0));

            pixels.show(); // Send the updated pixel colors to the hardware.

            delay(100); // Delay for 100 microseconds.
        }
    }
}

// function for cm and inch
long microsecondsToInches(long microseconds)
{
    return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
    return microseconds / 29 / 2;
}