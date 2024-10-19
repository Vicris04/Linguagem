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

    Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Vitória Cristina!\n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    printf("30*27 = %d\n", 30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3() {
    float media = (5+8+12)/3.0;
    printf("Média de 5,8,12 é igual a %.1f\n", media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
    int num = 0;
    printf("Digite um valor numérico inteiro: ");
    scanf("%d", &num);
    printf("O valor digitado foi %d\n", num);
}
//5. Faça um programa que leia dois números reais e os imprima.
    float num, num2;
    printf("Digite o primeiro números: \n");
    scanf("%f", &num);
    printf("Digite o segundo número: \n")
    scanf("%f", &num2)
    printf("Os númeroa são: %.2f %2.f" , num, num2 \n);
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
    float num;
    printf("Digite um número:");
    scanf("%f",&num);
    printf("Antecessor: %f e Sucessor: %f", n-1,n+1);
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
    char nome[30], telefone[14], endereco[30];
    printf("Digite seu nome:\n");
        scanf(" %30[^\n]", nome);
    printf("Digite seu telefone:\n");
        scanf(" %14[^\n]", telefone);
    printf("Digite seu endereço: \n");
        scanf(" %30[^\n]", endereço);
    printf("%s\n %s\n %s\n" , nome, telefone, endereco);
}
//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
int n1, n2, subtracao;
printf("Digite o primeiro número:\n");
    scanf("%d" , &n1);
printf("Digite o Segundo número:\n");
    scanf("%d" , &n2);
        subtracao = n1 - n2;
printf("Resultado: %d" , subtracao);
}
//9. Faça um programa que leia um número real e imprima ¼ deste número.

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q1();
    return EXIT_SUCCESS;
}
} 