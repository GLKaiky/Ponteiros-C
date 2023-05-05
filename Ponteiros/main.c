#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, *valorp;

  printf("Digite um numero");
  scanf("%d", &valor);

valorp = &valor;

  printf("%d\n", valor == &valorp);
}
