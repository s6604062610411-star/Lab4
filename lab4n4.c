#include <stdio.h>

int main(void)
{
    int i, j;   

    i = 1;
    while (i <= 3) {
        printf("Row %d: ", i);

        for (j = 1; j <= 5; j++) {
            printf("%3d", j);
        }

        printf("\n");
        i++;
    }

    return 0;
}


