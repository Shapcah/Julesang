#include <HelloWorld2.h>
   
   
   int x=0;
   void bip(int16 tid,int16 leng)
   
   {
      while (x<leng)
      {
      output_high(PIN_C2);
      delay_us(tid);
      output_low(PIN_C2);
      delay_us(tid);
      x=x+1;
     
      }  
      delay_ms(5);
      x=0;
   }



void main()
{
   while (A==A)
   {
      if (input(PIN_A4)==0)
      {
   
      bip(2500,88);
      bip(1887,118);
      bip(1887,59);
      bip(1695,65);
      bip(1887,59);
      bip(2041,54);
      bip(2273,98);
      bip(2273,98);
      bip(2273,98);
      bip(1695,131);
      bip(1695,65);
      bip(1515,73);
      bip(1695,65);
      bip(1887,59);
      bip(2041,109);
      bip(2500,89);
      bip(2500,89);
      bip(1515,147);
      bip(1515,73);
      bip(1449,77);
      bip(1515,73);
      bip(1667,67);
      bip(1887,118);
      bip(2273,98);
      bip(2500,89);
      bip(2273,98);
      bip(1667,133);
      bip(2041,109);
      bip(1887,235);
      
      }
   
   }
   
}




