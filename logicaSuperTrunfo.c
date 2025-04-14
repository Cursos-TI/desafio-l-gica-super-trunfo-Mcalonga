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
    
          //declaração de variaveis
    char pais[50]= "Pais 1"; 
    char pais2[50] = "Pais 2";
    unsigned long int pop,pop2;
    int pturistico,pturistico2;
    float area,area2,pib,pib2;
    float densidadep,densidadep2,suppod,suppod2;
    pop = 6744000;
    pop2 = 11895578;
    pturistico = 54;
    pturistico2 = 23;
    area = 1900329;
    area2 = 1521202;
    pib = 949301000000;
    pib2 = 1549301000000;  
    densidadep = pop / area;    //definição de variaveis 
    densidadep2 = pop2 / area2;
    int resultadoe,resultadoe2;
    float somaA,somaB,somaA2,somaB2,resultadoFinalA,resultadoFinalB;

    
    printf("Carta1\n");
    printf("Nome da pais:%s\n", pais);
    printf("População:%lu\n", pop);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2fbilhões de reais\n", pib);
    printf("Pontos Turísticos:%d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep);
  
    
    printf("Carta2\n");
    printf("Nome da pais:%s\n", pais2);
    printf("População:%lu\n", pop2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2fbilhões de reais\n", pib2);
    printf("Pontos Turísticos:%d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);

    
    int escolhatabela, escolhatabela2;     //criação de variavel para armazenar escolha de opção de comparação
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar Densidade Populacional\n");
    printf("6. Comparar Super Poder\n");
    printf("Escolha o primeiro atributo para comparação (1-6): ");
    scanf("%d", &escolhatabela);
    
    switch (escolhatabela)      //switch para cada opção de comparação
    {
    case 1:             
        printf("\nVocê escolheu comparação de População:\n");
        resultadoe = pop > pop2 ? 1 : 0;
        somaA = pop;
        somaB = pop2;
        break;
    case 2:
        printf("\nVocê escolheu Comparação de Área:\n");
        resultadoe = area > area2 ? 1 : 0;
        somaA = area;
        somaB = area2;
        break;
    case 3:
        printf("\nVocê escolheu Comparação de PIB:\n");
        resultadoe = pib > pib2 ? 1 : 0;
        somaA = pib;
        somaB = pib2;
        break;
    case 4:
        printf("\nVocê escolheu Comparação de Pontos Turísticos:\n");
        resultadoe = pturistico > pturistico2 ? 1 : 0;
        somaA = pturistico;
        somaB = pturistico2;
        break;
    case 5:
        printf("\nVocê escolheu Comparação de Densidade Populacional:\n");
        resultadoe = densidadep < densidadep2 ? 1 : 0;
        somaA = densidadep;
        somaB = densidadep2;
        break;
    default:
    printf("numero invalido, tente denovo.");
        break;
    }
    
    //segunda comparação de atributo
    printf("\nEscolha o segundo atributo para comparação (1-6): ");
    scanf("%d", &escolhatabela2);
    if(escolhatabela == escolhatabela2){
        printf("Você escolheu o mesmo atributo, tente denovo.");
    }else{
    switch (escolhatabela2)      //switch para cada opção de comparação
    {
    case 1:             
        printf("\nVocê escolheu Comparação de População:\n");
        resultadoe2 = pop > pop2 ? 1 : 0;
        somaA2 = pop;
        somaB2 = pop2;
        break;
    case 2:
        printf("\nVocê escolheu Comparação de Área:\n");
        resultadoe2 = area > area2 ? 1 : 0;
        somaA2 = area;
        somaB2 = area2;
        break;
    case 3:
        printf("\nVocê escolheu Comparação de PIB:\n");
        resultadoe2 = pib > pib2 ? 1 : 0;
        somaA2 = pib;
        somaB2 = pib2;
        break;
    case 4:
        printf("\nVocê escolheu Comparação de Pontos Turísticos:\n");
        resultadoe2 = pturistico > pturistico2 ? 1 : 0;
        somaA2 = pturistico;
        somaB2 = pturistico2;
        break;
    case 5:
        printf("\nVocê escolheu Comparação de Densidade Populacional:\n");
        resultadoe2 = densidadep < densidadep2 ? 1 : 0;
        somaA2 = densidadep;
        somaB2 = densidadep2;
        break;
    default:
    printf("numero invalido, tente denovo.");
        break;
    }
    if (resultadoe && resultadoe2){
        printf("carta 1- %s: teve os maiores atributos.",pais);
    }else if(resultadoe != resultadoe2){
        printf("Empate entre atributos!");
    }else{ 
        printf("carta 2 - %s: teve os maiores atributos.", pais2);
    }
    resultadoFinalA = somaA + somaA2;
    resultadoFinalB = somaB + somaB2;
    printf("\nCarta 1 = %f\nCarta 2 = %f\n",resultadoFinalA,resultadoFinalB);
    if (resultadoFinalA > resultadoFinalB){
        printf("Carta 1- %s: Venceu o resultado final!",pais);
    }else if(resultadoFinalA ==resultadoFinalB){
        printf("Empate!");
    }else{
        printf("Carta 2 - %s: Venceu o resultado final!",pais2);
    }
    }
    
    return 0;
}
