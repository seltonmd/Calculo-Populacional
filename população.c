#include <stdio.h>

int main(void)
{
 // TODO: Solicite o valor inicial ao usuário

 int inicial;

 do

{
inicial = get_int("Digite a quantidade inicial:\nDeve ser maior que 9: ");
}

 while (inicial < 9);

printf("O número inicial é %i\n", inicial);

 //TODO: Solicite o valor final ao usuário

 int final;

 do

{
  final = get_int("Digite a quantidade final desejada:\nTem que ser maior que a quantidade inicial: ");
}
 while (final <= inicial);

 printf("O número inicial é %i\n", inicial);
 printf("O número final é %i\n", final);
 //TODO: Calcule o número de anos até o limite
 int anos = 0;
 int total = inicial;
 while (total < final)

{
    anos ++;
    total += (total / 3) - (total / 4);
}

 // TODO: Imprima o número de anos

 printf("O número inicial foi %i.\n", inicial);
 printf("O número final foi %i.\n\n", final);
 printf("Para chegar a quantidade de %i, ", total);
 printf("você levará aproximadamente %i ano(s)"".\n\n", anos);
}