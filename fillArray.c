// We've discovered a fatal flaw in our previous function -- what if we
// need to use a value other than 17??
//
// Write a C function that will fill an array with a specified value,
// i.e. every array element should become the specified value.
//
// Your function should take three parameters: the length of the array,
// the array itself, and the value to fill the array with.
//
// It must have this prototype:
//
//     void fillArray (int size, int array[], int value);
//
// Your function should not return anything.
//
// For example, if `array` contained these six elements,
//     { 3, 1, 4, 1, 5, 9 }
// and `value` was 42, your function should replace each of those
// elements with the value 42:
//     { 42, 42, 42, 42, 42, 42 }

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void fillArray (int size, int array[], int value);

int main (int argc, char *argv[]) {
    // Testing for a single-element array, {0}.
    int array1[1] = { 0 };
    fillArray (1, array1, 17);
    assert (array1[0] == 17);

    // Testing a two-element array.  0x90909090 is chosen as a nice,
    // large, fairly easy to spot number.  In the first test, we claim
    // the array only has one element, so only the first element should
    // be changed; the 0x90909090 should not be overwritten.
    int array2[2] = { 0, 0x90909090 };
    fillArray (1, array2, 17);
    assert (array2[0] == 17);
    assert (array2[1] == 0x90909090);

    // Testing as above, but both elements now.
    fillArray (2, array2, 17);
    assert (array2[0] == 17);
    assert (array2[1] == 17);

    // The test described in the header comment.
    int array6[6] = { 3, 1, 4, 1, 5, 9 };
    fillArray (6, array6, 42);
    assert (array6[0] == 42);
    assert (array6[1] == 42);
    assert (array6[2] == 42);
    assert (array6[3] == 42);
    assert (array6[4] == 42);
    assert (array6[5] == 42);

    printf ("All tests passed, you are awesome\n");
    return EXIT_SUCCESS;
}

void fillArray (int size, int array[], int value) {
    // TODO: put your solution here.
	
	int i;
	for(i  = 0; i < size; i++) {
		array[i] = value;
	}
}
