
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// this a program to replace all blanks with '%20' in a string
// return the shifted string with in between spaces converted to %20
// Note each character in %20 recieves it's own space
char * replaceString(char *myArray, int len) {
//TODO: Properly transfer characters from pointer array to local array using a loop

 char new[17];



}
int main() {         
char strArray[] = {'M', 'r',' ','J','o','h','n',' ','S','m','i','t','h',' ',' ',' ',' ','\0'};
//char strArray[] = {'M', 'r','%','2','0','J','o','h','n','%','2','0','S','M','i','t','h'};

// the transformed array should be like this
// 17 characters
int len=0;
while(strArray[len] != '\0'){
    printf("\nmy array is at: %c", strArray[len]);
    len++;
}

// this is without the null term character
printf("\nthe length of the array is : %d\n", len);

replaceString(strArray,len);

printf("\nResult: ");
for(int i = 0; i < len; i++) {
    printf("\n:%c",strArray[i]);
}

    return 0;
}