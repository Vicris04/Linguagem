/*
EXERCÍCIOS DO CAPÍTULO 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exemploPara() {
	for (int cont = 1; cont <= 10; cont++) {
		printf("Olá pela %d vez\n", cont);
	}
}

void exemploEnquanto() {
	int opcao = -1;
	while (opcao != 0) {
		printf("Digite uma Opcao (0 para sair): ");
		scanf("%d", &opcao);
		printf("Você escolheu a opção %d\n", opcao);
	}
}

void exemploRetornoInvestimento() {
	float investimento = 1000;
	float rentabilidade = 0.011; // 1,1%
	int prazo = 12; //meses
	for (int mes = 1; mes <= prazo; mes++) {
		investimento = investimento + investimento*rentabilidade; 
	}
	printf("Saldo final após %d meses: %.2f", prazo, investimento);
}

void exemploPrimeiroMilhao() {
	float aporte = 1000;
	float saldo = 0;
	float rentabilidade = 0.01; // 1%
	int prazo = 0; //meses
	while (saldo < 1000000) {
		saldo = aporte + saldo + saldo*rentabilidade;
		prazo++;
	}
	printf("Saldo: %.2f em %d meses",saldo,prazo);
}

//1.Faça um programa que imprima todos os números de 1 até 100.
void questao01() {
	for (int cont = 1; cont <= 100; cont++) {
		printf("Numero %d \n", cont);
	}
}
//2. Faça um programa que imprima todos os números pares de 100 até 1.
void questao02() {
for(int cont = 100; cont <= 1; cont--) {
	if(cont%2 == 0)
printf("%d \n" , cont);
}	
}
//3. Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.
  void questao03() {
	for (int cont = 1; cont <= 500; cont++) {
		
	}
}      
//4. Faça um programa que permita entrar com o nome, a idade e o sexo de 20
//pessoas.O programa deve imprimir o nome da pessoa se ela for do sexo masculino
//e tiver mais de 21 anos.
void questao04() {
	
}
//5. Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas
//sucessivas, crie um programa que calcule o produto de dois números inteiros
//lidos. Suponha que os números lidos sejam positivos.
void questao05() {
	
}
//6. Crie um programa que imprima os 20 primeiros termos da série de Fibonacci.
//Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
//a partir da soma dos anteriores. Exemplo:
//• 1 + 1 = 2, terceiro termo;
//• 1 + 2 = 3, quarto termo, etc.
void questao06() {
	
}
//7. Crie um programa que permita entrar com o nome, a nota da
//prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
//nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
//imprimir a média geral da turma.
void questao07() {
	
}
//8. Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
//Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
//calculado conforme a tabela a seguir:
//Salário IRRF
//Salário menor que R$1300,00 Isento
//Salário maior ou igual a R$1300,00 e menor que R$2300,00 10% do salário bruto
//Salário maior ou igual a R$2300,00 15% do salário bruto
void questao08() {
	
}
//9. No dia da estreia do filme "Procurando Dory", uma grande emissora de TV realizou
//uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
//a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
//excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a
//opinião de 20 espectadores, calcule e imprima:
//• A média das idades das pessoas que responderam excelente;
//• A quantidade de pessoas que responderam regular;
//• A percentagem de pessoas que responderam bom entre todos os expectadores
//analisados.
void questao09() {
	
}
//10. Em um campeonato Europeu de Volleyball, se inscreveram 30 países. Sabendo-se
//que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
//jogadores, crie um programa que apresente as seguintes informações:
//
//• O peso médio e a idade média de cada um dos times;
//• O atleta mais pesado de cada time;
//• O atleta mais jovem de cada time;
//• O peso médio e a idade média de todos os participantes.
void questao10() {
	
}
//11. Construa um programa que leia vários números e informe quantos números
//entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
//deverá cessar sua execução.
void questao11() {
	
}
//12. Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
//ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
//ano, fazer um programa que calcule e imprima o tempo necessário para que a
//população do país A ultrapasse a população do país B.
void questao12() {
	
}
//13. Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores
//de consumo. Para cada consumidor, são digitados os seguintes dados:
//• número do consumidor
//• quantidade de kWh consumidos durante o mês
//• tipo (código) do consumidor
//1-residencial, preço em reais por kWh = 0,3
//2-comercial, preço em reais por kWh = 0,5
//3-industrial, preço em reais por kWh = 0,7
//Os dados devem ser lidos até que seja encontrado o consumidor com número 0
//(zero). O programa deve calcular e imprimir:
//• O custo total para cada consumidor
//• O total de consumo para os três tipos de consumidor
//• A média de consumo dos tipos 1 e 2
void questao13() {
	
}
//14. Faça um programa que leia vários números inteiros e apresente o fatorial de cada
//número. O algoritmo encerra quando se digita um número menor do que 1.
void questao14() {
	
}
//15. Faça um programa que permita entrar com a idade de várias pessoas e
//imprima:
//• total de pessoas com menos de 21 anos
//• total de pessoas com mais de 50 anos
void questao15() {
	
}
//16. Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações
//sucessivas, criar um algoritmo que calcule e imprima o resto da divisão de
//números inteiros lidos. Para isso, basta subtrair o divisor ao dividendo, sucessivamente,
//até que o resultado seja menor do que o divisor. O número de subtrações
//realizadas corresponde ao quociente inteiro e o valor restante da subtração corresponde
//ao resto. Suponha que os números lidos sejam positivos e que o dividendo
//seja maior do que o divisor.
void questao16() {
	
}
//17. Crie um programa que possa ler um conjunto de pedidos de compra e
//calcule o valor total da compra. Cada pedido é composto pelos seguintes campos:
//• número de pedido
//72 Aula 3. Estruturas de Iteração
//• data do pedido (dia, mês, ano)
//• preço unitário
//• quantidade
//O programa deverá processar novos pedidos até que o usuário digite 0 (zero)
//como número do pedido.
void questao17() {
	
}
//18. Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de
//serviços diários de:
//• R$15,00, se o número de dias for menor que 10;
//• R$8,00, se o número de dias for maior ou igual a 10;
//Faça um programa que imprima o nome, a conta e o número da conta de cada
//cliente e ao final o total faturado pela pousada.
//O programa deverá ler novos clientes até que o usuário digite 0 (zero) como
//número da conta.
void questao18() {
	
}
//19. Em uma Universidade, os alunos das turmas de informática fizeram uma prova
//de algoritmos. Cada turma possui um número de alunos. Criar um programa que
//imprima:
//• quantidade de alunos aprovados;
//• média de cada turma;
//• percentual de reprovados.
//Obs.: Considere aprovado com nota >= 7.0
void questao19() {
	
}
//20. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
//• Qual o seu time de coração?
//1-Fluminense;
//2-Botafogo;
//3-Vasco;
//4-Flamengo;
//5-Outros
//• Onde você mora?
//1-RJ;
//2-Niterói;
//3-Outros
//• Qual o seu salário?
//Faça um programa que imprima:
//• o número de torcedores por clube;
//• a média salarial dos torcedores do Botafogo;
//• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros
//clubes;
//• o número de pessoas de Niterói torcedoras do Fluminense
//3.12. Exercícios da Aula 73
//Obs.: O programa encerra quando se digita 0 para o time.
void questao20() {
	
}
//21. Em uma universidade cada aluno possui os seguintes dados:
//• Renda pessoal;
//• Renda familiar;
//• Total gasto com alimentação;
//• Total gasto com outras despesas;
//Faça um programa que imprima a porcentagem dos alunos que gasta acima de
//R$200,00 com outras despesas. O número de alunos com renda pessoal maior
//que a renda familiar e a porcentagem gasta com alimentação e outras despesas
//em relação às rendas pessoal e familiar.
//Obs.: O programa encerra quando se digita 0 para a renda pessoal.
void questao21() {
	
}
//22. Crie um programa que ajude o DETRAN a saber o total de recursos que foram
//arrecadados com a aplicação de multas de trânsito.
//O algoritmo deve ler as seguintes informações para cada motorista:
//• número da carteira de motorista (de 1 a 4327);
//• número de multas;
//• valor de cada uma das multas.
//Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o
//total de recursos arrecadados (somatório de todas as multas). O programa deverá
//imprimir também o número da carteira do motorista que obteve o maior número
//de multas.
//Obs.: O programa encerra ao ler a carteira de motorista de valor 0.
void questao22() {
	
}
//23. Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso
//e altura) dos atletas que participaram de uma olimpíada, e informar:
//• a atleta do sexo feminino mais alta;
//• o atleta do sexo masculino mais pesado;
//• a média de idade dos atletas.
//Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um
//atleta.
//Para resolver este exercício, consulte a aula 7 que aborda o tratamento de strings,
//como comparação e atribuição de textos.
void questao23() {
	
}
//24. Faça um programa que calcule quantos litros de gasolina são usados em uma
//viagem, sabendo que um carro faz 10 km/litro. O usuário fornecerá a velocidade
//do carro e o período de tempo que viaja nesta velocidade para cada trecho do
//percurso. Então, usando as fórmulas distância = tempo x velocidade e litros
//consumidos = distância / 10, o programa computará, para todos os valores não negativos
//de velocidade, os litros de combustível consumidos. O programa deverá
//imprimir a distância e o número de litros de combustível gastos naquele trecho.
//Deverá imprimir também o total de litros gastos na viagem. O programa encerra
//quando o usuário informar um valor negativo de velocidade.
//74 Aula 3. Estruturas de Iteração
void questao24() {
	
}
//25. Faça um programa que calcule o imposto de renda de um grupo de contribuintes,
//considerando que:
//a) os dados de cada contribuinte (CIC, número de dependentes e renda bruta
//anual) serão fornecidos pelo usuário via teclado;
//b) para cada contribuinte será feito um abatimento de R$600 por dependente;
//c) a renda líquida é obtida diminuindo-se o abatimento com os dependentes
//da renda bruta anual;
//d) para saber quanto o contribuinte deve pagar de imposto, utiliza-se a tabela
//a seguir:
//Renda Líquida Imposto
//até R$1000 Isento
//de R$1001 a R$5000 15%
//acima de R$5000 25%
//e) o valor de CIC igual a zero indica final de dados;
//f ) o programa deverá imprimir, para cada contribuinte, o número do CIC e o
//imposto a ser pago;
//g) ao final o programa deverá imprimir o total do imposto arrecadado pela
//Receita Federal e o número de contribuintes isentos;
//h) leve em consideração o fato de o primeiro CIC informado poder ser zero.
void questao25() {
	
}
//26. Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma
//certa cidade, em um determinado dia. Para cada casa visitada foram fornecidos o
//número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo a ele
//naquela casa. Se a televisão estivesse desligada, nada seria anotado, ou seja, esta
//casa não entraria na pesquisa. Criar um programa que:
//• Leia um número indeterminado de dados, isto é, o número do canal e o
//número de pessoas que estavam assistindo;
//• Calcule e imprima a porcentagem de audiência em cada canal.
//Obs.: Para encerrar a entrada de dados, digite o número do canal zero.
void questao26() {
	
}
//27. Crie um programa que calcule e imprima o CR do período para os alunos de
//computação. Para cada aluno, o algoritmo deverá ler:
//• número da matrícula;
//• quantidade de disciplinas cursadas;
//• notas em cada disciplina;
//Além do CR de cada aluno, o programa deve imprimir o melhor CR dos
//alunos que cursaram5 ou mais disciplinas.
//• fim da entrada de dados é marcada por uma matrícula inválida (matrículas
//válidas de 1 a 5000);
//• CR do aluno é igual à média aritmética de suas notas.
void questao27() {
	
}
//28. Construa um programa que receba a idade, a altura e o peso de várias pessoas,
//Calcule e imprima:
//3.12. Exercícios da Aula 75
//• a quantidade de pessoas com idade superior a 50 anos;
//• a média das alturas das pessoas com idade entre 10 e 20 anos;
//• a porcentagem de pessoas com peso inferior a 40 quilos entre todas as
//pessoas analisadas.
void questao28() {
	
}
//29. Construa um programa que receba o valor e o código de várias mercadorias
//vendidas em um determinado dia. Os códigos obedecem a lista a seguir:
//L-limpeza
//A-Alimentação
//H-Higiene
//Calcule e imprima:
//• o total vendido naquele dia, com todos os códigos juntos;
//• o total vendido naquele dia em cada um dos códigos.
//Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.
void questao29() {
	
}
//30. Faça um programa que receba a idade e o estado civil (C-casado, S-solteiro, Vviúvo
//e D-desquitado ou separado) de várias pessoas. Calcule e imprima:
//• a quantidade de pessoas casadas;
//• a quantidade de pessoas solteiras;
//• a média das idades das pessoas viúvas;
//• a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas
//analisadas.
//Obs.: Para encerrar a entrada de dados, digite um número menor que zero para a
//idade.
void questao30() {
	
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