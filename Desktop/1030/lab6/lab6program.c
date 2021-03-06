
  /*
   *Author: Jim Green (et0132@unt.edu)
   *Class: CSCE 1030
   *Date: 10/16/2012
   *Description: This program is a order system for a Geek's Restaurant.
   */
  #include <stdio.h>// Standard input/output library
  #include <time.h>
  int main() {
   
  char food;
  char drink;
  char GR;
  char student;
  double TP;
  double Drink;
  double price;
  double pricef;
  double priced;
  double discount;

  double discounts;
  time_t clock = time(NULL);// obtain for current time
     
   printf ("		Today's Menu				\n");  
   printf (" Type         Name           Code            Price\n"
          " ---------------------------------------------------\n"
           "               Pizza           P               10.0\n"
           "           Chicken Sandwich    C                7.9\n"
           "  Food      Noddles            N                8.0\n"
           "           Kung pao Chicken    K                8.5\n" 
           "           3 Piece Beef Tacos  T                5.6\n"
          "------------------------------------------------------\n"
           "              Coke             C                1.5\n"
           "            Orange Juice       O                3.5\n"
           "  Drink       Tea              T                2.0\n"
           "            Grape Juice        G                3.6\n");
   printf ("******************************************************\n");
   
   printf ("Please select the food: ");// user input
   scanf ("%c%*c",&food);
   switch (food) {
     case 'P':								
      pricef = 10.0;
      printf ("Your price is %.2lf\n",pricef);
      break;
     case 'C':
      pricef = 7.9;
      printf ("Your price is %.2lf\n",pricef);
      break;
     case 'N':
      pricef = 8.0;
      printf ("Your price is %.2lf\n",pricef);
      break;
     case 'K':
      pricef = 8.5;
      printf ("Your price is %.2lf\n",pricef);
      break;
     case 'T':
      pricef = 5.6;
      printf ("Your price is %.2lf\n",pricef);
      break;
     default : 
      printf ("Enter invalid\n"); 
   }
   
   printf ("Please select the drink: ");
   scanf ("%c%*c",&drink);
   switch (drink) {
    case 'C':
     priced = 1.5;
     printf ("Your price is %.2lf\n",priced);
     break;
    case 'O':
     priced  = 3.5;
     printf ("Your price is %.2lf\n",priced);
     break;
    case 'T':
     priced = 2.0;
     printf ("Your price is %.2lf\n",priced);
     break;
    case 'G':
     priced = 3.6;
     printf ("Your price is %.2lf\n",priced);
     break;
    default :
     printf ("Enter invalid\n");
   }
   
   
   
   printf ("Do you have a Geek's membership?: ");
   scanf ("%c%*c",&GR);
   switch (GR) {
     case 'N':
      discount = 0;
      printf ("Sorry you dont get discount 15 perscent off\n\n");
      break;
     case 'Y':
      discount = -.15;
      printf ("Thank you\n\n");
      break;
     default :
      printf ("Inavlid\n");
   }
   printf ("Are you a current sudent?: ");
   scanf ("%c%*c",&student);
   switch (student) {
    case 'N':
     discounts = 0;
     printf ("Sorry you dont get discount 10 percent off\n\n");
     break;
    case 'Y':
     discounts = -.10;
     printf ("Thank you\n\n");
     break;
    default :
     printf ("Invalid\n");
   }
  TP = (pricef + priced) + ((pricef + priced) * discount) + ((pricef + priced) * discounts);
  printf ("Your Total Price: %.2lf\n\n\n",TP);
  
  
  printf ("	Geek's Restaurant Receipt	\n");
  printf ("	*************************	\n"); 
  printf ("Current time is %s			\n",ctime(&clock));
  printf (" Food	 %c		        %.2lf\n",food,pricef);
  printf ("Drink	 %c		        %.2lf\n",drink,priced);
  printf ("Discount				\n");
  printf ("		  Member		%.2lf\n",discount);
  printf ("		  Student		%.2lf\n",discounts);
  printf ("Total Payment         		%.2lf\n",TP);  

  return 0;
  }               		