
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// this a program to replace all blanks with '%20' in a string
// return the shifted string with in between spaces converted to %20
// Note each character in %20 recieves it's own space
char * replaceString(char *myArray, int iter) {
//TODO: Properly transfer characters from pointer array to local array using a loop

char temp[iter];

for(size_t i = 0; i < iter; i++) {
    temp[i] = myArray[i];
    printf("%c",temp[i]);
}

printf("\n")


for(size_t i = 0; i < iter; i++)
{
    myArray[i] = ' ';
}

for(size_t i = 0; i < iter; i++)
{
    printf("%c",myArray[i]);
}


}
int main() {         
char strArray[] = {'M', 'r',' ','J','o','h','n',' ','S','m','i','t','h',' ',' ',' ',' ','\0'};
//char sArray[] = {'M', 'r','%','2','0','J','o','h','n','%','2','0','S','M','i','t','h'};

// the transformed array should be like this
// 17 characters
int iter = 0;
while(strArray[iter] != '\0'){
    printf("\nmy array is at: %c", strArray[iter]);
    iter++;
}

// this is without the null term character
printf("\nthe length of the array is : %d\n", iter);

replaceString(strArray,iter);

printf("\nResult: ");
for(int i = 0; i < iter; i++) {
    printf("\n:%c",strArray[i]);
}

    return 0;
}