#include <stdio.h>
//jogo criado na aula Alura
#define NUMERO_DE_TENTATIVAS 5

int main() {
	// imprime o cabecalho do nosso jogo
	printf("*******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("*******************************************\n");
	
	int numerosecreto= 42;
		
	int chute;
	
	for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)  {    //i -> variavel contadora
		
		printf("\nTentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("*********************************************\n");
		printf("Qual e o seu chute? \n");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if(chute < 0) {
			printf("Voce nao pode digitar numeros negativos!\n\n");
			printf("Nao vai contar essa tentativa!");
			i--;

			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;
		int menor = chute < numerosecreto;

		if(acertou) {
			printf("Parabens! Voce acertou!\n ");
			break;
		}
		else if(maior) {
			printf("Seu numero foi maior que o numero secreto\n");
		}
		else {
			printf("Seu numero foi menor que o numero secreto\n");
			}
		
	printf("Fim de jogo!\n");
	}
	
}
	