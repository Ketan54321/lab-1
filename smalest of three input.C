#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, n;
    printf("Enter the 3 numbers and this program will return you the smallest of the 3. \n");
    scanf("%d %d %d", &a, &b, &c);
    if(c<a && c<b)
    {
        n=c;
    }
    else if (b<a && b<c)
    {
        n=b;
    }
    else if(a<b && a<c)
    {
        n=a;
    }
    printf("The smallest of the 3 numbers is = %d", n);
    getch();
    clrscr();
    return 0;
}
