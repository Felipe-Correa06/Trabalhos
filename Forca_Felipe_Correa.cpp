#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
	char palavra[100], espacos[100], digitadas[100];
	char letra[100], dica[100];
	int i, tamanho=0, vida=7, acertos=0, ok=0;
	printf ("\n\t\t\t\tJOGO DA FORCA\n\n\n");
	printf ("Digite a palavra: ");
	gets(palavra);
	printf ("Qual o tema da palavra: ");
	gets(dica);
	system("cls");
	printf ("\n\t\tDICA:%s\n\n", dica);
	printf ("\t\t\t\t\t");
	
	for (i=0; i<strlen(palavra); i++){
		if (palavra[i]==' '){
			espacos[i]=' ';
			printf ("%c", espacos[i]);
			printf (" ");
		}
		else {
			espacos[i]='_';
			tamanho++;
			printf ("%c", espacos[i]);
			printf (" ");
		}
	}
	printf ("\n\n");
	
	while (1){
		
		printf ("DIGITE UMA LETRA: ");
		gets(letra);
		for (i=0; i<strlen(digitadas); i++){
			if(letra[0]==digitadas[i]){
				while(letra[0]==digitadas[i]){
					printf ("VOCE JA USOU ESSA LETRA DIGITE OUTRA: ");
					gets(letra);
					i=0;
				}
			}
		}
		strcat(digitadas,letra);
		printf ("\n\n");
		printf ("\t\t\t\t\t");
		
		for (i=0; i<strlen(palavra); i++){
			if (letra[0]==palavra[i]){
				espacos[i]=letra[0];
				acertos++;
				ok=1;
			}
			printf ("%c", espacos[i]);
			printf (" ");
		}
		printf ("\n\n");
		
		if (ok==1){
			printf ("\t\tVOCE ACERTOU UMA LETRA!\n\n");
		}
		else if (ok==0){
			vida--;
			printf ("\t\tVOCE ERROU UMA LETRA!\n\n");
		}
		printf ("\t\tVIDA: %d\n\n", vida);
		printf ("\t\tLETRAS USADAS: %s\n\n\n", digitadas);
		ok=0;
		
		if (acertos==tamanho){
			printf ("\t\t\t\tVOCE ACERTOU A PALAVRA !\n");
			break;
		}
		if (vida<=0){
			printf ("\t\t\t\tVOCE PERDEU, A PALAVRA ERA: %s\n\n", palavra); 
			break;
		}
	}
}
