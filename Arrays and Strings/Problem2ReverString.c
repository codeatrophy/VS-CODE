#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void reverse(char *myCharArray, int len)
{
    // Why does obtaining the size like this even work but len does not
    char revString[sizeof(myCharArray) / sizeof(char)];
    int revStringIndex = 0;

    for(int i = len-2; i >= 0; i--) {
        revString[revStringIndex] = myCharArray[i];
        revStringIndex++;
    }

    
    printf("The reversed string is: ");
    for(int i = 0; i < len ; i++) 
        printf("%c", revString[i]);

}
int main() {
    // len here is 6
    char myCharArray[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // gives len of array without explicitly stating the integer!
    int len = sizeof(myCharArray) / sizeof(char);

    reverse(myCharArray,len);

    return 0;
}