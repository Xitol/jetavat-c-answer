#include <stdio.h>

void main() {
    int age;
    printf("Please fill your age : ");
    scanf("%d", &age);

    if (age <= 40) {
        printf("You are young");
    }

    else if (age > 40) {
        printf("You are old");
    }
}