/*
    EXERCÍCIOS DO CAPÍTULO 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void exemploVetor() {
  float notas[4];
  //alimentando o vetor
  for (int i=0; i<4; i++) {
    printf("Digite a nota %d: ", i+1);
    scanf("%f", &notas[i]);
  }
  float total = 0;
  for (int i=0; i<4; i++) {
    total = total + notas[i];
  }
  float media = total/4;
  printf("Média: %.1f\n", media);
}

void exemploMatriz() {
  int matriz[3][3];
  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      matriz[l][c] = l + c;
    }
  }

  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      printf("%d ", matriz[l][c]);
    }
    printf("\n");
  }
}

void exibirCampoMinado(char campo[4][4]) {
    for (int l = 0; l < 4; l++) {
      for (int c = 0; c < 4; c++) {
        printf("%c ", campo[l][c]);
      }
      printf("\n");
    }
}

void campoMinado() {
  char campo_visivel[4][4];
  char campo_oculto[4][4] = {{'1','1','2','B'},{'1','B','2','1'},{'1','1','2','1'},{'0','0','1','B'}};
  int posicoesAbertas = 0;
  for (int l = 0; l < 4; l++) {
    for (int c = 0; c < 4; c++) {
      campo_visivel[l][c] = '?';
    }
  }

  while (posicoesAbertas < 13) {
    exibirCampoMinado(campo_visivel);
    char posicao[3];
    printf("Escolha uma posicao (l,c): ");
    scanf("%s", posicao);
    int l = posicao[0] - 48;
    int c = posicao[2] - 48;
    if (campo_oculto[l][c] == 'B') {
      campo_visivel[l][c] = 'B';
      printf("VOCÊ PERDEU!!!\n\n");
      exibirCampoMinado(campo_visivel);
      break;
    } else {
      campo_visivel[l][c] = campo_oculto[l][c];
    }
  }

}

//1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois
//permita que o usuário digite um número inteiro para ser buscado no vetor, se
//for encontrado o programa deve imprimir a posição desse número no vetor, caso
//contrário, deve imprimir a mensagem: "Nao encontrado!".

void q01() {
  int numeros[15];
  for (int i = 0; i < 15; i++) {
    printf("Digite o %d número: ", i+1);
    scanf("%d",&numeros[i]);
  }
  printf("Digite um número a ser localizado: ");
  int busca;
  scanf("%d", &busca);
  for (int i = 0; i < 15; i++) {
    if (numeros[i] == busca) {
      printf("Número %d localizado na posição %d\n", busca, i);
    }
  }
}
//2. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem
//numerada.
void questao02() {
	
}

//3. Construa uma programa em C que armazene 15 números em um vetor e imprima
//uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.
void questao03() {
	
}

//4. Faça um programa que armazene 8 números em um vetor e imprima todos os
//números. Ao final, imprima o total de números múltiplos de seis.
void questao04() {
	
}

//5. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule
//e armazene a média arredondada. Armazene também a situação do aluno: 1-
//Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem
//contendo as notas, a média e a situação de cada aluno em formato tabulado.
//Utilize quantos vetores forem necessários para armazenar os dados.
void questao05() {
	
}
//6. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular
//e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma
//li]stagemnumerada com o salário e o novo salário. Declare quantos vetores forem
//necessários.
void questao06() {
	
}
//7. Crie umprograma que leia o preço de compra e o preço de venda de 100mercadorias
//(utilize vetores). Ao final, o programa deverá imprimir quantas mercadorias
//proporcionam:
//• lucro < 10%
//• 10% <= lucro <= 20%
//• lucro > 20%
void questao07() {
	
}
//8. Construa umprograma que armazene o código, a quantidade, o valor de compra
//e o valor de venda de 30 produtos. A listagempode ser de todos os produtos ou
//somente de umao se digitar o código.
void questao08() {
	
}
//9. Faça um programa em C que leia dois conjuntos de números inteiros, tendo
//cada um 10 elementos. Ao final o programa deve listar os elementos comuns aos
//conjuntos.
void questao09() {
	
}
//10. Faça umprograma que leia um vetor vet de 10 elementos e obtenha um vetor w
//cujos componentes são os fatoriais dos respectivos componentes de vet.
void questao10() {
	
}
//11. Construa um programa que leia dados para umvetor de 100 elementos inteiros.
//Imprimir o maior e o menor, sem ordenar, o percentual de números pares e a
//média dos elementos do vetor.
void questao11() {
	
}
//12. Crie umprograma para gerenciar umsistema de reservas de mesas em uma casa
//de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá
//permitir que o usuário escolha o código de uma mesa (100 a 129) e forneça a
//quantidade de lugares desejados. O programa deverá informar se foi possível
//realizar a reserva e atualizar a reserva. Se não for possível, o programa deverá
//emitir uma mensagem. O programa deve terminar quando o usuário digitar
//o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
//ocupados.
void questao12() {
	
}
//13. Construa um programa que realize as reservas de passagens áreas de uma companhia.
//O programa deve permitir cadastrar o número de 10 voos e definir a
//quantidade de lugares disponíveis para cada um. Após o cadastro, leia vários
//pedidos de reserva, constituídos do número da carteira de identidade do cliente e
//do número do voo desejado. Para cada cliente, verificar se há possibilidade no
//voo desejado. Emcaso afirmativo, imprimir o número da identidade do cliente e
//o número do voo, atualizando o número de lugares disponíveis. Caso contrário,
//avisar ao cliente a inexistência de lugares. A leitura do número 0 (zero) para o voo
//desejado indica o término da leitura de reservas.
void questao13() {
	
}
//14. Faça um programa que armazene 50 números inteiros em umvetor. O programa
//deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do
//elemento do primeiro vetor.
void questao14() {
	
}
//15. Faça um programa que leia e armazene vários números, até digitar o número
//0. Imprimir quantos números iguais ao último número foram lidos. O limite de
//números é 100.
void questao15() {
	
}
//16. Crie um programa em C para ler um conjunto de 100 números reais e informe:
//• quantos números lidos são iguais a 30
//• quantos são maior que a média
//• quantos são iguais amédia
void questao16() {
	
}
//17. Faça umprograma que leia umconjunto de 30 valores inteiros, armazene-os em
//um vetor e os imprima ao contrário da ordem de leitura.
void questao17() {
	
}
//18. Faça umprograma em C que permita entrar com dados para um vetor VET do tipo
//inteiro com 20 posições, em que podem existir vários elementos repetidos. Gere
//um vetor VET2 ordenado a partir do vetor VET e que terá apenas os elementos
//não repetidos.
void questao18() {
	
}
//19. Suponha dois vetores de 30 elementos cada, contendo: código e telefone. Faça
//um programa que permita buscar pelo código e imprimir o telefone.
void questao19() {
	
}
//20. Faça umprograma que leia a matrícula e a média de 100 alunos. Ordene da maior
//para a menor nota e imprima uma relação contendo todas as matrículas e médias.
void questao20() {
	
}
int main() {
  //printf("EXEMPLO VETOR\n");
  //exemploVetor();
  //printf("\nEXEMPLO MATRIZ\n");
  //exemploMatriz();
  printf("\nJOGO CAMPO MINADO\n");
  campoMinado();

  //q01();
  return EXIT_SUCCESS;
}
int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;
		case 4:
			questao04();
			break;
		case 5:
			questao05();
			break;	
		case 6:
			questao06();
			break;	
		case 7:
			questao07();
			break;					
		case 8:
			questao08();
			break;
		case 9:
			questao09();
			break;
		case 10:
			questao10();
			break;
		case 11:
			questao11();
			break;
		case 12:
			questao12();
			break;
		case 13:
			questao13();
			break;	
		case 14:
			questao14();
			break;	
		case 15:
			questao15();
			break;					
		case 16:
			questao16();
			break;
        case 17:
			questao17();
			break;
		case 18:
			questao18();
			break;
		case 19:
			questao19();
			break;
		case 20:
			questao20();
			break;
		case 21:
			questao21();
			break;	
		case 22:
			questao22();
			break;	
		case 23:
			questao23();
			break;					
		case 24:
			questao24();
			break;
		case 25:
			questao25();
			break;
		case 26:
			questao26();
			break;
        case 27:
			questao27();
        case 28:
			questao28();
			break;
		case 29:
			questao29();
			break;
        case 30:
			questao30();
			break;
		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}