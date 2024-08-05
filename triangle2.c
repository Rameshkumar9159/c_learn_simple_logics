#include <stdio.h>

int main()
{
    int rows ;
    printf("Enter the rows:");
    scanf("%d",&rows);

    // first loop to print all rows
    for (int i = 0; i < rows; i++) {

        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        // inner loop 2 to print star * character
        for (int k = 0; k < 2 *(rows-i)-1; k++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

