#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main(int argc, char *argv[]) {
	
	int array[MAX_LENGTH];
	int i = 0,j,x;
	
	while(scanf("%d",&array[i]) != EOF && i < MAX_LENGTH) {		
		i++;
	}
	
	printf("Indivisible number: ");
	for(j = 0; j < i; j++) {
		for(x = 0; x < i; x++) {
			
			if(j == x) {
				continue;
			} else {
				if(array[j] % array[x] == 0) {
					break;
				} else if(x == i - 1){
					printf("%d ",array[j]);
					break;
				}
			}
		}
		if(j == i - 1) {
			printf("\n");
		}
	}
	
	return 0;
}
