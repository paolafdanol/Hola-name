#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[3][20];
	int i;
	for(i=0; i<=2; i++){
		printf("Cual es tu nombre?\n");
		scanf("%s", &a[i]);
	}
	printf("\n");
	
	for(i=0; i<=2; i++){
		printf("Hola %s\n",a[i]);
	}
	return 0;
	}
	
