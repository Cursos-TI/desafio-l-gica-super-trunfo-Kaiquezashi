#include <stdio.h>

int main(){


    //carta 1

char estado1[50];
char codigo1[10];
char cidade1[50];
int população1;
float area1;
float pib1;
int pontosturisticos1;




//carta 2

char estado2[50];
char codigo2[10];
char cidade2[50];
int população2;
float area2;
float pib2;
int pontosturisticos2;





//Edição carta 1

printf("cadastro da carta 1: \n");
    printf("Digite o Estado: ");
    scanf("%[^\n]", &estado1);
    //Usando este comando para limpar o buffer de entrada.
    while (getchar() != '\n');

    printf("Digite o codigo: ");
    scanf("%s", &codigo1);
    while (getchar() != '\n');


    printf("Digite a cidade: ");
    scanf("%[^\n]", &cidade1);
    while (getchar() != '\n');


    printf("Digite a população: ");
    scanf("%d", &população1);
    while (getchar() != '\n');

    printf("Digite a área(km2): ");
    scanf(" %f\n", &area1);
    while (getchar() != '\n');


    printf("Digite o pib(bilhões): ");
    scanf("%f\n", &pib1);
    while (getchar() != '\n');


    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);
    while (getchar() != '\n');





//Edição carta 2

printf("\nCadastro da carta 2: \n");
    printf("Digite o Estado: ");
    scanf("%[^\n]", &estado2);
    while (getchar() != '\n');

    printf("Digite o código: ");
    scanf("%s", &codigo2);
    while (getchar() != '\n');


    printf("Digite a cidade: ");
    scanf("%[^\n]", &cidade2);
    while (getchar() != '\n');


    printf("Digite a população: ");
    scanf("%d", &população2);
    while (getchar() != '\n');


    printf("Digite a área(km2): ");
    scanf("%f\n", &area2);
    while (getchar() != '\n');


    printf("Digite o PIB(bilhões): ");
    scanf("%f", &pib2);
    while (getchar() != '\n');


    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    while (getchar() != '\n');





//Print carta 1
    printf("\n carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área(km2): %f\n", area1);
    printf("PIB(bilhões): %f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);


//Print carta 2
    printf("\n carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área(km2): %f\n", area2);
    printf("PIB(bilhões): %f\n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosturisticos2);


    //Comparação entre as cartas

        printf("\nComparação de cartas (Atributo: População): \n");
        
        printf("Carta 1 - %s : %d \n" , estado1, população1);
        printf("Carta 2 - %s : %d \n" , estado2, população2);
        
    //calculo para comparação
        if(população1 > população2){
            printf("A carta 1 venceu o jogo! \n");
        }else{printf("A carta 2 venceu o jogo! \n");}

            

return 0;

}