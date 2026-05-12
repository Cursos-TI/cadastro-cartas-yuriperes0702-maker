#include <stdio.h>

// estrutura das cartas
struct carta{
   char estado[50];
   char codigo_carta[50];
   char nome_cidade[50];
   int populacao;
   float area_km2;
   float pib;
   int numero_de_ponto_turistico;


};

   int main(){
   //criação das cartas
   struct carta carta1, carta2;



   char estado[50];
   char codigo_carta[50];
   char nome_cidade[50];
   int populacao;
   float area_km2;
   float pib;
   int numero_de_ponto_turistico;

   // carta 1

   printf("Digite o estado: \n");
   scanf("%s", carta1.estado);

   printf("Digite o codigo_carta: \n");
   scanf("%s", carta1.codigo_carta);

   printf("cidade: \n");
   scanf("%s", carta1.nome_cidade);

   printf("Digite a populacao: \n");
   scanf("%d", &carta1.populacao);

   printf("Digite a area_km2: \n");
   scanf("%f", &carta1.area_km2);

   printf("Digite o pib: \n");
   scanf("%f", &carta1.pib);

   printf("Digite o numero_de_ponto_turistico: \n");
   scanf("%d", &carta1.numero_de_ponto_turistico);

   printf("Nome do estado: %s\n Codigo_carta: %s\n", carta1.estado, carta1.codigo_carta);
   printf("Nome da cidade: %s\n Populacao: %d\n", carta1.nome_cidade, carta1.populacao);
   printf("area_km2: %.2f\n", carta1.area_km2);
   printf("pib: %.2f\n", carta1.pib);
   printf("numero_de_ponto_turistico: %d\n", carta1.numero_de_ponto_turistico);

   
   
   
   
   
   
   // carta 2

   printf("Digite o estado: \n");
   scanf("%s", carta2.estado);      

   printf("Digite o codigo_carta: \n");
   scanf("%s", carta2.codigo_carta);   

   printf("cidade: \n");      
   scanf("%s", carta2.nome_cidade);

   printf("populacao: \n");
   scanf("%d", &carta2.populacao);

   printf("area_km2: \n");
   scanf("%f", &carta2.area_km2);

   printf("pib: \n");
   scanf("%f", &carta2.pib);

   printf("numero_de_ponto_turistico: \n");
   scanf("%d", &carta2.numero_de_ponto_turistico);





   printf("Digite o estado: %s\n Digite o codigo_carta: %s\n", carta2.estado, carta2.codigo_carta);
   printf("Cidade: %s\n Populacao: %d\n", carta2.nome_cidade, carta2.populacao);
   printf("area_km2: %.2f\n", carta2.area_km2);
   printf("pib: %.2f\n", carta2.pib);
   printf("numero_de_ponto_turistico: %d\n", carta2.numero_de_ponto_turistico);



   return 0;



































}
