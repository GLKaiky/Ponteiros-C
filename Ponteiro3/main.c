#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   int A = 5, *ptr1;
   float B = 6, *ptr2;
   char C = 'T', *ptr3;

   ptr1 = &A;
   ptr2 = &B;
   ptr3 = &C;

   printf("%p\n", ptr1);
   printf("%p\n", ptr2);
   printf("%p\n", ptr3);

   printf("%d\n", *ptr1);
   printf("%f\n", *ptr2);
   printf("%c\n", *ptr3);

   printf("Digite um novo numero inteiro");
   scanf("%d", ptr1);
   printf("Digite um novo numero real");
   scanf("%f", ptr2);
   printf("Digite um novo caractere");
   getchar();
   scanf("%c", ptr3);

   printf("%d\n", *ptr1);
   printf("%f\n", *ptr2);
   printf("%c\n", *ptr3);
}
