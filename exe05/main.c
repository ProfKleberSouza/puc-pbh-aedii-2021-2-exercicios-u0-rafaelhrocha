#include <stdio.h>

int main() {
	float n1, n2, n3, n4, r;
	scanf("%f %f %f %f",&n1, &n2, &n3, &n4);

	r =(n1+n2+n3+n4)/4;
	if( r >= 6.0){
		printf("NOTA = %.1f (APROVADO)", r);
	}
	else{
		printf("NOTA = %.1f (REPROVADO)", r);
	}

return 0;
}