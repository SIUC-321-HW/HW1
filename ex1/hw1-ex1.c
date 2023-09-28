/*
Alexander Rogers
09/09/23
ex1 - Vowel Checker
*/

#include <stdio.h>

int main() {
    // Delcared all varibles before starting while loop 
    char vowles[] = {'a', 'e', 'i', 'o', 'u'};
    char input, ascii;
    int i, placeHold;

    while(1) {
        // Takes input of single character 
        printf("Please input a letter: ");
        scanf("%c", &input);

        // Clears input buffer including all characters and \n 
        // Learned about input buffers when I was getting unexpected results running my code
        while ((getchar()) != '\n');

        //used place holders for char and for loop
        ascii = input;
        placeHold = 0;

        // checks to see if input is 'Q'
        if(ascii == 81) {
            printf("Good Bye\n");
            return 0;
        }
        // If letter is capitial it will change it to lower case
        else if(ascii > 64 && ascii < 91) {
            ascii += 32;
        }
        // If vaule is not a letter will tell user by using not
        else if(!(ascii > 96 && ascii < 123)) {
            printf("%c is not a letter\n", input);
            continue;
        }

        // Used for loop instead of switch statment to not repeat code
        for(i=0; i < 5; i++) {
            // If place holder is vowel sets place holder to one then breaks
            if(ascii == vowles[i]) {
                printf("%c is a vowel\n", input);
                placeHold = 1;
                break;
            }
        }
        // If place holder was not changed letter is not a vowel
        if(placeHold == 0) {
            printf("%c is not a vowel\n", input);
        }
    }
}