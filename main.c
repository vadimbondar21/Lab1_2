#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double func,x1,x2,delta;
    unsigned int N,var;

    printf("Enter variant (1 or 2):");
    scanf("%d",&var);

    while(var!= 1  &&  var!= 2)
        {
        printf("Error. Wrong variant. Enter variant again(1 or 2):");
        scanf("%d",&var);
    }
      if(var == 1)
        {
    printf("\nEnter x1: ");
    scanf("%lf",&x1);
    printf("\nEnter x2: ");
    scanf("%lf",&x2);
    printf("\nSelect N: ");
    scanf("%u",&N);

    printf("\n************************************************");
    printf("\n*  N  *         X         *        F(X)        *");
    printf("\n************************************************");

    int i=1;
    delta=(x2-x1)/(N-1);
    for(i;i<=N;i++)
    {
        func=powx/30-4*(x*x)+50;
    printf("\n|%12.0d|%26.2f|%27.2f|\n",i,x1,func);
    if(i%10==0)
    {
        printf("\nPress any key to continue...");
        getch();
    }
    x1=x1+delta;
    }
    }

if(var == 2){

    printf("\nEnter x1: ");
    scanf("%lf",&x1);
    printf("\nEnter x2: ");
    scanf("%lf",&x2);
    printf("\nEnter delta:");
    scanf("%lf",&delta);
    int i=1;

    printf("\n************************************************");
    printf("\n*  N  *         X         *        F(X)        *");
    printf("\n************************************************");
    while(x1<=x2)
    {
          func=powx/30-4*(x*x)+50;
    printf("\n|%12.0d|%26.2f|%27.2f|\n",i,x1,func);
    if(i%10==0)
    {
        printf("\nPress any key to continue...");
        getch();
    }
    x1=x1+delta;
    i++;
    }
 }
    return 0;
}
