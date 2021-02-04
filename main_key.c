#include <stdio.h>
#include "gerador_key.c"

int main(){
		
	FILE *file = fopen("keys.txt", "a");

	if(file != NULL){
		char key[MAX];
		printf("DIGITE A CHAVE: ");
		fgets(key, MAX, stdin);
		fprintf(file, "COMBINACOES DA CHAVE: %s", key);
		int tamanho = strlen(key);
		char aux[tamanho];
		aux[tamanho-1] = '\0';
		gerar_keys(key, aux, 0, tamanho-1, file);
	}else{
		printf("NAO FOI POSSIVEL CRIAR ARQUIVO");
	}
	fclose(file);
	return 0;
}