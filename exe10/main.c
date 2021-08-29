#include <stdio.h>

int main() {
	int v[10];

	for( int i = 0; i<10; i++){
		scanf("%d",&v[i]);
	}

	for( int j = 9; j>=0; j--){
		printf("%d\n",v[j]);
	}

	return 0;
}