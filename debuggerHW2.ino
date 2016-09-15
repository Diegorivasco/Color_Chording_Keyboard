  
#if defined(ARDUINO) 
SYSTEM_MODE(SEMI_AUTOMATIC); 
#endif

//typeintoserial: screen /dev/tty.usbmodemFD121 9600 to display output

// array location: 0   1     2   3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18   19   20   21   22   23   24   25   26 
int keys[10]={    D0,  D1,  D2,  D3,  D4,  D8,  D9,  D10, D11, D12                                                                                     };
char letters[27]={'e', 't', 'a', 'o', ' ', 'i', 'n', 's', 'h', 'r', 'd', 'l', 'c', 'u', 'm', 'w', 'f', 'g', 'y', 'p', 'b', 'v', 'k', 'j', 'x', 'q', 'z'};
int n1,n2,n3,n4,n5,n6,n7,n8,n9;
//note that a total of 26 inputs are needed using 10 switches


void setup() {
  Serial.begin(9600);

     for (int thisPin = 0; thisPin < 10; thisPin++) {    //All resistors defined as internal pullups, when input is triggered reading goes LOW
        pinMode(keys[thisPin], INPUT_PULLUP);
     }
     //CHANGE, RISING or FALLING  
    
}

void twokeys(){
  Serial.println("two");
}


