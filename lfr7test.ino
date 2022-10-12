int ir1 = 2;
int ir2 = 3;
int ir3 = 4;
int ir4 = 5;
int ir5 = 6;
int ir6 = 11;
int ir7 = 12;

int lm1 = 8;
int lm2 = 7;
int rm1 = 9;
int rm2 = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
  pinMode(ir6, INPUT);
  pinMode(ir7, INPUT);

  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (!digitalRead(ir3))
  {
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
  }
  else
  {
    if (!digitalRead(ir2) || !digitalRead(ir1))
    {
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,LOW);
    }
    else if (!digitalRead(ir4) || !digitalRead(ir5))
    {
      digitalWrite(lm1,LOW);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
    }
    else
    {
      if (!digitalRead(ir6))
      {
        digitalWrite(lm1,LOW);
        digitalWrite(lm2,HIGH);
        digitalWrite(rm1,HIGH);
        digitalWrite(rm2,LOW);
      }
      else if (!digitalRead(ir7))
      {
        digitalWrite(lm1,HIGH);
        digitalWrite(lm2,LOW);
        digitalWrite(rm1,LOW);
        digitalWrite(rm2,HIGH);
      }
    }
  }
}
