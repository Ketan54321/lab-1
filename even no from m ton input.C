#include <stdio.h>
#include <conio.h>
int main(){
    int m,n,i;
    printf("Enter the range of numbers within which you want to print all the even numbers. First input M(lower limit) then, N(higher limit). \n");
    scanf("%d %d", &m, &n);
    printf("The even numbers ranging from %d to %d are : ", m, n);
    for( i=m; i<=n; i++)
    {
        if(i%2==0){
            printf("%d , ", i);
        }
    }
    getch();
    clrscr();
    return 0;
}