void loop() {


  //high = 0.7* Vinput ; low = 0.3* Vinput
          //hard coding every combination below
          

          //printing 'e'
          if(digitalRead(keys[0]) == LOW && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH && digitalRead(keys[3]) == HIGH ){         
            delay(100);
            if(digitalRead(keys[0]) == LOW &&  digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH && digitalRead(keys[3]) ) {
             Serial.print(letters[0]);
            }
          }

          //printing 'd'
          else if(digitalRead(keys[0]) == LOW && digitalRead(keys[1]) == LOW && digitalRead(keys[4]) == HIGH && digitalRead(keys[3]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[0]) == LOW &&  digitalRead(keys[1]) == LOW && digitalRead(keys[4]) == HIGH && digitalRead(keys[3]) == HIGH) {
             Serial.print(letters[10]);
            }     
          }

          //printing 'p'
          else if(digitalRead(keys[0]) == LOW && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == LOW && digitalRead(keys[3]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[0]) == LOW &&  digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == LOW && digitalRead(keys[3]) == HIGH) {
             Serial.print(letters[19]);
            }     
          }

          //printing 'q'
          else if(digitalRead(keys[0]) == LOW && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH && digitalRead(keys[3]) == LOW ){         //firstcheck
            delay(100);
            if(digitalRead(keys[0]) == LOW &&  digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH && digitalRead(keys[3]) == LOW) {
             Serial.print(letters[25]);
            }     
          }

          //-----------printing 't'
          else if(digitalRead(keys[1]) == LOW && digitalRead(keys[0]) == HIGH && digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[1]) == LOW &&  digitalRead(keys[0]) == HIGH && digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[1]);
            }     
          }

          
          //printing 'w'
          else if(digitalRead(keys[1]) == LOW && digitalRead(keys[0]) == HIGH && digitalRead(keys[2]) == LOW && digitalRead(keys[4]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[1]) == LOW &&  digitalRead(keys[0]) == HIGH && digitalRead(keys[2]) == LOW && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[15]);
            }     
          }

          //printing 'b'
          else if(digitalRead(keys[1]) == LOW && digitalRead(keys[0]) == HIGH && digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == LOW ){         //firstcheck
            delay(100);
            if(digitalRead(keys[1]) == LOW &&  digitalRead(keys[0]) == HIGH && digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == LOW) {
             Serial.print(letters[20]);
            }     
          }

           //-------printing 'a'
          else if(digitalRead(keys[2]) == LOW && digitalRead(keys[3]) == HIGH && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[2]) == LOW &&  digitalRead(keys[3]) == HIGH && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[2]);
            }     
          }

           //printing 'l'
          else if(digitalRead(keys[2]) == LOW && digitalRead(keys[3]) == LOW && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[2]) == LOW &&  digitalRead(keys[3]) == LOW && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[11]);
            }     
          }


           //printing 'v'
          else if(digitalRead(keys[2]) == LOW && digitalRead(keys[3]) == HIGH && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == LOW ){         //firstcheck
            delay(100);
            if(digitalRead(keys[2]) == LOW &&  digitalRead(keys[3]) == HIGH && digitalRead(keys[1]) == HIGH && digitalRead(keys[4]) == LOW) {
             Serial.print(letters[21]);
            }     
          }

          //-------printing 'o'
          else if(digitalRead(keys[3]) == LOW && digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == HIGH && digitalRead(keys[1]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[3]) == LOW &&  digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == HIGH && digitalRead(keys[1]) == HIGH) {
             Serial.print(letters[3]);
            }     
          }

           //printing 'l'
          else if(digitalRead(keys[3]) == LOW && digitalRead(keys[2]) == LOW && digitalRead(keys[4]) == HIGH && digitalRead(keys[1]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[3]) == LOW &&  digitalRead(keys[2]) == LOW && digitalRead(keys[4]) == HIGH && digitalRead(keys[1]) == HIGH) {
             Serial.print(letters[11]);
            }     
          }

          //printing 'f'
          else if(digitalRead(keys[3]) == LOW && digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == LOW && digitalRead(keys[1]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[3]) == LOW &&  digitalRead(keys[2]) == HIGH && digitalRead(keys[4]) == LOW && digitalRead(keys[1]) == HIGH) {
             Serial.print(letters[16]);
            }     
          }

          //--------printing 'space'
          else if(digitalRead(keys[4]) == LOW && digitalRead(keys[5]) == HIGH ){         //firstcheck
            delay(100);
            if(digitalRead(keys[4]) == LOW &&  digitalRead(keys[5]) == HIGH ) {
             Serial.print(letters[4]);
            }     
          }

          //printing 'c'
          else if(digitalRead(keys[4]) == LOW && digitalRead(keys[5]) == LOW ){         //firstcheck
            delay(100);
            if(digitalRead(keys[4]) == LOW &&  digitalRead(keys[5]) == LOW ) {
             Serial.print(letters[12]);
            }     
          }

          //--------printing 'i'
          else if(digitalRead(keys[5]) == LOW && digitalRead(keys[6]) == HIGH && digitalRead(keys[9]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[5]) == LOW &&  digitalRead(keys[6]) == HIGH && digitalRead(keys[9]) == HIGH) {
             Serial.print(letters[5]);
            }     
          }

          //printing 'g'
          else if(digitalRead(keys[5]) == LOW && digitalRead(keys[6]) == LOW && digitalRead(keys[9]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[5]) == LOW &&  digitalRead(keys[6]) == LOW && digitalRead(keys[9]) == HIGH) {
             Serial.print(letters[17]);
            }     
          }

          //printing 'z'
          else if(digitalRead(keys[5]) == LOW && digitalRead(keys[6]) == HIGH && digitalRead(keys[9]) == LOW){         //firstcheck
            delay(100);
            if(digitalRead(keys[5]) == LOW &&  digitalRead(keys[6]) == HIGH && digitalRead(keys[9]) == LOW) {
             Serial.print(letters[26]);
            }     
          }

          //--------printing 'n'
          else if(digitalRead(keys[6]) == LOW && digitalRead(keys[7]) == HIGH && digitalRead(keys[4]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[6]) == LOW &&  digitalRead(keys[7]) == HIGH && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[6]);
            }     
          }

          //printing 'u'
          else if(digitalRead(keys[6]) == LOW && digitalRead(keys[7]) == LOW && digitalRead(keys[4]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[6]) == LOW &&  digitalRead(keys[7]) == LOW && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[13]);
            }     
          }

          //printing 'k'
          else if(digitalRead(keys[6]) == LOW && digitalRead(keys[7]) == HIGH && digitalRead(keys[4]) == LOW){         //firstcheck
            delay(100);
            if(digitalRead(keys[6]) == LOW &&  digitalRead(keys[7]) == HIGH && digitalRead(keys[4]) == LOW) {
             Serial.print(letters[22]);
            }     
          }

          //--------printing 's'
          else if(digitalRead(keys[7]) == LOW && digitalRead(keys[8]) == HIGH && digitalRead(keys[4]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[7]) == LOW &&  digitalRead(keys[8]) == HIGH && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[7]);
            }     
          }

          //printing 'y'
          else if(digitalRead(keys[7]) == LOW && digitalRead(keys[8]) == LOW && digitalRead(keys[4]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[7]) == LOW &&  digitalRead(keys[8]) == LOW && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[18]);
            }     
          }

          //printing 'j'
          else if(digitalRead(keys[7]) == LOW && digitalRead(keys[8]) == HIGH && digitalRead(keys[4]) == LOW){         //firstcheck
            delay(100);
            if(digitalRead(keys[7]) == LOW &&  digitalRead(keys[8]) == HIGH && digitalRead(keys[4]) == LOW) {
             Serial.print(letters[23]);
            }     
          }

          //--------printing 'h'
          else if(digitalRead(keys[8]) == LOW && digitalRead(keys[9]) == HIGH && digitalRead(keys[4]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[8]) == LOW &&  digitalRead(keys[9]) == HIGH && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[8]);
            }     
          }

          //printing 'm'
          else if(digitalRead(keys[8]) == LOW && digitalRead(keys[9]) == LOW && digitalRead(keys[4]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[8]) == LOW &&  digitalRead(keys[9]) == LOW && digitalRead(keys[4]) == HIGH) {
             Serial.print(letters[14]);
            }     
          }

          //printing 'x'
          else if(digitalRead(keys[8]) == LOW && digitalRead(keys[9]) == HIGH && digitalRead(keys[4]) == LOW){         //firstcheck
            delay(100);
            if(digitalRead(keys[8]) == LOW &&  digitalRead(keys[9]) == HIGH && digitalRead(keys[4]) == LOW) {
             Serial.print(letters[24]);
            }     
          }

          //printing 'r'
          else if(digitalRead(keys[9]) == LOW && digitalRead(keys[8]) == HIGH && digitalRead(keys[5]) == HIGH){         //firstcheck
            delay(100);
            if(digitalRead(keys[9]) == LOW &&  digitalRead(keys[8]) == HIGH && digitalRead(keys[5]) == HIGH) {
             Serial.print(letters[9]);
            }     
          }


          

           


   
}


    
  





