#include <stdio.h>
#define DIM_MAX 1000

int main()

{

  long n,x[DIM_MAX],k,i,divisor;
  short test;

  /* lee el tamano del conjunto */
  k=0;
  do {
    if (!k) {
      printf("Escribe el tamano del conjunto: ");
    } else {
      printf("El tamano del conjunto, %ld, esta fuera del rango permitido [2,1000], escribelo otra vez: ",n);
    }
    scanf("%ld",&n);
    k++;
  } while (n<2 || n>1000);


  /* lee los datos del conjunto */
  for (k=0;k<n;k++) {
    printf("Escribe el elemento %ld del conjunto: ",k+1);
    scanf("%ld",&x[k]);
  }

  /* busca los divisores del primero */
  test=1;
  for (k=2;k<=x[0] && test;k++) {
    if (!(x[0]%k)) {
      /* comprueba si k es divisor todos los demas */
      divisor=k;
      test=0;
      for (i=1;i<n;i++) {
        if (x[i]%k) {
          test=1;
          break;
        }
      }
    }
  }

  /* escribe el resultado final */
  if (test)
    printf("Los numeros del conjunto son todos primos relativos\n");
  else
    printf("Los numeros del conjunto tienen como divisor comun al %ld\n",divisor);

  /* salida de programa */
  return 0;
  
}