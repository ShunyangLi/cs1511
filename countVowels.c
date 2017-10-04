#include <stdio.h>
#include <stdlib.h>

int find(char *array,char *vowels,int n);

int main(int argc, char *argv[]) {
	
	char array[5] = {'a','e','i','o','u'};
	char *test = "Hello, a";
	
	int num = find(test,array,5);
	
	printf("%d\n",num);
	
}

int find(char *array,char *vowels,int n) {
	
	int i = 0,count = 0,j;
	while(array[i] != '\0') {
		
		for(j = 0; j < n; j ++) {
			if(array[i] == vowels[j]) {
				count ++;
			}
		}
		i++;
	}
	
	return count;
}
