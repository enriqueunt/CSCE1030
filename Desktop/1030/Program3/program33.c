#include <stdio.h>

int main() {

int num_cal;
int set;
int num_process;
double values;
double sum;
double average;
int i;
int j;
int num;

do {
    printf ("How many times to perform the calculation (2-5): ");
    
  scanf ("%d",&num_cal);
        
  if (num_cal < 2 || num_cal > 5)
            
  printf ("The value is out of range. Please try again.\n\n");
                
   } while (num_cal < 2 || num_cal > 5);
                 
                 
   i = 1;
   while (i <= num_cal){
                 
                 
 do {
   printf ("How many numbers to process (4-10): ");
                       
   scanf ("%d",&num_process);
                           
   if (num_process < 4 || num_process > 10)
                               
  printf ("The value is out of range. Please try again.\n");
                                   
 } while (num_process < 4 || num_process > 10);
                                       
                                       
  
                                         
                                       
                                         
                                         
     do {
     printf ("Enter value %d (-27.3 - 1002.6): ",num);
                                               
                                               
     scanf ("%lf",&values);
                                                   
     if (values < -27.3 || values > 1002.6)
                                                   
     printf ("The value is out of range. Please try again.\n");
     } while (values < -27.3 || values > 1002.6);
                                                           
                                                           
    j = 1;
    while (j <= num_process){                                                       
                                                           
                                                           
                                                           }
                                                           }
                                                           }
                                                           return 0;
                                                           }