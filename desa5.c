#include <stdio.h>
#include <stdlib.h>

void main(){
	
	char palavra[10] = "cachorro";
	char palavraInvertida[10];
	
	//imprimindo na tela
	puts(palavra);
	
	int i = 0;
	int k = 0;
	
	//contando quantas letras tem
	while(palavra[i] != '\0'){
		
		i++;
		
	}
	
	//eh necessario pois o vetor de caractere inicia na posicao 0
	i--;
	
	//invertendo as letras
	while(i >= 0){
		
		palavraInvertida[k] = palavra[i];
		k++;
		i--;
		
	}
	
	//necessario zerar para o proximo while
	i = 0;
		
	printf("Palavra invertida:\n");
	//passando a palavra invertida para a String "palavra" e imprimindo
	while(palavra[i] != '\0'){
		
		palavra[i] = palavraInvertida[i];
		
		printf("%c", palavra[i]);
		i++;
		
	}
		
}
