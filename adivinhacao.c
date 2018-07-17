#include <stdio.h>
#include <stdlib.h>

int main() {

	system("clear");

	//	Imprime cabeçalho do nosso jogo
	printf("-----------------------------------------------");
	printf("\n\t      JOGO DA ADIVINHAÇÃO\n");
	printf("-----------------------------------------------\n\n");

	int numero_secreto = 42;
	int i, chute, acertou, maior;

	for (i=0; i<3; i++) {
		printf("-------[ Tentativa %i de 3 ]-------\n\nSeu chute: ", i+1);
		scanf("%d", &chute);
		printf("\nSeu chute foi: %d.\n\n", chute);

		//	Variáveis booleanas
		acertou = (chute == numero_secreto);
		maior = (chute > numero_secreto);

		if (acertou)
			printf("Excelente! A resposta está correta!\n\n");
		else {
			if (maior)
				printf("Seu chute foi maior do que o número secreto. Tente novamente.\n\n");
			else
				printf("Seu chute foi menor do que o número secreto. Tente novamente.\n\n");
		}
	}

	printf("-----------------------------------------------");
	printf("\n\t\tFIM DE JOGO!\n");
	printf("-----------------------------------------------\n\n");

}
