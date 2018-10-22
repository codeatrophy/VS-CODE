
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// this a program to replace all blanks with '%20' in a string
// shift counter + blankspace finder
// This function returns the amount of shift to occur for the string based on the extra spaces provided
int shiftCount(char *myArray, int iter) {
 int charStrLen = iter;
 int shift = 0;
 int index = 0;
 // Count increases only when there are non consecutive blankspaces!
 for(int i = 0; i < charStrLen; i++) {
     printf("%c",myArray[i]);
 }

while(index <= charStrLen) {


if(myArray[index] && myArray[index+1] == ' ')
    shift++;

    index++;
}


 return shift-2;
}
// return the shifted string with in between spaces converted to %20
// Note each character in %20 recieves it's own space
char * replaceString(char *myArray, int shift, int iter) {

int count = iter;

char tempArray[iter];

char blank[iter];

strncpy(tempArray,myArray,iter);

for(int i = 0; i <= iter; i++) {
    if(tempArray[i] == ' ') {
        blank[i] = '%';
        blank[i+1] = '2';
        blank[i+2] = '0';
    }
}
printf("\nblank is: ");
for(int i = 0; i < iter; i++) {
    printf("%c", blank[i]);
    myArray[i] = ' ';
}
 
for(int i = 0; i < iter; i++) {
    myArray[i] = blank[i];
}
 
 return myArray;
}
int main() {
//                           %   2   0      
char strArray[] = {'M', 'r',' ','J','o','h','n',' ','S','m','i','t','h',' ',' ',' ',' ',' ',' ', '\0'};
// 19 characters
// holds the const size of the string including null term char
int iter = 0;

while(strArray[iter] != '\0'){
    printf("\nmy array is at: %c", strArray[iter]);
    iter++;
}

// this is without the null term character
printf("\nthe size of charStrLen is : %d\n", iter);

int shift = 0;

shift = shiftCount(strArray,iter);
// this should be 6
printf("\nThe string will be shifted by a count of: %d", shift);

replaceString(strArray,shift,iter);

printf("\nResult: ");
for(int i = 0; i < iter; i++) {
    printf("\n:%c",strArray[i]);
}

    return 0;
}