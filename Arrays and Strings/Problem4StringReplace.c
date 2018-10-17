
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
// Note each character in %20 recieves it's own individual space
char * replaceString(char *myArray, int shift, int iter) {

int count = iter;

 for(int i = 0; i < iter; i++) {
     printf("\nI have: %c",myArray[i]);
 }

for(int i = iter; i >= 0 ; i--) {
     printf("\nwe have %c",myArray[i]);

    if(myArray[i] != ' ') {
        myArray[count] = myArray[i];
        count--;
    }

}




    return myArray;
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
printf("\nthe size of charStrLen is : %d\n", iter);

int shift = 0;

shift = shiftCount(strArray,iter);
// this should be 6
printf("\nThe string will be shifted by a count of: %d", shift);

replaceString(strArray,shift,iter);

printf("\nThe final array is: ");
for(int i = 0; i < iter; i++) {
    printf("%c",strArray[i]);
}

    return 0;
}