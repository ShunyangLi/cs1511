#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main(int argc, char *argv[]) {
	
	int n[LENGTH];
    int i = 0,j;
    
    while(i < LENGTH) {
    
    	scanf("%d",&n[i]);
        i++;
    }
    
    printf("Odd number were: ");
    for(j = 0; j < LENGTH; j++) {
        
        if(n[j] % 2 != 0 && n[j] > 0) {
            
            printf("%d ",n[j]);
        } else if(j == i - 1) {
            
            printf("\n");
        }
    }
    
    printf("Even number were: ");
    for(j = 0; j < LENGTH; j++) {
        
        if(n[j] % 2 == 0 && n[j] > 0) {
            
            printf("%d ",n[j]);
        } else if(j == i - 1) {
            
            printf("\n");
        }
    }
    printf("\n");
    return EXIT_SUCCESS;
}
