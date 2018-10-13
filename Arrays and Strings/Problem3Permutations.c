#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Needed a structure to keep track of string information
typedef struct charPerm
{
    int len;        // the length of the string if no match then it cant be a permutation
    int *letters;  // keeps track of the letters in the string
    int *frequency; // keeps frequency of the letters in the string

} charPerm;

// returns true if either string is permutation of the other etc.
bool isPermutation(char *firstPerm, char *secondPerm, int lenFirst, int lenSecond)
{
    // def: permutation is simply having same set of characters, but perhaps appear in different order
    // ex: abc, acb, bca, bac are all permutations of each other
    if (lenFirst != lenSecond) {
        printf("Permutation cannot be possible since length of the strings are not equal.");
        return false; 
    }

    else
    {
        printf("checking for perm");
        charPerm A;
        charPerm B;
        int count;
        A.len=lenFirst-1;
        B.len=lenSecond-1;
        A.letters=malloc(lenFirst*sizeof(char));
        A.frequency=malloc(lenFirst*sizeof(int));
        B.letters=malloc(lenSecond*sizeof(char));
        B.frequency=malloc(lenSecond*sizeof(int));


        for (int i = 0; i < A.len; i++) {
            
            printf("\ncurrent letter in first perm is%c", firstPerm[i]);
        if(firstPerm[i] == 65) {
            A.letters[0] = 1;
            
        }

        if(firstPerm[i] == 66) {
            A.letters[1] = 2;
        }
        
        if(firstPerm[i] == 67) {
            A.letters[2] = 3;
        }


        }
        printf("\ndone sorting chars for A");

        for (int i = 0; i < B.len; i++) {

        if(secondPerm[i] == 65) {
            B.letters[0] = 1;
        }

        if(secondPerm[i] == 66) {
            B.letters[1] = 2;
        }
        
        if(secondPerm[i] == 67) {
            B.letters[2] = 3;
        }

        }

        printf("\ndone sorting chars for B");

        for (int i = 0; i < A.len; i++) {
            if(A.letters[i] == B.letters[i]) {
                printf("\ncharacter for A here is %d", A.letters[i]);
                printf("\ncharacter for B here is %d", B.letters[i]);
                count++;
            }
        }

        printf("\ndone counting");

          if(count == 3) {
                printf("\nits a permutation");
                return true;
            } else {
                printf("\nnot perm");
                return false;
            }
    }
}

int main()
{
    // lenFirst here is 6
    char firstPerm[] = {'c', 'a', 'a', '\0'};
    char secondPerm[] = {'b', 'a', 'c', '\0'};

    // gives lenFirst of array without explicitly stating the integer!
    int lenFirst = sizeof(firstPerm) / sizeof(char);
    int lenSecond = sizeof(secondPerm) / sizeof(char);
    // Checks if a string is a permutation of another
    isPermutation(firstPerm, secondPerm, lenFirst, lenSecond);

    return 0;
}