#include <stdio.h>
#include <malloc.h>

/*
 * This is just sample code.
 * Introducing pointer and dynamic memory allocation.
 */

void get_num_and_print_num() {
    int *p_num;
    p_num = (int *)malloc(sizeof(int));
    if(p_num != NULL) {
        printf("Input : ");
        fflush(stdout);
        scanf("%d", p_num);
        int input_num = *p_num;
        printf("Your input : %d", input_num);
        free(p_num);
    }
    else {
        printf("Memory allocation Error.");
    }
}

int main() {
    get_num_and_print_num();
    return 0;
}