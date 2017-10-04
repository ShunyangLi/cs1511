#include <stdio.h>
#include <stdlib.h>

int find(char *array,char find);

int main(int argc, char *argv[]) {
	
	char *test = "Hello";
	
	int num = find(test,'l');
	
	printf("%d\n",num);
	
}

int find(char *array,char find) {
	
	int i = 0,count = 0;
	while(array[i] != '\0') {
		
		if(array[i] == find) {
			
			count ++;
		}
		i++;
	}
	
	return count;
}
