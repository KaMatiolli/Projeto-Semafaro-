#include <stdio.h>

int main() {

int semafaro;

printf("Digite o sinal atual: ");
scanf("%d", &semafaro);

if( semafaro == 1){
  printf("A proxima cor do sinal eh verde!");
}
else if( semafaro == 2){
  printf("A proxima cor do sinal eh amarelo!");
}
else if( semafaro == 3){
  printf("A proxima cor do sinal eh vermelho!");
}

else{
  printf("Codigo de cor invalido!");
}
}