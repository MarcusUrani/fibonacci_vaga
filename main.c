#include <stdio.h>

int main(void)
{
  /* Variáveis i e n utilizadas para os laços de repetição e variável k
  utilizada para verificar se o número pertence a sequência */
  int i, n, k;
  /* Variável para armazenar a sequência de Fibonacci */
  int fib[47];
  /* Definindo as 2 primeiras posições da sequência, que são 0 e 1 */
  fib[0] = 0;
  fib[1] = 1;
  /* Scanf para que o usuário digite o número a ser verificado */
  scanf("%d", &n);
  /* Laço de repetição que itera a partir da segunda posição da sequência
  e finaliza ao chegar na posição 46 */
  for (i = 2; i <= 46; i++)
  {
    /* modifica o valor da posição i da variável e calcula o número da sequência
    dessa posição */
    fib[i] = fib[i - 1] + fib[i - 2];
    /* Condicional que verifica se o número digitado é igual ao valor atual da sequência */
    if (n == fib[i])
    {
      /* Se for igual, muda a variável k para 1 que equivale a verdadeiro e
      para o laço de repetição */
      k = 1;
      break;
    }
    else
    /* Caso não seja igual, muda a variável k para 0, que equivale a falso e continua
    o laço de repetição */
    {
      k = 0;
    }
  }
  /* Condicional que verifica se o valor digitado pelo usuário é igual a 0 ou 1, caso
  seja verdadeiro o valor de k muda para 1, indicando que pertence a sequência */
  if (n == 0 || n == 1)
  {
    k = 1;
  }

  /* Caso o k seja 1, será impressa a mensagem de que o número faz parte da sequência,
  caso contrário, será impressa a mensagem que ele não pertence */
  if (k == 1)
  {
    printf("O número faz parte da sequência");
  }
  else
  {
    printf("O número não faz parte da sequência");
  }

  return 0;
}