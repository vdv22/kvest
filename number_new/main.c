 #include "main.h"


int main(void)
{
   
   DDRB|=(1<<4)|(1<<3)|(1<<2)|(1<<1)|(1<<0);
   DDRD|=(1<<7)|(1<<6)|(1<<5)|(1<<2);
   DDRD|= (1<<6);
   
while (1) 
{
	      
	
		if ((PIND&(1<<2))==0)
		{
			ten;
			_delay_ms(1000);
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			nine;
			_delay_ms(1000);
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			eigth;
			_delay_ms(1000);
			
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			seven;
			_delay_ms(1000);
			
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			six;
			_delay_ms(1000);
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			five;			
			_delay_ms(1000);
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			four;
			_delay_ms(1000);			
			
			_delay_ms(1000);
			if((PIND&(1<<2))!=0)			
			continue;
			
			dark;
			three;
			_delay_ms(1000);
			
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			two;
			_delay_ms(1000);			
			
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			one;
			_delay_ms(1000);
			if((PIND&(1<<2))!=0)
			continue;
			
			dark;
			zero;
			_delay_ms(1000);
			
			
									
			
		}
		
}



}

