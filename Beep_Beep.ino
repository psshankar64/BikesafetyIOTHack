#define Alarm1  8



void setup() 
{
  pinMode(Alarm1, OUTPUT);
  Serial.begin(9600);

}

void loop()
{      
      static int toggleflag = 0;
      delay(250);
      digitalWrite(Alarm1, !digitalRead(Alarm1));
      toggleflag += 1;
      if(toggleflag == 4)
      {
        delay(1000);
        toggleflag = 0;
      }
}


