//sum of all number//
#include <stdio.h>
#include <conio.h>
int main(){
    int n,last; int original;
    int sum=0;
    printf("Enter the number to get sum of all its digits. \n");
    scanf("%d" , &n);
    original = n ;
    while(n>0){
	last=n%10;
        sum=sum+last;
        n=n/10;
    }
    printf("The sum of all digits of the number %d is = %d, ", original, sum);
    getch();
    clrscr();
    return 0;
}
