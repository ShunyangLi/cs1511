#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main(int argc, char *argv[]) {
	
	int array[LENGTH];
	int i = 0;
	
	while(i < LENGTH) {
		scanf("%d",&array[i]);
		i++;
	}
	printf("Number were: ");
	
	for(i = 0; i < LENGTH; i++) {
		
		printf("%d ",array[i]);
	}
	printf("\n");
	
	return EXIT_SUCCESS;
}
