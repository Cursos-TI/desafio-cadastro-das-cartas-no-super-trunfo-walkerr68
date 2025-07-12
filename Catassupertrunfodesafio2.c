#include <stdio.h>

int main(){

int carta = 1;
char estado[50] = "A";
char codigo[50] = "A01";
char nome[50] = "São Paulo";
int populacao = 12325000;
float area = 1521.11;
float pib = 699280000000;
int pontosturisticos = 50;

int carta2 = 2;
char estado2[50] = "B";
char codigo2[50] = "B02";
char nome2[50] = "Rio de Janeiro";
int populacao2 = 6748000;
float area2 = 1200.25;
float pib2= 300500000000;
int pontosturisticos2 = 30;


float quociente = populacao / area;
float quociente2 = pib / populacao;
float quociente3 = pib2 / populacao2;
float divisao = populacao2 / area2;






printf("*Carta: %d\n",carta);
printf("Estado: %s\n", estado);
printf("Código: %s\n",codigo);
printf("Nome da Cidade: %s\n", nome);
printf("População: %d\n",populacao);
printf("Área: %.2f km²\n",area);
printf("PIB: %.2f Bilhões de Reais\n",pib);
printf("Pontos Turisticos: %d\n",pontosturisticos);

printf("A Densidade Proporcional é: %.2fHab/km²\n", quociente);
printf("PIB Per Capita é: %.2fReais\n",quociente2);

printf("**Carta: %d\n",carta2);
printf("Estado: %s\n", estado2);
printf("Código: %s\n",codigo2);
printf("Nome da Cidade: %s\n", nome2);
printf("População: %d\n",populacao2);
printf("Área: %.2f km²\n",area2);
printf("PIB: %.1f Bilhões de Reais\n",pib2);
printf("Pontos Turisticos: %d\n",pontosturisticos2);

printf("A Densidade Proporcional é: %.2fHab/km²\n", divisao);
printf("PIB Per Capita é: %.2f Reais\n",quociente3);

return 0;

}