#include <stdio.h>
#include <stdlib.h>

int countSpaces(char *array);

int main(int argc, char *argv[]) {
	
	char *test = "Hello 123";
	
	int num = countSpaces(test);
	
	printf("%d\n",num);
	
}

int countSpaces(char *array) {
	
	int i = 0,count = 0,j;
	while(array[i] != '\0') {
		
		if(array[i] == ' ') {
			count++;
		}
		i++;
	}
	
	return count;
}
