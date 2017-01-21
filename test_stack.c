#include <stdio.h>
#include "lib/common.h"
#include "lib/stack.h"

int main(void) {
    Stack stack;
    Init(&stack);

    Push(&stack, 1);
    Push(&stack, 2);
    Push(&stack, 3);
    Push(&stack, 4);
    Push(&stack, 5);
    Push(&stack, 6);
    Push(&stack, 7);
    Push(&stack, 8);


    while (!IsEmpty(&stack)) {
        printf("%d ", Pop(&stack));
    }
    printf("\n");
    return 0;
}
