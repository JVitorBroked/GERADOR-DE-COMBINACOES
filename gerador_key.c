#include <stdio.h>
#include <string.h>

#define MAX 1000000

void gerar_keys(char *key, char *aux, int choice, int n, FILE *file){

	if(choice == n){
		printf(" *****ADICIONANDO KEY: %s *****\n", aux);
		fprintf(file, "%s\n", aux);
		return;
	}else{
		
		for(int i = 0; i < n; i++){
			char temp;
			if(key[i] != '*'){
				temp = key[i];
				aux[choice] = key[i];
				key[i] = '*';
				gerar_keys(key, aux, choice+1, n, file);
				key[i] = temp;
			}
		}
	}
}