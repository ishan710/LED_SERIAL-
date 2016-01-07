
int ledPin=13;
int state = LOW;
String string="";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //String string=""; //empty string
  //while (1);
  if(Serial.available())
              {
                          char ch =  (char) Serial.read();
                         // Serial.print("[");
                         // Serial.print(ch);
                         // Serial.println("]");
                          string += ch;
                          //string.lenght
                          if (string.length() == 5)
                          Serial.println(string);
                         if( string== "white"){
                         
                      state=!state;
                   digitalWrite(ledPin, state);
                   if( string== "green"){
                         
                      state=!state;
                   digitalWrite(12, state);
                   if( string== "pinky"){
                         
                      state=!state;
                   digitalWrite(11, state);
                   
                   
                   
                   
                 }
                 
                 Serial.flush();
              }  

                         }
              
              
              }}
  //Serial.println(string);
  
