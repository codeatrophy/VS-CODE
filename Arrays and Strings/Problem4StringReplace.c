
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// this a program to replace all blanks with '%20' in a string
 
// shift counter + blankspace finder
// This function returns the amount of shift to occur for the string based on the spaces
// Shift = blankspace*3
int shiftCount(char *myArray, int iter) {
 int charStrLen = iter;
 int counter;
 // Count increases only when there are non consecutive blankspaces!
 for(int i = 0; i < 20; i++) {
     printf("%c",myArray[i]);
 }

 for(int i = 0; i=< charStrLen; i++) {

     if((myArray[i] && myArray[i+1]) != ' ') {
        
     } else
        counter++;
 }

 return counter;

}
// return the shifted string with in between spaces converted to %20
int replaceString() {

    return 0;
}
int main() {

char strArray[] = {'M', 'r',' ','J','o','h','n',' ','S','m','i','t','h',' ',' ',' ',' ',' ',' ', '\0'};

// holds the const size of the string including null term char
int iter = 0;

while(strArray[iter] != '\0'){
    printf("\nmy array is at: %c", strArray[iter]);
    iter++;
}

// this is without the null term character
printf("\nthe size of charStrLen is : %d", iter);

int shift = 0;

shift = shiftCount(strArray,iter);

printf("\nThe string will be shifted by a count of: %d", shift);

replaceString();



    return 0;
}