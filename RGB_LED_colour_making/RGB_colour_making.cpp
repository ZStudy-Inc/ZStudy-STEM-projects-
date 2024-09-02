// using the rgb LED to make different colours by adjusting the brightness og each RGB component
// the LED is connected to 3 digital pins 9,10 and 11 as red, green and orange respectively
// the circuit is shown in wiring_components(3).png 

#define red 10
#define green 7
#define blue 8

void setup(){
    pinMode(green,OUTPUT);
    pinMode(red,OUTPUT);
    pinMode(blue,OUTPUT);
}

void loop(){
    analogWrite(red,75);
    analogWrite(green,80);
    analogWrite(blue,40);
    delay(2000);
     analogWrite(red,100);
    analogWrite(green,100);
    analogWrite(blue,200);
    delay(2000);
}