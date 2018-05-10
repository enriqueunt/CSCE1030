/*
 *Author: Enrique Torres (et0132@unt.edu)
 *Date: 10/23/2012
 *Description: This program is to tell how many days are in a month.
 */
 
 #include <stdio.h>

int main()
{
int month;


printf("This program is assign to display number of days in the month.\n");
printf("Please enter month code: ");//user input
scanf("%d",&month);

switch (month) {
  case 1:
   printf("There are 31 days in this month.\n");
   break;
  case 2:
   printf("There are 28 days in this month.\n");
   break;
  case 3:
   printf("There are 31 days in this month.\n");
   break;
  case 4:
   printf("There are 30 days in this month.\n");
   break;
  case 5:
   printf("There are 31 days in this month.\n");
   break;
  case 6:
   printf("There are 30 days in this month.\n");
   break;
  case 7:
   printf("There are 31 days in this month.\n");
    break;
  case 8:
   printf("There are 31 days in this month.\n");
    break;
  case 9:
   printf("There are 30 days in this month.\n");
    break;
  case 10:
   printf("There are 31 days in this month.\n");
    break;
  case 11:
   printf("There are 30 days in this month.\n");
    break;
  case 12:
   printf("There are 31 days in this month.\n");
    break;
    default :
  printf("Invalid Code.\n");
   break;
    }
 return 0;// return to operating system
  }