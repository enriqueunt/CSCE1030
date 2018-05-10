/*
 *Author: Enrique Tores (et0132@unt.edu)
 *Date: 10/23/2012
 *Description: Thhis program is about symbolic constants and compound assignment
  operators.
 */

#include <stdio.h>

#define ADD(x,y) ((x)+(y))
#define DIFF(x,y) ((x)-(y))
#define Mult(x,y) ((x)*(y))
#define Divi(x,y) ((x)/(y))
#define Modu(x,y) ((x)%(y))
 





 int main() 
{ 
 int num1, num2, x;
 char op;
 char enter;
 char symbol;
 
 printf("This program is about symbolic constants and compound assignmnet\n\n");
 
 printf("Please enter the first number: ");// user input
 scanf("%d%*c",&num1);
 
 printf("Please enter the second number: ");
 scanf("%d%*c",&num2);
 
 printf("Please enter the operator (+,-,*,/,%%): ");
 scanf("%c%*c",&symbol);
 
 switch (symbol) {
  case '+':
  x = ADD(num1,num2);
  printf("Result:%d\n",x);
  break;
  
  case '-':
  x = DIFF(num1,num2);
  printf("Result:%d\n",x);
  break;
  
  case '*':
  x = Mult(num1,num2);
  printf("Result:%d\n",x);
  break;
  
  case '/':
  x = Divi(num1,num2);
  printf("Resutl:%d\n",x);
  break;
  
  case '%':
  x = Modu(num1,num2);
  printf("Result:%d\n",x);
  break;
  default :
  printf ("Enter Invalid\n");
}
 
  if (x % 2 == 0)
  { 
  printf ("Half result: %d\n",x/2);
  // its even
 }
  else
 { 
  // its odd
 }  
 return 0;
 }