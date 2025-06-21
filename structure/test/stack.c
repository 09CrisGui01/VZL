#define VZL_STACK_IMPLEMENTATION
#include "stack.h"

void stack_test_create();
void stack_test_allocate();
void stack_test_push();
void stack_test_pop();
void stack_test_destroy();

void stack_test_all() {
        stack_test_create();
        stack_test_allocate();
        stack_test_push();
        stack_test_pop();
        stack_test_destroy();
}


#ifndef TEST_ALL
int main(int argc, char **argv) {
        stack_test_all();
        return 0;
}
#endif
