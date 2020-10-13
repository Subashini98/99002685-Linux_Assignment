#include "myutils.h"
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
