// C++ code
//
void setup()
{
 //DDRD=0B00000100;//APRINDE LED ROSU
  //VAERIFICARE SEGMETE
  //DDRD=0B11111100;
  //DDRB=0B00000011;
  
  DDRD=0B11111100;//iesire segment 7
  DDRC=0B00110000;//iesiri pentru coloane+iesire segment
  DDRB=0B00111111;//intrari linii
}
void loop()
{
  
  //activare coloana 1
  PORTB|=0B00100000; 
  //verificam tasta apasata pentru linia 1
  if (PINC&(1<<0))
      //CIFRA 1
      {
        PORTB|=(1<<1);//B
        PORTD|=(1<<3);//C
    delay(1000);
    PORTB&=~(1<<1);
    PORTD&=0;
      }
      
  
  if (PINC&(1<<1))
      //CIFRA 4
      {
        PORTB|=(1<<1);//B
        PORTD|=(1<<3)|(1<<6)|(1<<7);//C G F
    delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
      
   if (PINC&(1<<2))
      //CIFRA 7
      {
        PORTB|=(1<<1)|(1<<0);//B SI A
        PORTD|=(1<<3);//C
     delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
  if (PINC&(1<<3))
      //SIMBOLUL *
      {
        
		PORTC|=(1<<5);
     delay(200);
	 
    PORTC&=0;

    
    
    }
 //dezactivam col 1
    PORTB&=~0B00100000; 
   //activare coloana 2
  PORTB|=0B00010000; 
  
  if (PINC&(1<<0))
      //CIFRA 2
      {
        PORTB|=(1<<1)|(1<<0);//B A
        PORTD|=(1<<6)|(1<<5)|(1<<4);//C
    delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
      
  
  if (PINC&(1<<1))
      //CIFRA 5
      {
        PORTB|=(1<<0);//a
        PORTD|=(1<<3)|(1<<6)|(1<<7)|(1<<4);//C G F D
    delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
      
   if (PINC&(1<<2))
      //CIFRA 8
      {
        PORTB|=(1<<0)|(1<<1);//a B
        PORTD|=(1<<3)|(1<<6)|(1<<7)|(1<<4)|(1<<5);//C G F D E
     delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
  if (PINC&(1<<3))
      //CIFRA 0
      {
        PORTB|=(1<<0)|(1<<1);//a B
        PORTD|=(1<<3)|(1<<7)|(1<<4)|(1<<5);//C G F D E
     delay(1000);
    PORTB&=0;
    PORTD&=0;
    
    }
   //activare coloana 2
  PORTB|=0B00010000; 
  
    //activare coloana 3
  PORTB=0B00001000; 
  
  if (PINC&(1<<0))
      //CIFRA 3
      {
        PORTB|=(1<<1)|(1<<0);//B A
        PORTD|=(1<<3)|(1<<6)|(1<<4);//C
    delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
      
  
  if (PINC&(1<<1))
      //CIFRA 6
      {
        PORTB|=(1<<0);//a
        PORTD|=(1<<3)|(1<<6)|(1<<7)|(1<<4)|(1<<5);//C G F D
    delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
      
   if (PINC&(1<<2))
      //CIFRA 9
      {
        PORTB|=(1<<0)|(1<<1);//a B
        PORTD|=(1<<3)|(1<<6)|(1<<7)|(1<<4);//C G F D E
     delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
	  if (PINC&(1<<3))
      //SIMBOLUL #
      {
        
		PORTD|=(1<<2);
     delay(200);
	 PORTD|=(1<<2);
     delay(200);
	  PORTD&=0;
	  }
      
	  
	  //activare coloana 4
  PORTB=0B00000100; 
  
  if (PINC&(1<<0))
      //LITERA A
      {
        PORTB|=(1<<1)|(1<<0);//B A
        PORTD|=(1<<3)|(1<<6)|(1<<5)|(1<<7);//C
    delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
      
  
  if (PINC&(1<<1))
      //LITERA B
      {
        PORTB|=(1<<0)|(1<<1);//a B
        PORTD|=(1<<3)|(1<<6)|(1<<7)|(1<<4)|(1<<5);//C G F D E
		PORTC|=(1<<5);
     delay(1000);
    PORTB&=0;
    PORTD&=0;
	PORTC&=0;
      }
      
   if (PINC&(1<<2))
      //LITERA C
      {
        PORTB|=(1<<0);//a B
        PORTD|=(1<<5)|(1<<7)|(1<<4);//C G F D E
     delay(1000);
    PORTB&=0;
    PORTD&=0;
      }
	  if (PINC&(1<<3))
      //LITERA D
      {
        PORTB|=(1<<0)|(1<<1);//a B
        PORTD|=(1<<3)|(1<<7)|(1<<4)|(1<<5);//C G F D E
		PORTC|=(1<<5);
     delay(1000);
    PORTB&=0;
    PORTD&=0;
	PORTC&=0;
    
    }
	
	
  //PORTD=0B11111100;
  //PORTB=0B00000011;
}


