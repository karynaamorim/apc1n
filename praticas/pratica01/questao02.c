/*
faça um programa em c que calcule a área de um triangulo {a = base x altura /
2}. considere base e altura numeros inteiros maior que 0.template
*/

#include <stdio.h>

int main() {
  int base = 5;
  int altura = 3;

  float area = base * altura / 2.0;

  printf("a area do triangulo é %fy \n", area);

  return 0;
}