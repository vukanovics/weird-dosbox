#include <stdio.h>

int main() {
    // int guard1 = 0x12345678;
    float neg_float = -1.0f;
    float pos_float = 3.0f;
    // int guard2 = 0x87654321;

    // printf("Guard 1: %X, Guard 2: %X\n", guard1, guard2);

    printf("neg_float: %f, pos_float: %f\n", neg_float, pos_float);
    
   
    if (neg_float < pos_float) {
        printf("neg_float is less than pos_float\n");
    } else {
        printf("neg_float is NOT less than pos_float\n");
    }

    if (neg_float > pos_float) {
        printf("neg_float is greater than pos_float\n");
    } else {
        printf("neg_float is NOT greater than pos_float\n");
    }

    printf("neg_float bits: %08X\n", *(unsigned int*)&neg_float);
    printf("pos_float bits: %08X\n", *(unsigned int*)&pos_float);
    // printf("Guard 1: %X, Guard 2: %X\n", guard1, guard2);

    return 0;
}
