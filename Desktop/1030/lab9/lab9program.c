/*
 *Author: Enrique Torres (et0132@unt.edu)
 *Class:CSE 1030
 *Date:
 *Description: This program is assign to enters user name corresponding with its full name
 the asks to enter a string with 8 characters, which the first three characters are be 
 changed to Abc, and the last three characters change to their successors.
 */
 #include <stdio.h>
 #include <string.h>

 int main() {
 
   char firstname[30];
   char lastname[30];
   char middlename[30];
   char fullname[30];
   int len;
   int lenor;
   char string[256];
   char originalstring[256];
   
  
   printf ("Please enter your first name: ");
   scanf ("%s",firstname);
   printf ("Please enter your last name: ");
   scanf ("%s",lastname);
   printf ("Please enter your middle name: ");
   scanf ("%s",middlename);
   
   strcpy (fullname, lastname);
   strcat (fullname, ", ");
   strcat (fullname, firstname);
   strcat (fullname, ", ");
   strcat (fullname, middlename);
   printf ("Welcome: %s\n\n",fullname);
   
   

   do{  
   printf ("Enter a string at least 8 characters long: ");
   scanf ("%s",string);
   len = strlen(string);
     
   if (len < 8)
     printf ("String too short!\n");
     
  } while (len < 8);

  if (len >= 8)
  printf ("Valid string:%s\n",string);
  
  lenor = strlen(originalstring);
  
  strcpy (originalstring,string);
  
  //The first three characters changed to Abc
  string[0] = 'A';
  string[1] = 'b';
  string[2] = 'c';
     
  //change the last three characters to their successors
  if (len = 'z' )
   string[len=='z'] = 'a';
    
  
    len = strlen(string);
   
  string[len-1] = string[len-1] + 1;
  string[len-2] = string[len-2] + 1;
  string[len-3] = string[len-3] + 1;
  
  
                 
  printf ("Change a):%s\n",string);
  
  
 
  for (lenor=strlen(originalstring)-1; lenor >=0; lenor--)
  
  
   
 
  printf ("%c",originalstring[lenor]);
  
  printf ("\n\n");
  
  
 
    
  
            
  
   
  
  return 0;
  }                                                      
                                                   
                                                                     
                                                                  
                                                                           
                                                                             
                                                                           
                                                                               
                                                                                 
                                                                                                                                                  
                                                                                                                                                            
                                                                                                                                                                                                             
                                                                                                          
                                                                                                                                                                                                                                                                                           
                                                                                                              
                                 