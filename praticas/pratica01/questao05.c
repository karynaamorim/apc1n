/*
faça um programa em que c converta um valor qualquer em gigabytes para um valor
em bytes (1GB = 1024³bytes).
*/
#include <stdio.h>
int main() {
  
  int valor_em_gygabytes = 62;
  int valor_em_bytes = valor_em_gygabytes * 1024 * 1024 *1024;
  printf("o valor em bytes é %d\n",  valor_em_bytes);
  
return 0; }
