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

    
    else
    {

        charPerm A;
        charPerm B;

        A.len=lenFirst;
        B.len=lenSecond;

        for (int i = 0; i < lenFirst; i++)
        {
            
        }
    
    if() {


    }
    else {
     return true; // its a permutation

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