#include<math.h>
#include<stdio.h>
#include<conio.h>
int s,i,n ;
void main()
{
  printf ("Entrer un nombre impaire=");
  scanf ("%d",&n);
        s=1;
        i=1;
        while (i<=n)
        {
        s=s*i;
        i=i+2;
        }
    printf("s=%d",s);
getch();

} 
