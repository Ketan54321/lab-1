include <stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("Enter the temperature in farhenheit");
    scanf("%f", &f);
    c=(f-32)*(5.0/9.0);
    printf("%f farhenheit when converted into celcius is = %f degrees centigrade", f,c);
    getch();
    return 0;
}
