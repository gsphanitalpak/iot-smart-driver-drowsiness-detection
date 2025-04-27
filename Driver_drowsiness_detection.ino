#include<LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
int ir = 2;
int relay = 5;
#define buzz 13
String msg;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("DRIVER DROWN");
  lcd.setCursor(0, 1);
  lcd.print("DETECTION");
  delay(2000);
  pinMode(ir,INPUT);
  pinMode(relay, OUTPUT);
  pinMode(buzz, OUTPUT);


  digitalWrite(relay, LOW);
  digitalWrite(buzz, LOW);
}
void loop()
{ 
  int ir_val = digitalRead(ir);
  Serial.println("IR VALUE");
  Serial.println(ir_val);
  delay(2000);

  if (ir_val == 0) {
    digitalWrite(relay, HIGH);
    digitalWrite(buzz, HIGH);
    delay(2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" DROWSINESS");
    lcd.setCursor(0, 1);
    lcd.print("DETECTED");
    delay(2000);
    msg = " drowsiness detected";
    send_sms();
    delay(2000);
  }
  else {
    digitalWrite(relay, LOW);
    digitalWrite(buzz, LOW);
  }
}
void send_sms()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Message sending...");
  Serial.println("AT");
  delay(1000);
  Serial.println("ATE0");
  delay(1000);
  Serial.println("AT+CMGF=1");
  delay(1000);
  Serial.println("AT+CMGS=\"+917228031064\"");
  delay(1000);
  Serial.println(msg);
  delay(1000);
  Serial.write(26);
  Serial.println("Message sent..");
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Message sent...");
  delay(1000);
}
