#include <stdio.h>

int main() {
    int sum = 0;
    /* Iterate over number from 1 to 1000 */
    for (int i = 1; i < 1000; i++) {
        /* Check if the number is a multiple of 3 or 5*/
        if (i % 3 == 0 || i % 5 == 0)  {
            /* add to sum */
            sum += i;
        }
    }
    printf("Sum: %d\n",sum);
    return 0;
}