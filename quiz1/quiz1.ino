
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

const int redButton = 2;
const int greenButton = 3;
const int blueButton = 4;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    pinMode(redButton, INPUT_PULLUP);
    pinMode(greenButton, INPUT_PULLUP);
    pinMode(blueButton, INPUT_PULLUP);
}

void loop() {
    int redPressed = digitalRead(redButton) == LOW;
    int greenPressed = digitalRead(greenButton) == LOW;
    int bluePressed = digitalRead(blueButton) == LOW;

    analogWrite(redPin, redPressed ? 255 : 0);
    analogWrite(greenPin, greenPressed ? 255 : 0);
    analogWrite(bluePin, bluePressed ? 255 : 0);
}


