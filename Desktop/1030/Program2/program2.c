/*
*Programer: Enrique Torres (et0132@unt.edu)
*Course: CSE 1030 Computer Science 1
*Due Date: 10/22/2012
*Description: This program's purpose is to compute the schedule
 for the week acccording to the users input hours .
*/

#include <stdio.h>

int main() {
 char day;
 int hour;



  printf ("Program Two			CSE 1030\n");
  printf ("Enrique Torres		et0132@unt.edu\n\n");

  printf ("Please enter day of the Week (S M T W R F A): ");// represents the days of the week 
  
  scanf ("%c",&day);

if (day != 'S' && day != 'M' && day != 'T' && day != 'W' && day != 'R' && day !='F' && day !='A'){
 
  printf ("Invalid day entered.\n\n");
  
  return 0;// Program ended if the user selected a invalid day.
 } 
if (day== 'A' || day== 'S'){
 
  printf ("Horray!, it's the weekend!\n\n");

 return 0;// Program ended if the user selected a weekend.
 }
printf ("Please enter hour (0-23): ");

 scanf ("%d",&hour);

     if (hour < 0 || hour > 24)
 
  printf ("Invalid hour entered.\n\n");
   
if (day == 'M')
{ 
     if  (hour >= 0 && hour < 8)
     
  printf ("Still asleep.\n\n");
  
else if (hour >= 8 && hour < 18)

  printf ("Should be at work.\n\n");
  
else if (hour >= 18 && hour < 24)

  printf ("Should be Off work.\n\n"); 
}
if (day == 'T')
{
     if (hour >= 0 && hour < 8)
    
  printf ("Still asleep.\n\n");
 
else if (hour >= 8 && hour < 18)

  printf ("Should be at work.\n\n");
  
else if (hour >= 18 && hour < 24)

  printf ("Should be off work.\n\n");
}

if (day == 'W')
{
     if (hour >= 0 && hour < 8)
   
  printf ("Still asleep.\n\n");
 
else if (hour >= 8 && hour < 18)

  printf ("Should be at work.\n\n");
  
else if (hour >= 18 && hour < 24)

  printf ("Should be off work.\n\n");
}

if (day == 'R')
{
     if (hour >= 0 && hour < 8)
   
  printf ("Still asleep.\n\n");
 
else if (hour >= 8 && hour < 18)

  printf ("Should be at work.\n\n");
 
else if (hour >= 18 && hour < 24)

  printf ("Should be off work.\n\n");  
}  
  
if (day == 'F')
{
     if (hour >= 0 && hour < 8)
  
  printf ("Still asleep.\n\n");

else if (hour >= 8 && hour < 18)

  printf ("Should be at work.\n\n");

else if (hour >= 18 && hour < 24)

  printf ("Should be off work.\n\n");
}    
  return 0;// return to operating system
  }
  