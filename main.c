#include <stdio.h>
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double x1,x2,delta,x3;
    unsigned int n=1,N;
    unsigned char iva;
    printf("бшаепере бюпхюмр 1 хкх 2: \n");
    scanf("%c",&iva);
    if(iva=='1')
    {
    //1
    printf("гюдюире у1 : \n");
    scanf("%lf",&x1);

    printf("гюдюире у2 : \n");
    scanf("%lf",&x2);

    printf("гюдюире яреоемэ : \n");
    scanf("%d",&N);

    printf("у1: %.2lf\nу2: %.2lf\nяреоемэ: %d\n",x1,x2,N );
    printf("**********************************\n");
    printf("\t* N * X * F(X) *\t\n");
    printf("**********************************\n");

    for(n; n<=N; n++)
      {
        x3=1000-x1*2;
        //my function F(x)=x1*2
        printf("\t| %d| %.2lf| %.2lf|\t\n",n,x1,x3);
        printf("+----------+----------+----------+\n");
        x1++;
      }
    }
   else if(iva=='2')
   {
    //2
    printf("\nгюдюире у : ");
    scanf("%lf",&x1);

    printf("\nгюдюире у1 : ");
    scanf("%lf",&x2);

    printf("\nStep : ");
    scanf("%lf",&delta);

    printf("у: %.2lf\nу1: %.2lf\nStep: %.2lf\n", x1,x2,delta );
    printf("**********************************\n");
    printf("\t* N * X * F(X) *\t\n");
    printf("**********************************\n");

    for(n; n<=x2; n++)
    {
        x3=x1*200/2;
        //my function F(x)=x1*200/2
        printf("\t| %d| %.2lf| %.2lf|\t\n",n,x1,x3);
        printf("+----------+----------+----------+\n");
        x1=x1+delta;
    }
   }

return 0;

}






