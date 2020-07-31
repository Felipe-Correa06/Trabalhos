#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
  	srand(time(NULL));
	int cartas_jogador, cartas_oponente, soma_jogador=0;
	int escolha, escolha2=1, vitorias=0, derrotas=0;
	
	printf ("\n\t\t\t\t\tJOGO 21\n\n");
	while (escolha2==1){
		printf ("PRIMEIRA CARTA DO SEU OPONENTE:\n");
		cartas_oponente = rand() % 11 + 1;
		if (cartas_oponente<10){
			printf (" -----\n");
			printf ("|%d    |\n", cartas_oponente);
			printf ("|     |\n");
			printf ("|     |\n");
			printf ("|    %d|\n", cartas_oponente);
			printf (" -----\n");
		}
		else if (cartas_oponente>=10){
			printf (" -----\n");
			printf ("|%d   |\n", cartas_oponente);
			printf ("|     |\n");
			printf ("|     |\n");
			printf ("|   %d|\n", cartas_oponente);
			printf (" -----\n");
		}
		while (cartas_oponente<15){
			cartas_oponente += rand() % 10 + 1;
		}
	
	
		printf ("SUA PRIMEIRA CARTA:\n");
		cartas_jogador = rand() % 11 + 1;
		soma_jogador+=cartas_jogador;
		if (cartas_jogador<10){
			printf (" -----\n");
			printf ("|%d    |\n", cartas_jogador);
			printf ("|     |\n");
			printf ("|     |\n");
			printf ("|    %d|\n", cartas_jogador);
			printf (" -----\n");
		}
		else if (cartas_jogador>=10){
			printf (" -----\n");
			printf ("|%d   |\n", cartas_jogador);
			printf ("|     |\n");
			printf ("|     |\n");
			printf ("|   %d|\n", cartas_jogador);
			printf (" -----\n");
		}
		printf ("PEDIR OUTRA CARTA? (1-SIM) (2-NAO):");
		scanf ("%d", &escolha);
		while (escolha==1 ){
			cartas_jogador = rand() % 11 + 1;
			if (cartas_jogador<10){
				printf (" -----\n");
				printf ("|%d    |\n", cartas_jogador);
				printf ("|     |\n");
				printf ("|     |\n");
				printf ("|    %d|\n", cartas_jogador);
				printf (" -----");
			}
			else if (cartas_jogador>=10){
				printf (" -----\n");
				printf ("|%d   |\n", cartas_jogador);
				printf ("|     |\n");
				printf ("|     |\n");
				printf ("|   %d|\n", cartas_jogador);
				printf (" -----");
			}
			soma_jogador+=cartas_jogador;
			printf ("\nTOTAL DAS SUAS CARTAS:%d\n", soma_jogador);
			if(soma_jogador>=21){
				break;
			}
			if (cartas_oponente>=21){
				break;
			}
			printf ("PEDIR OUTRA CARTA? (1-SIM) (2-NAO):");
			scanf ("%d", &escolha);
		}
		printf("\n\n\n");
		printf ("TOTAL DAS CARTAS DO OPONENTE:%d\n", cartas_oponente);
		printf ("TOTAL DAS SUAS CARTAS:%d\n\n", soma_jogador);
		if (soma_jogador>21){
			derrotas++;
			printf ("VOCE PERDEU!!!\n\n\n");
		}
		else if (cartas_oponente>21){
			vitorias++;
			printf ("VOCE VENCEU!!!\n\n\n");
		}
		else if (soma_jogador>cartas_oponente && soma_jogador<21){
			vitorias++;
			printf ("VOCE VENCEU!!!\n\n\n");
		}
		else if (cartas_oponente>soma_jogador && cartas_oponente<21){
			derrotas++;
			printf ("VOCE PERDEU!!!\n\n\n");
		}
		else if (soma_jogador==cartas_oponente){
			printf ("EMPATE!!!\n\n\n");
		}
		else if (soma_jogador==21){
			vitorias++;
			printf ("VOCE VENCEU!!!\n\n\n");
		}
		else if (cartas_oponente==21){
			derrotas++;
			printf ("VOCE PERDEU!!!\n\n\n");
		}
		else if (cartas_oponente>21 && soma_jogador<=21){
			vitorias++;
			printf ("VOCE VENCEU!!!\n\n\n");
		}
		soma_jogador=0;
		cartas_oponente=0;
		printf ("\t\tPLACAR: VITORIAS = %d\n\t\t\tDERROTAS = %d\n\n\n", vitorias, derrotas);
		printf ("JOGAR NOVAMENTE? (1-SIM) (2-NAO):");
		scanf ("%d", &escolha2);
		printf("\n\n\n");
	}
}
