int speakerPin1 = 6;
int speakerPin2 = 8;
int speakerPin3 = 7;

double BPM = 113.0;

//note types and how long (in MILLISECONDS) each one lasts
unsigned int noteBeat = (unsigned int)(round(60000.0/(BPM*4)));
unsigned int noteBeatTwo = noteBeat*2;
unsigned int noteBeatThree = noteBeat*3;
unsigned int noteBeatFour = noteBeat*4;
unsigned int noteBeatFive = noteBeat*5;
unsigned int noteBeatSix = noteBeat*6;
unsigned int noteBeatEight = noteBeat*8;
 
int C2 = 65;
int Cs2 = 69;
int D2 = 73;
int Ds2 = 78;
int E2 = 82;
int F2 = 87;
int Fs2 = 92;
int G2 = 98;
int Gs2 = 104;
int A_2 = 110;
int As2 = 117;
int B2 = 123;
int C3 = 131;
int Cs3 = 139;
int D3 = 147;
int Ds3 = 156;
int E3 = 165;
int F3 = 175;
int Fs3 = 185;
int G3 = 196;
int Gs3 = 208;
int A_3 = 220;
int As3 = 233;
int B3 = 247;
int C4 = 262;
int Cs4 = 277;
int D4 = 294;
int Ds4 = 311;
int E4 = 330;
int F4 = 349;
int Fs4 = 370;
int G4 = 392;
int Gs4 = 415;
int A_4 = 440;
int As4 = 466;
int B4 = 494;
int C5 = 523;
int Cs5 = 544;
int D5 = 587;
int Ds5 = 622;
int E5 = 659;
int F5 = 699;
int Fs5 = 740;
int G5 = 784;
int Gs5 = 831;
int A_5 = 880;

int silence = 1;

