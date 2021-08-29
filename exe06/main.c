#include <stdio.h>

int main() {
	int l1, l2, l3;
	scanf("%d %d %d", &l1, &l2, &l3);
	
	if ( l1 < l2+l3 && l2 < l1+l3 && l3 < l1+l2){
		printf("TRIANGULO ");
		if ( l1 == l2 && l1 == l3){
			printf("EQUILATERO");
		}
		else if( l1 != l2 && l1 != l3 && l2 != l3){
			printf("ESCALENO");
		}
		else{
			printf("ISOSCELES");
		}
	}
	else{
		printf("OS LADOS NAO FORMAM UM TRIANGULO");
	}
	return 0;
}