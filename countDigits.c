#include <stdio.h>
#include <stdlib.h>

int countDigitals(char *array);

int main(int argc, char *argv[]) {
	
	char *test = "Hello123";
	
	int num = countDigitals(test);
	
	printf("%d\n",num);
	
}

int countDigitals(char *array) {
	
	int i = 0,count = 0,j;
	while(array[i] != '\0') {
		
		if(array[i] >= '0' && array[i] <= '9') {
			count++;
		}
		i++;
	}
	
	return count;
}
