 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
     float a, b, c;
     float r1, r2;
     float rp, de;

     printf("enter  value for a, b, c\n");
     scanf("%f %f %f",&a, &b, &c);

     rp=sqrt((b* b) - (4*a*c) );
     de= (2*a);

     r1=( - b + rp ) / de;
     r2=( - b - rp ) / de;

     printf("root1,r1=%f  root2,r2=%f", r1, r2 );
     getch();

 }
