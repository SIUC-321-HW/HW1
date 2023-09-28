/*
Alexander Rogers
09/09/23
ex3 - Factorials with loops
*/

#include <stdio.h>

int main() {
    int val = 0, i = 1;
    unsigned long long int facto = 1;

    // Get value from user if number is negative user has to reinput value
    while(val == 0) {
        printf("Please enter a postive value: ");
        scanf("%d", &val);

        if(val < 0){
            val = 0;
        }
    }

    // facto nor i could start at zero so both varibles had to be initialized at 1
    // Factorio in for loop
    for(i=1; i <= val; i++) {
        facto *= i;
    }

    printf("Value in For loop: %llu\n", facto);

    facto = 1;
    i = 1;
    
    // Factorio in while loop
    while(i <= val) {
        facto *= i;
        i++;
    }

    printf("Value in While loop: %llu\n", facto);

    facto = 1;
    i = 1;

    // Factorio in Do While loop
    do
    {
        facto *= i;
        i++;
    } while (i <= val);

    printf("Value in Do While loop: %llu\n", facto);
    
}