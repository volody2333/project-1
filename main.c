#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#pragma argsused

int main (int argc, char* argv [])
{char i;
 int j;
 float f, f1, f2;
 long double d, d1, d2;
 printf("Example for first lection \n\n");
 i=1;
 j=-123456789;
 
 printf("i= %d \n",i);
 printf("j= %d \n",j);
 
 f1=3.25;
 f2=4.75;
 f=f1+f2;
 
 printf("f= %f \n",f);
 
 d1=3.25E00;
 d2=4.75E00;
 d=d2-d1;
 
 printf("d= %LE \n\n",d);
 //printf("d= %LF \n\n",d); 
 
 printf("OK");
 getch();
        return 0;
}
