// Code has been derived and used from reference; Particle's 'Blink an LED' tutorial.

// We define MY_LED to be the LED that we want to blink.
const pin_t MY_LED = D7;

// Allows code to run before the cloud is connected.
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	// Defining PIN as an output.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop()
{
    //"S"
	digitalWrite(MY_LED, HIGH);
	delay(250ms);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
	
	digitalWrite(MY_LED, HIGH);
	delay(250ms);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
	
	digitalWrite(MY_LED, HIGH);
	delay(250ms);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
	
	delay(1s);
	
	//"I"
	digitalWrite(MY_LED, HIGH);
	delay(250ms);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
	
	digitalWrite(MY_LED, HIGH);
	delay(250ms);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
	
	delay(1s);
	
	//"M"
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	delay(1s);
	
	//"O"
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	delay(1s);
	
	//"N"
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(250ms);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
	
	delay(1s);
	
	delay(5s);
	
	// And repeat!
}