#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    char estado, estado2;            //declaração de variaveis
    char codigo1[10],codigo2[10];
    char cidade[50],cidade2[50];
    unsigned long int pop,pop2;
    int pturistico,pturistico2;
    float area,area2,pib,pib2;
    float densidadep,densidadep2,pibpc,pibpc2,suppod,suppod2;
    
    printf("insira o estado\n");    //sequencia de printf e scanf para obter dados do usuario 1
    scanf(" %c", &estado);
    printf("insira o codigo da carta\n");
    scanf("%s", codigo1);
    printf("Nome da Cidade(sem espaços)\n");
    scanf("%s", cidade);
    printf("Insira População\n");
    scanf("%lu", &pop);
    printf("insira a Area\n");
    scanf("%f", &area);
    printf("insira o PIB\n");
    scanf("%f", &pib);
    printf("insira o numero de pontos turisticos\n");
    scanf("%d", &pturistico);
    
    printf("insira o estado\n");    //sequencia de printf e scanf para obter dados do usuario
    scanf(" %c", &estado2);
    printf("insira o codigo da carta\n");
    scanf("%s", codigo2);
    printf("Nome da Cidade(sem espaços)\n");
    scanf("%s", cidade2);
    printf("Insira População\n");
    scanf("%lu", &pop2);
    printf("insira a Area\n");
    scanf("%f", &area2);
    printf("insira o PIB\n");
    scanf("%f", &pib2);
    printf("insira o numero de pontos turisticos\n");
    scanf("%d", &pturistico2);
    
    densidadep = pop / area;    //definição de variaveis coletadas 
    densidadep2 = pop2 / area2;
    pibpc = pib / (float) pop;
    pibpc2 = pib2 / (float) pop2;
    
    printf("Carta1");
    printf("estado:%c\n", estado);   //Codigo exibindo dados coletados sobre a carta
    printf("Codigo:%s\n", codigo1);
    printf("Nome da Cidade:%s\n", cidade);
    printf("População:%lu\n", pop);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2fbilhões de reais\n", pib);
    printf("Pontos Turisticos:%d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibpc);
    
    printf("Carta2");
    printf("estado:%c\n", estado2);   //Codigo exibindo dados coletados sobre a carta 2
    printf("Codigo:%s\n", codigo2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%lu\n", pop2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2fbilhões de reais\n", pib2);
    printf("Pontos Turisticos:%d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    
    suppod = (float) pop + area + pib + (float) pturistico + pibpc + 1/densidadep;  //definição do super poder
    suppod2 = (float) pop2 + area2 + pib2 + (float) pturistico2 + pibpc2 + 1/densidadep2;

    printf("Comparação de cartas(atributo: população)\n");
    printf("Carta 1 - %lu\nCarta 2 - %lu\n",pop,pop2);
    if(pop > pop2){
        printf("Carta 1 ganhou.");
    }
    else{
        printf("Carta 2 ganhou.");
    }


    return 0;
}
