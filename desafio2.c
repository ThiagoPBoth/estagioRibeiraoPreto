#include <stdio.h>
#include <stdlib.h>

void main(){
	
	//os valores principais para logica
	int a = 0;
	int b = 1;
	int c = 0;
	
	//valor no qual o usuario vai digitar
	int n = 0;
	
	//escanenado o valor digitado
	printf("Digite um valor para ver se estah na sequencia:");
	scanf("%d", &n);
	
	//contador criado para calcular a sequencia ate o numero que o usuario digitou. (Para ver se o numero digitado estah na sequencia isso nao eh necessario, mas coloquei apenas para nao ficar em loop infinito)
	int cont = 0;
	
	//caso "n" for 0 ou 1 eh obvio que esta na sequencia e nem precisa testar mais nada
	if(n == a || n == b){
		
		printf("O numero digitado estah na sequencia de fibonacci!");
			
	} else {
		
		while (cont < n){
		
			//fazendo a unica soma necessaria para achar o atual ultimo numero da sequencia
			c = a + b;
			
			//trocando os valores de lugares para as proximas somas darem certas
			a = b;
			b = c;
			
			//caso achar o numero estiver na sequencia ele diz que estah e acaba
			if(c == n){
				
				printf("O numero digitado estah na sequencia de fibonacci!");
				break;
				
			}
			
			cont++;
		
		}
		
	}	
	
}
