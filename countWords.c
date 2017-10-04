// Count the number of words in a string,
// with some basic unit tests.
// 2017-09-30

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define TRUE (1==1)
#define FALSE (!TRUE)

// This function will return whether the character is whitespace.
int isSpace(char toCheck);

// You need to implement this function.
int countWords(char *string);

int main (int argc, char *argv[]) {
    int num;
    assert(countWords("Hello!") == 1);
    assert(countWords("") == 0);
    assert(countWords("      ") == 0);
   	assert(countWords("Hello, world!") == 2);    
    assert(countWords("Hello,      world!") == 2);
    assert(countWords("Hello      world ") == 2);
    assert(countWords("a b c d e f g h i j k") == 11);
    
    assert(countWords("    hello     ") == 1);
    assert(countWords("\nhello\n  \nworld") == 2);
    assert(countWords(" what\nare\nwords\twe\t\t\t\tjust don't\t\tknow\t")
          == 7);

    printf("All tests passed, you are awesome\n");
    return EXIT_SUCCESS;

}


// TODO: write your function here
int countWords(char *string) {
	
	int i = 0,num,count = 0,x;
	num = strlen(string);
	
	if(num == 0) {
		return 0;
	}
	
	
	for(i = 0; i < num; i++) {
		
		if (isSpace(string[i]) && i != 0){
			
			if(string[i - 1] != ' ' && string[i - 1] != '\n' && string[i - 1] != '\t') {
			
				count ++;
			}
			
		} else if(!isSpace(string[i]) && i == num -1) {
			
			count++;
			
		} else if (isSpace(string[i]) && i == num - 1) {
			
			if(string[i-1] !=  ' ') {
				count ++;
				continue;
			}
			
			return 0;
			
			}
		
	}
	

	return count;
	
}

// Don't change this function -- use it to check whether something is a
// whitespace character.
int isSpace(char toCheck) {
    return (toCheck == ' ' || toCheck == '\t' || toCheck == '\n');
}

