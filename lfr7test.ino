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
    Serial.println("F");
  }
  else
  {
    if (!digitalRead(ir2) || !digitalRead(ir1))
    {
      Serial.println("L");
    }
    else if (!digitalRead(ir4) || !digitalRead(ir5))
    {
      Serial.println("R");
    }
    else
    {
      if (!digitalRead(ir6))
      {
        Serial.println("LL");
      }
      else if (!digitalRead(ir7))
      {
        Serial.println("RR");
      }
    }
  }
}
