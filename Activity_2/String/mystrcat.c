#include "mystring.h"

void mystrcat(char str1[], char str2[]) {
   int i, j;
   
   i = 0;
 
   while (str1[i] != '\0') {
      i++;      
   }
 
   j = 0;
 
   while (str2[j] != '\0') {
      str1[i] = str2[j];
      j++;
      i++;    
   }
 
   str1[i] = '\0';
}




