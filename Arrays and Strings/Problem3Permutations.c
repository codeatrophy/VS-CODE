#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Needed a structure to keep track of string information
typedef struct charPerm
{
    int len;        // the length of the string if no match then it cant be a permutation
    char *letters;  // keeps track of the letters in the string
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


    // sort the characters here somehow, using ascii value

    


    else
    {
        charPerm A;
        charPerm B;
        A.len=lenFirst;
        B.len=lenSecond;
        A.letters=malloc(lenFirst*(sizeof(char)));
        A.frequency=malloc(lenFirst*(sizeof(int)));
        B.letters=malloc(lenSecond*(sizeof(int)));
        B.frequency=malloc(lenSecond*(sizeof(int)));


        for (int i = 0; i < lenFirst; i++) {

        if(firstPerm[i] == 65) {
            A.letters[i] = 'a';
        }

        if(firstPerm[i] == 66) {
            A.letters[i] = 'b';
        }
        
        if(firstPerm[i] == 67) {
            A.letters[i] = 'c';
        }

        
        for (int i = 0; i < lenSecond; i++) {

        if(secondPerm[i] == 65) {
            B.letters[i] = 'a';
        }

        if(secondPerm[i] == 66) {
            B.letters[i] = 'b';
        }
        
        if(secondPerm[i] == 67) {
            B.letters[i] = 'c';
        }

    }


        for (int i = 0; i < lenFirst; i++)
        {
            if(A.letters[i] == B.letters[i]) {
                count++
            }
            if(count == 3) {
                return true;
            } else 
                return false;
        }
    }

}

int main()
{
    // lenFirst here is 6
    char firstPerm[] = {'c', 'b', 'a', '\0'};
    char secondPerm[] = {'c', 'a', 'b', '\0'};

    // gives lenFirst of array without explicitly stating the integer!
    int lenFirst = sizeof(firstPerm) / sizeof(char);
    int lenSecond = sizeof(secondPerm) / sizeof(char);
    // Checks if a string is a permutation of another
    isPermutation(firstPerm, secondPerm, lenFirst, lenSecond);

    return 0;
}