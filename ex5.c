

#include <stdio.h>

int N, acm;

int SomaDivisores(int n)

{

   if (n == 1)

   {

       return n;

   }

   else

   {

       if (n % 2 == 0)

       {

           acm = acm + (n / 2);

           }if (n % 3 == 0)

           {

               acm = acm + (n / 3);

               }if (n % 5 == 0)

               {

                   acm = acm + (n / 5);

           }

               acm = acm + SomaDivisores(n - 1);

           return acm;

       }

}

int main(void)

{

   int i;

   for (i = 0; i < 5; i++)

   {

       printf("Insira um numero inteiro positivo: ");

       scanf("%d", &N);

       printf("A soma dos divisores do numero informado e: %d\n", acm);

       SomaDivisores(N, acm);

   }

   return 0;

}

