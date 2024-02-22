#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd ( 7, 6, 5, 4, 3, 2 ) ;
#define SS_PIN 10
#define RST_PIN 8
String a;
int score=0;
MFRC522 rfid(SS_PIN, RST_PIN);
void setup() {
  Serial.begin(9600);
  SPI.begin(); // init SPI bus
  rfid.PCD_Init(); // init MFRC522

  Serial.println("Tap RFID/NFC Tag on reader");
  lcd.begin(16, 4);
}

void loop() {
reader();
 //Serial.print(a);
lcd.clear();
 lcd.setCursor(0,0);
  lcd.print(" Shall We Begin? ");
  lcd.setCursor(2,1);
  lcd.print("");
  lcd.setCursor(1,2);
  lcd.print("");
lcd.setCursor(1,3);
  lcd.print(" ");
  Serial.println("shall we begin");
 while ((a!="137")&&(a!="69")&&(a!="85")){
   reader();
   delay(500);
 }

//lcd.print("Shall we begin?");
a="0";
lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("What is the high");
  lcd.setCursor(0,1);
  lcd.print("-est grossing");
  lcd.setCursor(0,2);
  lcd.print("film of all time");
  delay(4000);

lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("A.Titanic");
  lcd.setCursor(0,1);
  lcd.print("B.Endgame");
  lcd.setCursor(0,2);
  lcd.print("C.Avatar");
   
 Serial.println("ok ok ");
 Serial.println("what is the highest grossing movie of all time a.avatar b.endgame c.titanic");
 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
   delay(500);
 }
if(a=="69")
{
  score=score+1;
} 
Serial.println("next question"); 

a="0";
lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("Who is the first");
  lcd.setCursor(0,1);
  lcd.print("Tamil actor to");
  lcd.setCursor(0,2);
  lcd.print("go to Hollywood?");
  delay(4000);

lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("A.Rajinikanth");
  lcd.setCursor(0,1);
  lcd.print("B.Dhanush");
  lcd.setCursor(0,2);
  lcd.print("C.Tabu");


 Serial.println("who is the first tamil actor to go to hollywood? a.Dhanush b.Ranjinikanth c.Tabu");
 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
 }
 if(a=="137")
{
  score=score+1;
} 


 a="0";
 lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("Who is the");
  lcd.setCursor(0,1);
  lcd.print("highest wicket");
  lcd.setCursor(0,2);
  lcd.print("taker in");
  lcd.setCursor(0,3);
  lcd.print("Women's cricket?");
  delay(4000);

lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("A.Nicola Carey");
  lcd.setCursor(0,1);
  lcd.print("B.Jhulan Goswami");
  lcd.setCursor(0,2);
  lcd.print("C.Smriti Mandana");

 Serial.println("who has got the most runs in test cricket? a.Sachin tendulkar b.Brian Lara c.Donald Bradman");
 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
 }
 if(a=="85")
{
  score=score+1;
} 

 Serial.println("next question");


a="0";
lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("Which among");
  lcd.setCursor(0,1);
  lcd.print("these is not");
  lcd.setCursor(0,2);
  lcd.print("owned by an");
lcd.setCursor(0,3);
  lcd.print("Indian company?");
  delay(4000);

lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("A.Louis Philippe");
  lcd.setCursor(0,1);
  lcd.print("B.Tommy Hilfiger");
  lcd.setCursor(0,2);
  lcd.print("C.Peter England");

 Serial.println("who has won the most organe caps in ipl? a.KL Rahul b.David Warner c.Shewag");
 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
 }
 if(a=="85")
{
  score=score+1;
} 
 Serial.println("next question"); 


a="0";
lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("Which planet in");
  lcd.setCursor(0,1);
  lcd.print("the solar system");
  lcd.setCursor(0,2);
  lcd.print("has the most");
lcd.setCursor(0,3);
  lcd.print("no. of moons?");
  delay(4000);

lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("A.Saturn");
  lcd.setCursor(0,1);
  lcd.print("B.Jupiter");
  lcd.setCursor(0,2);
  lcd.print("C.Mercury");
  delay(4000);