int notes1[58][2] = {{D4,noteBeatTwo},
                     {Cs4,noteBeatTwo},
                     {C4,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {C4,noteBeatTwo},
                     {Cs4,noteBeatTwo},
                     {D4,noteBeatFour},
                     {E4,noteBeatTwo},
                     {F4,noteBeatSix},
                     
                     {E4,noteBeatSix},
                     {Ds4,noteBeatSix},
                     {E4,noteBeatSix},
                     {silence,noteBeat},
                     {G3,noteBeat},
                     {A_3,noteBeat},
                     {B3,noteBeat},
                     {C4,noteBeat},
                     {D4,noteBeat},
                     
                     {E4,noteBeatSix},
                     {Ds4,noteBeatFour},
                     {F4,noteBeatTwo},
                     {E4,noteBeatSix},
                     {silence,noteBeatFive},
                     {G3,noteBeat},
                     
                     {D4,noteBeatSix},
                     {Cs4,noteBeatSix},
                     {D4,noteBeatSix},
                     {silence,noteBeat},
                     {G3,noteBeat},
                     {A_3,noteBeat},
                     {B3,noteBeat},
                     {C4,noteBeat},
                     {Cs4,noteBeat},
                     
                     {D4,noteBeatSix},
                     {G3,noteBeatFour},
                     {F4,noteBeatTwo},
                     {E4,noteBeatSix},
                     {silence,noteBeatFive},
                     {G3,noteBeat},//39
                   
                     {G4,noteBeatSix},
                     {G4,noteBeatSix},
                     {G4,noteBeatSix},
                     {G4,noteBeatTwo},
                     {A_4,noteBeatThree},
                     {G4,noteBeat}, //45
                   
                     {F4,noteBeatSix},
                     {F4,noteBeatSix},
                     {F4,noteBeatSix},
                     {F4,noteBeatTwo},
                     {G4,noteBeatThree},
                     {F4,noteBeat}, //51
                     
                     {E4,noteBeatSix},
                     {A_3,noteBeatTwo},
                     {B2,noteBeatTwo},
                     {F4,noteBeatTwo},
                     {E4,noteBeatFive},
                     {B3,noteBeat},
                     {C4,noteBeatSix}}; //58
                   
int notes2[43][2] = {{D4,noteBeatTwo},
                     {E4,noteBeatTwo},
                     {Fs4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {A_4,noteBeatTwo},
                     {As4,noteBeatTwo},
                     {B4,noteBeatFour},
                     {B4,noteBeatFour},
                     {B4,noteBeatTwo},
                     {G2,noteBeatTwo},//10
                   
                     {G3,noteBeatSix},
                     {Fs3,noteBeatSix},
                     {G3,noteBeatSix},
                     {silence,noteBeatSix},
                   
                     {G3,noteBeatSix},
                     {Fs3,noteBeatFour},
                     {A_3,noteBeatTwo},
                     {G3,noteBeatSix},
                     {silence,noteBeatSix}, //19
                   
                     {F3,noteBeatSix},
                     {E3,noteBeatSix},
                     {F3,noteBeatSix},
                     {silence,noteBeatSix},
                   
                     {F3,noteBeatSix},
                     {B2,noteBeatFour},
                     {A_3,noteBeatTwo},
                     {G3,noteBeatSix},
                     {silence,noteBeatSix}, //28
                   
                     {E4,noteBeatSix},
                     {D4,noteBeatSix},
                     {Cs4,noteBeatSix},
                     {Cs4,noteBeatSix},
                   
                     {D4,noteBeatSix},
                     {Cs4,noteBeatSix},
                     {C4,noteBeatSix},
                     {C4,noteBeatSix},
                   
                     {C4,noteBeatSix},
                     {F4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},
                     {B4,noteBeatFive},
                     {F4,noteBeat},
                     {E4,noteBeatSix}}; //43
                     
int notes3[89][2] = {{silence,noteBeatSix},
                     {silence,noteBeatSix},
                     {silence,noteBeatFour},
                     {B3,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {silence,noteBeatFour}, //6
                     
                     {C4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {C5,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},
                     {C4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {C5,noteBeatTwo},
                     {E4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {C5,noteBeatTwo},//18
                     
                     {C4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {C5,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},
                     {C4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {C5,noteBeatTwo},
                     {E4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {C5,noteBeatTwo},//30
                     
                     {D4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},
                     {Cs4,noteBeatTwo},
                     {Fs4,noteBeatTwo},
                     {As4,noteBeatTwo},
                     {D4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},//42
                     
                     {D4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {B4,noteBeatTwo},
                     {C4,noteBeatTwo},
                     {G3,noteBeatTwo},
                     {C5,noteBeatTwo},
                     {G3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {C5,noteBeatTwo},//54
                     
                     {C4,noteBeatTwo},
                     {A_4,noteBeatTwo},
                     {E5,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {D5,noteBeatTwo},
                     {As3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {Cs5,noteBeatTwo},
                     {Cs4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {E5,noteBeatTwo},//66
                     
                     {D4,noteBeatTwo},
                     {A_4,noteBeatTwo},
                     {F5,noteBeatTwo},
                     {Cs4,noteBeatTwo},
                     {A_4,noteBeatTwo},
                     {F5,noteBeatTwo},
                     {C4,noteBeatTwo},
                     {A_4,noteBeatTwo},
                     {F5,noteBeatTwo},
                     {B3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {F5,noteBeatTwo},//78
                     
                     {C3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {E5,noteBeatTwo},
                     {G3,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {G4,noteBeatTwo},
                     {F4,noteBeat},
                     {F4,noteBeat},
                     {F4,noteBeatThree},
                     {B3,noteBeat},
                     {C4,noteBeatSix}};//89              
                     
boolean temp = false; 
                   

//speakerTimer will make the right amount of time between switching the speaker high and low to create the right tone. speakerTimer units are in MICROSECONDS
unsigned long speakerTimerGoal1 = 0;
unsigned long speakerTimerGoal2 = 0;
unsigned long speakerTimerGoal3 = 0;

unsigned long speakerTimerCurrent1 = 0;
unsigned long speakerTimerCurrent2 = 0;
unsigned long speakerTimerCurrent3 = 0;

//how much time (in microseconds) is the period of the wave?
unsigned long speakerPeriod1 = 0;
unsigned long speakerPeriod2 = 0;
unsigned long speakerPeriod3 = 0;

boolean speakerIsLow1 = true;
boolean speakerIsLow2 = true;
boolean speakerIsLow3 = true;

boolean playSpeaker1 = true;
boolean playSpeaker2 = true;
boolean playSpeaker3 = true;


//songTimer will keep track of where you are in the entire song, to figure out when to switch notes being played. songTimer units are in MILLISECONDS
unsigned long songTimerGoal1 = 0;
unsigned long songTimerCurrent1 = 0;

unsigned long songTimerGoal2 = 0;
unsigned long songTimerCurrent2 = 0;

unsigned long songTimerGoal3 = 0;
unsigned long songTimerCurrent3 = 0;

int noteCount1 = 0;
int noteCount2 = 0;
int noteCount3 = 0;

 
void setup()
{
  //Serial.begin(9600);
  pinMode(speakerPin1,OUTPUT);
  pinMode(speakerPin2,OUTPUT);
  pinMode(speakerPin3,OUTPUT);
  
  speakerPeriod1 = (long)(1000000.0/notes1[0][0]);
  speakerPeriod2 = (long)(1000000.0/notes2[0][0]);
  speakerPeriod3 = (long)(1000000.0/notes3[0][0]);
  
  //Serial.println(temp);
  
  
  
  if((int)(notes1[0,0]) == silence)
  {
     playSpeaker1 = false; 
  }
  else
  {
     playSpeaker1 = true; 
  }
  
  if((int)(notes2[0,0]) == silence)
  {
     playSpeaker2 = false; 
  }
  else
  {
     playSpeaker2 = true; 
  }
  
  if((int)(notes3[0,0]) == silence)
  {
     playSpeaker3 = false; 
  }
  else
  {
     playSpeaker3 = true; 
  }
  
  songTimerGoal1 = notes1[0][1];
  songTimerGoal2 = notes2[0][1];
  songTimerGoal3 = notes3[0][1];
}

//void loop()
//{
  
//}


void loop()
{
  songTimerCurrent1 = millis();
  if(songTimerCurrent1 >= songTimerGoal1)
  {
      noteCount1+=1;
      noteCount1 = noteCount1 % 58;
      songTimerGoal1 += notes1[noteCount1][1];
      speakerPeriod1 = (long)(1000000.0/notes1[noteCount1][0]);
  
      if((notes1[noteCount1][0]) == silence)
      {
         playSpeaker1 = false; 
      }
      else
      {
         playSpeaker1 = true; 
      }
      //for(int c = 0; c < noteCount1; c++)
      {
        //Serial.print(" ");
      }
      //Serial.println(playSpeaker1);
  }
  
  songTimerCurrent2 = songTimerCurrent1;
  if(songTimerCurrent2 >= songTimerGoal2)
  {
      noteCount2+=1;
      noteCount2 = noteCount2 % 43;
      songTimerGoal2 += notes2[noteCount2][1];
      speakerPeriod2 = (long)(1000000.0/notes2[noteCount2][0]);
      
      if((notes2[noteCount2][0]) == silence)
      {
         playSpeaker2 = false; 
      }
      else
      {
         playSpeaker2 = true; 
      }
      //Serial.println(playSpeaker2);
  }
  
  songTimerCurrent3 = songTimerCurrent1;
  if(songTimerCurrent3 >= songTimerGoal3)
  {
      noteCount3+=1;
      noteCount3 = noteCount3 % 89;
      songTimerGoal3 += notes3[noteCount3][1];
      speakerPeriod3 = (long)(1000000.0/notes3[noteCount3][0]);
      
      if((notes3[noteCount3][0]) == silence)
      {
         playSpeaker3 = false; 
      }
      else
      {
         playSpeaker3 = true; 
      }
      //Serial.println(playSpeaker3);
  }
  
  
  
  
  speakerTimerCurrent1 = micros(); 
  if(playSpeaker1 == true && speakerTimerCurrent1 >= speakerTimerGoal1)
  {
      if(speakerIsLow1)
      {
        digitalWrite(speakerPin1,HIGH);
        speakerIsLow1 = false;
      }
      else
      {
        digitalWrite(speakerPin1,LOW);
        speakerIsLow1 = true;
      }
      speakerTimerGoal1+=speakerPeriod1/2;
  }
  
  speakerTimerCurrent2 = speakerTimerCurrent1;
  if(playSpeaker2 == true && speakerTimerCurrent2 >= speakerTimerGoal2)
  {
      if(speakerIsLow2)
      {
        digitalWrite(speakerPin2,HIGH);
        speakerIsLow2 = false;
      }
      else
      {
        digitalWrite(speakerPin2,LOW);
        speakerIsLow2 = true;
      }
      speakerTimerGoal2+=speakerPeriod2/2;
  }
  
  speakerTimerCurrent3 = speakerTimerCurrent1;
  if(playSpeaker3 == true && speakerTimerCurrent3 >= speakerTimerGoal3)
  {
      if(speakerIsLow3)
      {
        digitalWrite(speakerPin3,HIGH);
        speakerIsLow3 = false;
      }
      else
      {
        digitalWrite(speakerPin3,LOW);
        speakerIsLow3 = true;
      }
      speakerTimerGoal3+=speakerPeriod3/2;
  }
}


