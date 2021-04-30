int transformer_voltage = 0;
int dummy = 0;

const int high_delay = 8000, low_delay = 1750;

int a1 = 2, a2 = 3, a3 = 4, a4 = 5;


void setup() {
  Serial.begin(250000);
  pinMode(7, INPUT_PULLUP);
  
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(a4, OUTPUT);
}

void loop() {
    transformer_voltage = digitalRead(A0);
    //Serial.println(transformer_voltage);
    zerocross(); 
}

void zerocross()
{
  if(transformer_voltage == 0 && dummy == 0)
    {
      //Rising Edge......
      digitalWrite(a2, HIGH);
      delayMicroseconds(high_delay);
      digitalWrite(a2, LOW);
      delayMicroseconds(low_delay);
      digitalWrite(a1, HIGH);
      delayMicroseconds(high_delay);
      digitalWrite(a1, LOW);
      delayMicroseconds(low_delay);
      digitalWrite(a2, HIGH);
      delayMicroseconds(high_delay);
      digitalWrite(a2, LOW);
      delayMicroseconds(low_delay);

      
      digitalWrite(a3, HIGH);
      delayMicroseconds(high_delay);
      digitalWrite(a3, LOW);
      delayMicroseconds(low_delay);
      digitalWrite(a4, HIGH);
      delayMicroseconds(high_delay);
      digitalWrite(a4, LOW);
      delayMicroseconds(low_delay);
      digitalWrite(a3, HIGH);
      delayMicroseconds(high_delay);
      digitalWrite(a3, LOW);
      delayMicroseconds(low_delay);
      
      dummy = 1;
    }
    
    if(transformer_voltage == 1 && dummy == 1)
    {
     //Falling Edge......
      dummy = 0;
    }
}


