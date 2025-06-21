#define TEST_ALL

#include "./stack.c"
#include "./queue.c"

int main(int argc, char **argv) {
        stack_test_all();
        queue_test_all();
        return 0;
}
