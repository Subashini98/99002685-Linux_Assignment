#include "myutils.h"
#include <stdarg.h>
#include <stdio.h>
int main() {
int palindrome,prime;
int num1=1221;
int num2=7;
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
return 0;
}
