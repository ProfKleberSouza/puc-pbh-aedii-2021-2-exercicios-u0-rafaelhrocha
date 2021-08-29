#include <stdio.h>

int main() {
	int n;
	
	scanf("%d",&n);

	printf("NUMERO ");
  
	if ( n != 0){
		if ( n % 2 == 0){
			printf("PAR ");
		}
		else{
			printf("IMPAR ");
		}

		if ( n > 0){
			printf("POSITIVO");
		}
		else{
			printf("NEGATIVO");
		}
	}
	else{
		printf("NEUTRO");
	}
}