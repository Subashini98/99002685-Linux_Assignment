#include "myutils.h"
#include <stdarg.h>
 int factorial(int num)
{
   int c;
   int result = 1;
 
   for( c = 1 ; c <= num ; c++ )
         result = result*c;
 
   return ( result );
}
int isPalindrome(int num)
 {
   int temp, remainder, sum=0;

   temp = num;

   while( num!=0 )
   {
       remainder = num % 10;
       sum = sum*10 + remainder;
       num /= 10;
   }

   if ( sum == temp ) return 0;

   else return 1;
 }
int isPrime(int num)
{
   int i;
 
   for ( i = 2 ; i <= num - 1 ; i++ )
   { 
      if ( num%i == 0 )
     return 0;
   }
   return 1;
}

int vsum(int num,...) {

   va_list valist;
   int sum = 0;
   int i;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum;
}
