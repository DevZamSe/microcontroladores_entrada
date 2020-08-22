int input;

void setup(){

  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
 
  Serial.begin(9600);
}
 
void loop(){
  if (Serial.available()>0){
     input=Serial.read();

      if(input == '1'){
        digitalWrite(13, HIGH);
      }
     
    switch(input) {
      case 'a':
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        break;
        
      case 'b':
          digitalWrite(12, HIGH);
          digitalWrite(11, LOW);
          delay(1000);
          digitalWrite(12, LOW);
          digitalWrite(11, HIGH); 
          delay(1000);
        break;
        
      default:
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
        break;
    }
  }
}
