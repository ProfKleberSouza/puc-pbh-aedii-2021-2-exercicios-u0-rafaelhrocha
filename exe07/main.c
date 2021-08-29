#include <stdio.h>

int main() {
	int n, max, min;
	scanf("%d", &n);

	int v[n];

	for( int i = 0; i<n; i++){
		scanf("%d",&v[i]);
		if( i == 0){
		    min = v[i];
		    max = v[i];
		}
		
		if( v[i] > max){
			max = v[i];
		}
		if( v[i] < min){
			min = v[i];
		}
	}
	printf("MENOR = %d\nMAIOR = %d", min, max);
	return 0;
	}