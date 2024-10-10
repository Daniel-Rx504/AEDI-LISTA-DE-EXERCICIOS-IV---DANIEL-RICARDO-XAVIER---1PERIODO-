#include <stdio.h>

int main() {
	int numero;

	printf("informe um numero inteiro postivo:\n " );
	scanf("%d", &numero);
	
	if (numero <= 0){
		printf("Por favor digite um numero inteiro positvo:\n ");
		return 1;
		
	}
	
	printf("numero pares entre 1 e %d:\n", numero);
	
	for (int i = 2; i < numero; i += 2){
		printf("%d\n" , i);
	}
	
	return 0;
}