Serial.println("who has got the highest wickets in womens'cricket? a.Jhulan Goswami b.Aled Carey c.Smriti Mandhana");
 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
 }
 if(a=="137")
{
  score=score+1;
} 
 Serial.println("next question"); 

a="0";
lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("The World War 1");
  lcd.setCursor(0,1);
  lcd.print("started in");
  lcd.setCursor(0,2);
  lcd.print("the year __");
  delay(4000);

lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("A.1942");
 lcd.setCursor(0,1);
 lcd.print("B.1914");
 lcd.setCursor(0,2);
 lcd.print("C.1928");

 Serial.println("what is WHO? a.World Health Organisation b.Wide Health Organistation c.World Healing Organisation");
 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
 }
 if(a=="85")
{
  score=score+1;
} 
 a="0";
 lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("What are group");
  lcd.setCursor(0,1);
  lcd.print("of Pandas");
  lcd.setCursor(0,2);
  lcd.print("called as?");
  delay(4000);

 lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("A.Parliament");
  lcd.setCursor(0,1);
  lcd.print("B.Smack");
  lcd.setCursor(0,2);
  lcd.print("C.Embarassment");

 Serial.println("what is WHO? a.World Health Organisation b.Wide Health Organistation c.World Healing Organisation");
 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
 }
 if(a=="69")
{
  score=score+1;
} 




 Serial.println("next question");




a="0";
lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("Which country");
  lcd.setCursor(0,1);
  lcd.print("has won the");
  lcd.setCursor(0,2);
  lcd.print("most World Cups");
  lcd.setCursor(0,3);
  lcd.print("(Football)");
  delay(4000);

lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("A.Germany");
 lcd.setCursor(0,1);
 lcd.print("B.France");
 lcd.setCursor(0,2);
 lcd.print("C.Brazil");

 while((a!="137")&&(a!="69")&&(a!="85")){
   reader();
 }
 if(a=="69")
{
  score=score+1;
} 


 lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("End of the QUIZ,");
  lcd.setCursor(0,1);
  lcd.print("Thank you for");
  lcd.setCursor(0,2);
  lcd.print("your response");
  delay(2000);

lcd.clear();
lcd.setCursor(0,0);
 lcd.print("Your Score.");
 delay(300);
 lcd.setCursor(0,1);
 lcd.print("Your Score..");
 delay(300);
 lcd.setCursor(0,2);
 lcd.print("Your Score...");
 delay(300);
 lcd.setCursor(0,3);
 lcd.print("Your Score....");
 delay(400);

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("You've answered:");
 lcd.setCursor(7,1);
 lcd.print(score);
 lcd.setCursor(0,2);
 lcd.print("questions right");
 delay(5000);


 lcd.clear();
 lcd.setCursor(5,3);
 lcd.print("Thank YOU");







 Serial.println("end of the quiz Thank you for your response"); 
 Serial.println("Your Score.");
 delay(1000);
 Serial.println("Your Score..");
 delay(1000);
 Serial.println("Your Score...");
 delay(1000);
 Serial.println("Your Score....");
 delay(1000);
 Serial.println(".....");
 delay(1000);
 Serial.println("Your Score.....");
 delay(1000);
 Serial.println("Your have answered:");
 Serial.print(score);
 Serial.print("correctly");
 delay(1000);



} 
void reader(){
  if (rfid.PICC_IsNewCardPresent()) { // new tag is available
    if (rfid.PICC_ReadCardSerial()) { // NUID has been readed
      MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
      //Serial.print("RFID/NFC Tag Type: ");
      //Serial.println(rfid.PICC_GetTypeName(piccType));

      // print NUID in Serial Monitor in the hex format
      Serial.print("UID:");
      for (int i = 0; i < rfid.uid.size; i++) {
        Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
        Serial.print(rfid.uid.uidByte[i], HEX);
        a=rfid.uid.uidByte[0];
        //Serial.println(a);
      }
      Serial.println();
      Serial.println(a);
      Serial.println();
      /*if(a=="137"){
     Serial.println("card");
      }
      if(a=="162"){
        Serial.println("key punch");
      }*/

      rfid.PICC_HaltA(); // halt PICC
      rfid.PCD_StopCrypto1(); // stop encryption on PCD
      
    }
  }

}