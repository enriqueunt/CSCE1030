/* C Program Example - Course: CSE 1030 - C Programming
   programmer: Enrique Torres  er0132@unt.edu
   Class: CSCE 1030
   Date: Sep 18, 2012
   Assignment: Edit 01simple.c

   C program multiplying value1 and value2 to get mult.
*/

#include <stdio.h> // include system information

int main() {
  int value1, value2, mult, sum, abst, divi, modu;

  // display initial program identification
  printf ("Simple C Program - Enrique Torres et0132@unt.edu\n\n");

  // prompt the user for input
  printf ("Please enter first number: ");
  scanf ("%d",&value1);
  printf ("Please enter second number: ");
  scanf ("%d",&value2);

  sum = value1 + value2;
  printf ("The sum is %d\n",sum);

  mult = value1 *  value2;
  printf ("The mult is %d\n",mult);

  abst = value1 - value2;
  printf ("The abst is %d\n",abst);
  
  divi = value1 / value2;
  printf ("The divi is %d\n",divi);
  
  modu = value1 % value2;
  printf ("The modu is %d\n",modu);
  
  return 0; // return control to Operating System
}
