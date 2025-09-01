#include <stdio.h>
#include <string.h>

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
  int main() {
   printf("=== Desafio Super Trunfo! ===\n\n");

// atributos da aprimeira carta
     
    char estado01[40];
    int codigo01;
    char nome01[50];
    int populacao01;
    float area01;
    float pib01;
    int pontosturisticos01;

// atributos da segunda carta

    char estado02[40];
    int codigo02;
    char nome02[50];
    int populacao02;
    float area02;
    float pib02;
    int pontosturisticos02;



// entrada de dodos carta01
printf("Cadastro carta01 \n");

        printf("Digite o estado: \n");
        scanf("%s", estado01);

        printf("Digite o código da carta: \n");
        scanf("%d", &codigo01);

        printf("Digite o nome da cidade: \n");
        scanf(" %s", nome01);

        printf("Digite a população: \n");
        scanf("%d", &populacao01);

        printf("Digite o a área: \n");
        scanf("%f", &area01);

        printf("Digite o valor do PIB: \n");
        scanf("%f", &pib01);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &pontosturisticos01);

//atributos carta02        
 
        printf("Digite o estado: \n");
        scanf("%s", estado02);

        printf("Digite o código da carta: \n");
        scanf("%d", &codigo02);

        printf("Digite o nome da cidade: \n");
        scanf(" %s", nome02);

        printf("Digite a população: \n");
        scanf("%d", &populacao02);

        printf("Digite o a área: \n");
        scanf("%f", &area02);

        printf("Digite o valor do PIB: \n");
        scanf("%f", &pib02);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &pontosturisticos02);
      

    

 // Exibição dos dados das cartas

    printf("\n=== Dados da Carta 01 ===\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %d\n", codigo01);
    printf("Cidade: %s\n", nome01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões\n", pib01);
    printf("Pontos turísticos: %d\n", pontosturisticos01);

    printf("\n=== Dados da Carta 02 ===\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %d\n", codigo02);
    printf("Cidade: %s\n", nome02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões\n", pib02);
    printf("Pontos turísticos: %d\n", pontosturisticos02);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
