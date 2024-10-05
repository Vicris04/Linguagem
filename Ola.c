#include <stdio.h>
#include <stdlib.h>

void main () {
    int x = 0; // criando uma variável inteira
    printf("Valor de x: %d\n", x);
    x++; // incrementando x em 1 unidade
    printf("Valor de x: %d\n", x);
    float y = 12.345678; // criando uma variável Real 
    printf("Valor de y: %f\n",y);
    // imprimindo o valor de y com apenas 2 casas
    printf("Valor de y: %.2f\n",y);
    // 1 caractere deve estar entre apóstrof
    char sexo = 'M'; // variável que aceita apenas 1 caracter
    printf("Sexo: %c\n", sexo);
    //Criando ima variável string (Texto)
    char nome[30] = "Pedro";
    printf("Nome: %s\n", nome);
    //Imprimendo a primeira letra do nome
    printf("Primeira Letra: %c\n", nome[0]);
    printf("Olá Mundo!");
} 