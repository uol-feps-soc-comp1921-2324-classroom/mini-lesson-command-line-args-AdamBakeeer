#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]) {
    //int num1, num2;

    // Prompt the user for input
    //printf("Enter the first number: ");
    //scanf("%d", &num1);

    //printf("Enter the second number: ");
    //scanf("%d", &num2);
    int num1 = atoi(argv[1]);

    int num2 = atoi(argv[2]);

    int sum = num1 + num2;

    printf("sum of the 2 numbers is %d\n" , sum);

    

    return 0; // Exit successfully
}
