/*
    Project name : IR Infrared Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-ir-infrared-sensor
*/

// Define the pin connected to the IR sensor
#define IR_SENSOR_PIN 2

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(IR_SENSOR_PIN, INPUT); // Set the sensor pin as input
}

void loop() {
  // Read the sensor value
  int irValue = digitalRead(IR_SENSOR_PIN);
  
  // Check if object is detected
  if (irValue == HIGH) {
    Serial.println("Object detected!"); // Print message if object is detected
  } else {
    Serial.println("No object detected"); // Print message if no object is detected
  }
  
  delay(1000); // Delay for stability
}
