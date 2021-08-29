#include <stdio.h>

int main() {
	int R,V,T,D,L;
	scanf("%d %d %d",	&T, &V, &R);
	D = T * V;
	L = D/R;
	printf("R = %d\nV = %d\nT = %d\nD = %d\nL = %d", R, V, T, D, L);
}



