#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

char buffer[BUFFER_SIZE];
int allocated_memory[BUFFER_SIZE];

void my_function_alloc(int size_of_allocation) {
    for (int i = 0; i < BUFFER_SIZE; i++) {
        if (allocated_memory[i] == 0) {
            allocated_memory[i] = size_of_allocation;
            printf("Successfully allocated %d bytes of memory at location %p\n", size_of_allocation, &buffer[i]);
            break;
        }
    }
}

void my_function_dealloc(int size_of_allocation) {
    for (int i = 0; i < BUFFER_SIZE; i++) {
        if (allocated_memory[i] == size_of_allocation) {
            allocated_memory[i] = 0;
            printf("Successfully deallocated %d bytes of memory at location %p\n", size_of_allocation, &buffer[i]);
            break;
        }
    }
}

int main() {
    my_function_alloc(512);
    my_function_alloc(256);
    my_function_dealloc(256);
    return 0;
}