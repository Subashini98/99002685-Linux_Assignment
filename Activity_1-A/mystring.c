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

void mystrcmp(char str1[100], char str2[100])
{
    int i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2\n");
   else if (str1[i] < str2[i])
      printf("str1 < str2\n");
   else
      printf("str1 = str2\n");
}
void mystrcpy(char str1[], char str2[]) // function definition
{
    int i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    
    str2[i] =' \0';    
}

int mystrlen(char str[100]) {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}

