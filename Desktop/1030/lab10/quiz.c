#include <stdio.h>
#include <string.h>

int main() {
char name[20], welcome[30];
int ok, length;
          
ok = 0;
while (!ok) {
  printf("Enter a name with even characters (length>=4): ");
  scanf("%s", name);
  length = strlen(name);
  if (length >= 4 && length % 2 == 2 )
  printf("The string %s doesnt contain even number of characters.\n", name);
  else printf ("The string %s conatin even number of characters.\n", name);
  
  
                                        
  strcat(welcome, "Welcome, ");
  strcat(welcome, name);
  strcat(welcome, "!");
                                               
   printf("%s\n", welcome);
   ok++;
  }                                              
    return 0;
                                                
 }
                                                
                                                