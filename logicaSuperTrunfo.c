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
    char pais[50]= "rio de janeiro"; 
    char pais2[50] = "São Paulo";
    unsigned long int pop,pop2;
    int pturistico,pturistico2;
    float area,area2,pib,pib2;
    float densidadep,densidadep2,pibpc,pibpc2,suppod,suppod2;
    pop = 6744000;
    pop2 = 11895578;
    pturistico = 54;
    pturistico = 23;
    area = 1200329;
    area2 = 1521202;
    pib = 949301000000;
    pib2 = 1549301000000;  
    densidadep = pop / area;    //definição de variaveis 
    densidadep2 = pop2 / area2;
    pibpc = pib / (float) pop;
    pibpc2 = pib2 / (float) pop2;
    
    printf("Carta1\n");
    printf("Nome da pais:%s\n", pais);
    printf("População:%lu\n", pop);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2fbilhões de reais\n", pib);
    printf("Pontos Turísticos:%d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibpc);
    
    printf("Carta2\n");
    printf("Nome da pais:%s\n", pais2);
    printf("População:%lu\n", pop2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2fbilhões de reais\n", pib2);
    printf("Pontos Turísticos:%d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    
    suppod = (float) pop + area + pib + (float) pturistico + pibpc + 1/densidadep;  //definição do super poder
    suppod2 = (float) pop2 + area2 + pib2 + (float) pturistico2 + pibpc2 + 1/densidadep2;

    int escolhatabela;     //criação de variavel para armazenar escolha de opção de comparação
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar Densidade Populacional\n");
    printf("6. Comparar Super Poder\n");
    printf("Escolha o atributo para comparar (1-6): ");
    scanf("%d", &escolhatabela);

    switch (escolhatabela)      //switch para cada opção de comparação
    {
    case 1:             
        printf("\nComparação de População:\n");
        printf("%s: %lu hab\n", pais, pop);
        printf("%s: %lu hab\n", pais2, pop2);
        if(pop > pop2)
            printf("%s Ganhou!\n", pais);
        else if(pop2 > pop)
            printf("%s Ganhou!\n", pais2);
        else
            printf("Empate!\n");
        
        break;
    case 2:
        printf("\nComparação de Área:\n");
        printf("%s: %.2f km²\n", pais, area);
        printf("%s: %.2f km²\n", pais2, area2);
        if(area > area2)
            printf("%s Ganhou!\n", pais);
        else if(area2 > area)
            printf("%s Ganhou!\n", pais2);
        else
            printf("Empate!\n");
        break;
    case 3:
        printf("\nComparação de PIB:\n");
        printf("%s: %.2f bilhões\n", pais, pib);
        printf("%s: %.2f bilhões\n", pais2, pib2);
        if(pib > pib2)
            printf("%s Ganhou!\n", pais);
        else if(pib2 > pib)
            printf("%s Ganhou!\n", pais2);
        else
            printf("Empate!\n");
        break;
    case 4:
        printf("\nComparação de Pontos Turísticos:\n");
        printf("%s: %d\n", pais, pturistico);
        printf("%s: %d\n", pais2, pturistico2);
        if(pturistico > pturistico2)
            printf("%s Ganhou!\n", pais);
        else if(pturistico2 > pturistico)
            printf("%s Ganhou!\n", pais2);
        else
            printf("Empate!\n");
        break;
    case 5:
        printf("\nComparação de Densidade Populacional:\n");
        printf("%s: %.2f hab/km²\n", pais, densidadep);
        printf("%s: %.2f hab/km²\n", pais2, densidadep2);
        if(densidadep < densidadep2)
            printf("%s Ganhou!\n", pais);
        else if(densidadep2 < densidadep)
            printf("%s Ganhou!\n", pais2);
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("\nComparação de Super Poder:\n");
        printf("%s: %.2f\n", pais, suppod);
        printf("%s: %.2f\n", pais2, suppod2);
        if(suppod > suppod2)
            printf("%s tem o maior Super Poder.\n", pais);
        else if(suppod2 > suppod)
            printf("%s tem o maior Super Poder.\n", pais2);
        else
            printf("Empate!\n");
        break;
    
    default:
        break;
    }

    return 0;
}
