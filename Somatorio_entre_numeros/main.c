#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int soma, i;	
	soma = 0;
	i = 0;
	
	// Utilizando for
	for(i=1; i<=10; i++){
		soma = soma + i;
	}

	// Utilizando while
//	while(i <=10){
//		soma = soma + i;
//		i++;
//	}

	// Utilizando do while
//	do {
//		soma = soma + i;
//		i++;
//	}while(i <= 10);
	
	
	printf("Soma: %d.\n", soma);
	
	return 0;
}
