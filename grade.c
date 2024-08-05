#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;
    float percent;
    printf("Enter the s1 s2 s3 s4 s5: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    percent = ((float)(s1 + s2 + s3 + s4 + s5) / 500) * 100;

    if (percent >= 80) {
        printf("Grade A and your percent is %.2f\n", percent);
    } else if (percent < 80 && percent >= 60) {
        printf("Grade B and your percent is %.2f\n", percent);
    } else if (percent < 60 && percent >= 40) {
        printf("Grade C and your percent is %.2f\n", percent);
    } else {
        printf("You got fail mark. Your percent is less than 40 so we cannot display your percent.\n");
    }
    
    return 0;
}

