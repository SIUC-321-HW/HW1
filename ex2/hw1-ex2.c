/*
Alexander Rogers
09/09/23
ex2 - Number Sorter
*/

#include <stdio.h>

int main() {
    int val, i, temp = 0;
    
    // For loop iterates 10 times and stores values in both val and temp
    for(i=0; i<10; i++) {
        printf("Enter a positive value for value %d: ",(i+1));
        scanf("%d", &val);

        // If value is less than 0 then i resets 1 and loop restarts
        if(val < 0) {
            i--;
            continue;
        }
        
        // If val is bigger than temp, then temp keeps largest value from user
        if(val > temp) {
            temp = val;
        }
    }

    // Prints temp which should have largest integer that the user inputs
    printf("The largest number out of the ten is: %d\n", temp);

}