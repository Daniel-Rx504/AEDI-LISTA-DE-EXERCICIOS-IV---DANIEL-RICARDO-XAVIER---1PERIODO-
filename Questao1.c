#include <stdio.h>

int main (){
	int idade;
	
	printf("Qual sua idade?");
	scanf("%d", &idade);
	
	switch (idade / 18){
		
		case 0:
		
		printf("menor de idade\n");
		break;
		
		case 1:
		case 2:
		case 3:
		
		if (idade <=65 ){
		
		printf("Maior de idade\n");
		
			}else {
			
				printf("idoso\n");
			
					break;
			
					default:
			
						printf("idoso");
		}
		
	}
	
	return 0;
}
