/*
 *Author: Enrique Torres (et0132@unt.edu)
 *Class: CSCE 1030
 *Date: 11/13/2012
 *Description: Calculates the area of a circle,rectangle,triangle
 */
 
 #include <stdio.h>
 
 #define PI 3.14159F
 
 // Calculate the area of a circle
 float area_circle(float radius){
 if (radius < 0){
 return -1.0F;
 }else {
 return PI*radius*radius;
 }
} 
 float area_rectangle(float length,float width){
 if (length < 0 || width < 0 ){
 return -1.0F;
 }else {
 return length*width;
 }
}
 float area_triangle(float base,float height){
 if ( base < 0 || height < 0){
 return -1.0F;
 }else {
 return .5*base*height;
 }
}     
      

void printArea (float area){
    if (area<0.0F){
        printf ("Invalid args!\n");
    } else {
    printf ("Area=%.2f\n",area);
    }
}

 


int main() {
   char shape;	//shape code
   float arg1, arg2, arg3; //arguments for shapes
   float area;	// the area of a shape
   int end=0;
   
        printf("Calculate the area of a shape given code and parameters.\n");
        printf("Shape codes: Cicle (c|C) Rectangle (r|R) Triangle (t|T) \n");
    do {
       
        printf("Enter <shape> <arg1> <arg2> <arg3> :");
        scanf ("%c",&shape);
         
            switch(shape){
                    case 'c': 
                              
                              
                    case 'C':// get the radius using??
                            scanf ("%f%*c",&arg1);
                             // claculate the are using ??
                             area = area_circle(arg1);
                             // print tha are using ??
                             printArea(area);
                             break;
                          
                    case 'r':
                    
                    case 'R':
                          scanf ("%f %f%*c",&arg1,&arg2);
                          area = area_rectangle(arg1,arg2);
                          printArea(area);
                          break;
                          
                    case 't':
                    
                    case 'T':
                          scanf ("%f %f%*c",&arg1,&arg2);
                          area = area_triangle(arg1,arg2);
                          printArea(area);
                          break;       
                    
                   default: printf("Invalid shape: %c(%d)\n", shape, shape);
                    
                            end = 1;
            }
        } while (end==0);
        return 0;
  }