/*
** This is a simple program written in C.
** The program reads 10 integers from the user, printing
** the first and the last number on one line separated by
** a comma. The second and the ninth on the next line, the
** third and the eighth and so forth.
*/


#include <stdio.h>

int main(void)
{
    // Local variable declaration:
    // Each of these variables will store a nummber/value from the user.
    int first_num   = 0;  // First number entered
    int second_num  = 0;  // Second number entered
    int third_num   = 0;  // Third number entered
    int fourth_num  = 0;  // Fourth number entered
    int fifth_num   = 0;  // Fifth number entered
    int sixth_num   = 0;  // Sixth number  entered
    int seventh_num = 0;  // Seventh number entered
    int eighth_num  = 0;  // Eighth number entered
    int ninth_num   = 0;  // Ninth number entered
    int tenth_num   = 0;  // Tenth number entered

    // Input from the user.
    // The user must enter 10 numbers separated by a space when prompt.
    printf("Please enter 10 numbers:\n");

    // processing using scanf() function.
    scanf("%d", &first_num);
    scanf("%d", &second_num);
    scanf("%d", &third_num);
    scanf("%d", &fourth_num);
    scanf("%d", &fifth_num);
    scanf("%d", &sixth_num);
    scanf("%d", &seventh_num);
    scanf("%d", &eighth_num);
    scanf("%d", &ninth_num);
    scanf("%d", &tenth_num);

    // Output for the program with required formatting.
    // printf("%4d", first_num) to move the column 4 places.
    printf("\n");
    printf("Your numbers are:\n");

    printf("%4d", first_num);
    printf(", ");
    printf("%d", tenth_num);
    printf("\n");

    printf("%4d", second_num);
    printf(", ");
    printf("%d", ninth_num);
    printf("\n");

    printf("%4d", third_num);
    printf(", ");
    printf("%d", eighth_num);
    printf("\n");

    printf("%4d", fourth_num);
    printf(", ");
    printf("%d", seventh_num);
    printf("\n");

    printf("%4d", fifth_num);
    printf(", ");
    printf("%d", sixth_num);
    printf("\n");

    return 0;
} // main
