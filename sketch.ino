int segmentPins[] = {2, 3, 4, 5, 6, 7, 8}; 
int commonPin = 9; 
bool digitPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, 
  {0, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 0, 1, 1, 0, 1}, 
  {1, 1, 1, 1, 0, 0, 1}, 
  {0, 1, 1, 0, 0, 1, 1}, 
  {1, 0, 1, 1, 0, 1, 1}, 
  {1, 0, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 1, 0, 1, 1}  
};
void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  pinMode(commonPin, OUTPUT);
  digitalWrite(commonPin, LOW);
  Serial.begin(9600);
  Serial.println("Seven Segment Display - Counting 0 to 9");
}
void loop() {
  for (int number = 0; number <= 9; number++) {
    displayNumber(number);
    Serial.print("Displaying: ");
    Serial.println(number);
    delay(1000); 
  }
}
void displayNumber(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], LOW);
  }
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], digitPatterns[number][i]);
  }
}
void displaySegments(bool a, bool b, bool c, bool d, bool e, bool f, bool g) {
  digitalWrite(segmentPins[0], a); 
  digitalWrite(segmentPins[1], b); 
  digitalWrite(segmentPins[2], c); 
  digitalWrite(segmentPins[3], d); 
  digitalWrite(segmentPins[4], e); 
  digitalWrite(segmentPins[5], f); 
  digitalWrite(segmentPins[6], g); 
}
