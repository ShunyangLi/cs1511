#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main(int argc, char *argv[]) {
	
	int array[LENGTH];
	int i = 0,j;
	
	while(i < LENGTH) {
		scanf("%d",&array[i]);
		i++;
	}
	printf("Number were: ");
	
	for(j = i - 1; j >= 0; j--) {
		
		printf("%d ",array[j]);
	}
	printf("\n");
	
	return EXIT_SUCCESS;
}
