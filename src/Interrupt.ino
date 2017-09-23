#define INTERRUPT_PIN D6
#define LED_PIN D7

volatile int state = LOW;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(INTERRUPT_PIN, INPUT_PULLDOWN);
    attachInterrupt(INTERRUPT_PIN, blink, CHANGE);
}

void loop()
{
    digitalWrite(LED_PIN, state);
}

void blink()
{
    state = digitalRead(INTERRUPT_PIN);
}
