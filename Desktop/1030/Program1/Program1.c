/*
*Programer: Enrique Torres (et0132@unt.edu)
*Comapany Name: WE PAINT BEDROOMS
*Course: CSE 1030 Computer Science 1
*Due Date: 10/8/2012
*Description: This program's purpose is to calculate the amount of gallons
              paint needed to paint a room (including the room's ceiling)
              by using the rooms square footage given from the height and
              lenghts of the walls , also to worry about not paiting the windows,
              or doors in the room.
*/

#include <stdio.h> // common input/output operations

int main()
{
 float height,
       walla, wallb, wallc, walld,
       doors, windows;
 int door = 26;
 int gallon = 185;
 double window = 6.5;
 double Total_square_footage;
 double Gallons;
 int TG;
 
 
 // prompt the user for input
 
 printf ("Please enter room height: ");
 
 scanf ("%f",&height);
 
 printf ("Please enter wall length a: ");
 
 scanf ("%f",&walla);
 
 printf ("Please enter wall length b: ");
 
 scanf ("%f",&wallb);
 
 printf ("Please enter wall length c: ");
 
 scanf ("%f",&wallc);
 
 printf ("Please enter wall lenght d: ");
 
 scanf ("%f",&walld);
 
 printf ("Please enter number of windows: ");
 
 scanf ("%f",&windows);
 
 printf ("Please enter number of doors: ");
 
 scanf ("%f",&doors);
 
 Total_square_footage = height * (walla + wallb + wallc + walld) + 
                      (wallc * walld) + ((wallb - wallc) * height) +
                      ((walld - walla) * height) + (wallb - wallc) *
                       (walld - walla) - ((windows * window) + (doors *door));
 
 printf ("The square footage: %.1lf\n",Total_square_footage);
  
 Gallons = Total_square_footage / gallon;
 
 printf ("Gallons: %.2lf\n",Gallons);
 
 TG = Gallons + .99;
 
 printf ("Total gallons of paint to buy: %d\n",TG);
 
 
 return 0; //return to Operating System
} 
  
     
   
   
   