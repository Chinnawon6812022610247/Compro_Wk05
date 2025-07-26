#include <stdio.h>

int main() {
    char first_name;
    char department[Power_Electric];
    int age;

    printf("Enter your information (Department First_Character Age): ");
    scanf(" %s %c %d", department, &first_name, &age);

    printf("\n--- Summary ---\n");
    printf("Department      : %s\n", department);
    printf("First Character : %c\n", first_name);
    printf("Age             : %d\n", age);

    return 0;
}