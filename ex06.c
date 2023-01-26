#include <stdio.h>
#include <stdlib.h>

int main() {
    int memorySize;
    printf("Enter the memory size (in bytes) to allocate: ");
    scanf("%d", &memorySize);

    // Ensure the memory size is a multiple of int size
    if (memorySize % sizeof(int) != 0) {
        printf("Memory size must be a multiple of %lu bytes.\n", sizeof(int));
        return 1;
    }

    int* memory = (int*) calloc(memorySize/sizeof(int), sizeof(int)); // Initialize all memory to 0

    while (1) {
        int choice;
        printf("Enter 1 to insert value, 2 to retrieve value, or 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        } else if (choice == 1) {
            int position;
            int value;
            printf("Enter position to insert value at: ");
            scanf("%d", &position);
            printf("Enter value to insert: ");
            scanf("%d", &value);
            if (position >= 0 && position < memorySize / sizeof(int)) {
                memory[position] = value;
            } else {
                printf("Invalid position.\n");
            }
        } else if (choice == 2) {
            int position;
            printf("Enter position to retrieve value from: ");
            scanf("%d", &position);
            if (position >= 0 && position < memorySize / sizeof(int)) {
                printf("Value at position %d is %d.\n", position, memory[position]);
            } else {
                printf("Invalid position.\n");
            }
        }
    }

    free(memory);
    return 0;
}
