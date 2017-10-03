#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1024

int main(int argc, char *argv[]) {
    
    int n[MAX_LENGTH];
    int i = 0,j;
    
    while(scanf("%d",&n[i]) != EOF && i < MAX_LENGTH) {
        i++;
    }
    
    printf("Odd number were: ");
    for(j = 0; j < i; j++) {
        
        if(n[j] % 2 != 0) {
            
            printf("%d ",n[j]);
        } else if(j == i - 1) {
            
            printf("\n");
        }
    }
    
    printf("Even number were: ");
    for(j = 0; j < i; j++) {
        
        if(n[j] % 2 == 0) {
            
            printf("%d ",n[j]);
        } else if(j == i - 1) {
            
            printf("\n");
        }
    }
    printf("\n");
    return EXIT_SUCCESS;
}

