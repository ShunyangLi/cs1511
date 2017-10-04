// Write a C function which counts the number of even values in an
// array.
//
// Your function should take two parameters: the length of the array,
// and the array.
//
// Your function should return a single integer: the number of even
// values in the array.
//
// For example if the array contains these 8 elements:
//   16, 7, 8, 12, 13, 19, 21, 12
// Your function should return `4`, because these 4 elements are
// even: 
//   16, 8, 12, 12
//
// You can assume the array contains only positive integers.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int countEven(int length, int array[]);

int main (int argc, char *argv[]) {

    // One even number: 2.
    int array1[2] = {1, 2};
    assert(countEven(2, array1) == 1);

    // No even numbers.
    int array2[2] = {1, 1};
    assert(countEven(2, array2) == 0);

    // Two even numbers:, 2, 4.
    int array3[5] = {1, 2, 3, 4, 5};
    assert(countEven(5, array3) == 2);

    // All even numbers: 2, 2, 2, 2, 2.
    int array4[5] = {2, 2, 2, 2, 2};
    assert(countEven(5, array4) == 5);

    // Two even numbers: 4, 2, 6.
    int array5[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    assert(countEven(10, array5) == 3);

    // One even number: 2.
    int array6[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    assert(countEven(10, array6) == 1);

    printf("All tests passed, you are Awesome!\n");

    return EXIT_SUCCESS;
}


int countEven(int length, int array[]) {
    // Write your solution here.
    int i,count = 0;
    for(i = 0; i < length; i ++) {
    	if(array[i] % 2 == 0) {
    		count++;
    	}
    }
    return count;
}

