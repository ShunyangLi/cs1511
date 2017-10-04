// We need a function that will put replace every element of an array
// with the value `17`. (Trust us, it's very important)
// 
// Your function should take two parameters: the length of the array,
// and the array itself.
//
// It must have this prototype:
//
//     void fillWithSeventeen (int size, int array[]);
//
// Your function should not return anything.
//
// For example, if the array contained the following 6 elements:
//     { 3, 1, 4, 1, 5, 9 }
// Your function should replace those elements with the value 17:
//     { 17, 17, 17, 17, 17, 17 }

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void fillWithSeventeen (int size, int array[]);

int main (int argc, char *argv[]) {
    // Testing for a single-element array, {0}.
    int array1[1] = { 0 };
    fillWithSeventeen (1, array1);
    assert (array1[0] == 17);

    // Testing a two-element array.  0x90909090 is chosen as a nice,
    // large, fairly easy to spot number.  In the first test, we claim
    // the array only has one element, so only the first element should
    // be changed; the 0x90909090 should not be overwritten.
    int array2[2] = { 0, 0x90909090 };
    fillWithSeventeen (1, array2);
    assert (array2[0] == 17);
    assert (array2[1] == 0x90909090);

    // Testing as above, but both elements now.
    fillWithSeventeen (2, array2);
    assert (array2[0] == 17);
    assert (array2[1] == 17);

    // The test described in the header comment.
    int array6[6] = { 3, 1, 4, 1, 5, 9 };
    fillWithSeventeen (6, array6);
    assert (array6[0] == 17);
    assert (array6[1] == 17);
    assert (array6[2] == 17);
    assert (array6[3] == 17);
    assert (array6[4] == 17);
    assert (array6[5] == 17);

    printf("All tests passed, you are awesome\n");
    return EXIT_SUCCESS;
}

void fillWithSeventeen (int size, int array[]) {
    // TODO: put your solution here.
    int i;
    for(i = 0; i < size; i ++) {
    	array[i] = 17;
    }
}
