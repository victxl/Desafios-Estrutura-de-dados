#include <stdio.h>
int main() {
 int distancia, velocidade;
 printf("Digite a distância da viagem em milhas nauticas: ");
 scanf("%d", &distancia);
 printf("Digite a velocidade média do navio em nos: ");
 scanf("%d", &velocidade);
 int tempo = distancia / velocidade;
 printf("Sua viagem levara aproximadamente %d horas.\n", tempo);
 return 0;
}