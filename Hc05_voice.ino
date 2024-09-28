// define led pins
int Green = 3;// green led
int Orange = 4;//orange led
int Red = 5;//red led

void setup() {
  Serial.begin(9600);
  pinMode(Green,OUTPUT);
  pinMode(Orange,OUTPUT);
  pinMode(Red,OUTPUT);
  

}


char c;
String voice;

void loop() {
  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }

  if(voice=="green")// Check if word said is green
  {
    digitalWrite(Green,HIGH);//Turn green led on
  } else if(voice=="green off")
  {
    digitalWrite(Green,LOW);//Turn green led off
  }

    if(voice=="orange")
  {
    digitalWrite(Orange,HIGH);//Turn orange led on
  } else if(voice=="Orange off")
  {
    digitalWrite(Orange,LOW);////Turn orange led off
  }

  
  if(voice=="red")
  {
    digitalWrite(Red,HIGH);////Turn red led on
  } else if(voice=="read off")
  {
    digitalWrite(Red,LOW);//Turn ree led off
  }

}
