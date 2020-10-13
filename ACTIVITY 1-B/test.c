#include "bitmask.h"
#include "myutils.h"
#include "mystring.h"
#include <stdarg.h>
#include <stdio.h>
int main() {
  int n,k;
  n = 10;
  k = 20;
int palindrome,prime;
int length; 
int num1=1221;
int num2=78;


    printf("***************BITMASK.H******************************\n");
    printf("%d with %d-th bit Set: %d\n",
           n, k, set(n, k));
    printf("%d with %d-th bit Reset: %d\n",
           n, k, reset(n, k));
    printf("%d with %d-th bit Toggled: %d\n",
           n, k, flip(n, k));
           
           
printf("********************MY_UTILS.H*****************************\n");
printf("Factorial of 5 = %d\n",factorial(5));
printf("Sum of 2, 3 = %d\n", vsum(2,2,3));
printf("Sum of 5, 10, 15 = %d\n", vsum(3,5,10,15));
printf("Sum of 2, 3, 4, 5 = %d\n", vsum(4,2,3,4,5,6));
palindrome=isPalindrome(num1);

if(palindrome==0)
	printf("%d is Palindrome\n",num1);
else
	printf("%d is not Palindrome\n",num1);

prime=isPrime(num2);
if(prime==1)
	printf("%d is Prime\n",num2);
else
	printf("%d is not Prime\n",num2); 

printf("********************MY_STRING.H*****************************\n"); 
char p[100] = "Hello ", q[100] = "World";
mystrcat(p, q);
printf("String obtained on concatenation: \"%s\"\n", p);

printf("\nString comparison:");
mystrcmp("abc","defg");


 
length = mystrlen(p);
printf("\nLength of the String 'programming' is : %d", length);

char m[100] = "programming", copym[100];
    mystrcpy(m, copym); // function call
    printf("\n\nThe copied string is: %s\n\n", copym);
  
   return 0; 
  
}
