/*
faça um programa em c que calcule o perimetro de uma pizza (p = 2 x PI x r).
considere o raio um numero inteiro e a constante igual PI igual a 3,1416
  */

#include <stdio.h>
int main() {
  float pi = 3.1416;
  int raio = 50;
  float perimetro = 2 * pi * raio;
  printf("\n perimetro da pizza é %f\n", perimetro);

  return 0;
}
