#include<stdio.h>
#include <conio.h>
#include <math.h>                                                                                                    
 float area(float x,float y, float z)
 {
    float s= (x+y+z)/2;
    float a= sqrt(s * (s-x) * (s-y) * (s-z));
    return a;
 }
  int main()
  {
    float a,b,c;
    printf("Enter the length of the three sides of the Triangle.\n");
    scanf("%f %f %f", &a,&b, &c);
    printf("The area of the triangle is = %f square units\n", area(a,b,c));
    getch();
    clrscr();
    return 0;
  }