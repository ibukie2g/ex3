#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("Rolling dice...\n");
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;

    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", die1 + die2);

    if (total > 7) {
        printf("You won\n");
    } else {
        printf("You lost\n");
    }


    return 0;
}
