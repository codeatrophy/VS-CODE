#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * replaceString(char *myArray, int len) {

    if(len == 0) {
        printf("String Uncompressable");
        return 0;
    } else { // so how do we count the numbers
        int charCounter = 1; // since string len !=0, at least one word will be here.
        int counterIndex = 0; // tracks index for the letters
        int counterArray[len]; // stores the counts for the letters
        for(int i = 0; i < len; i++) {
            /* when the currentletter, and next letter are same, increment
               that letters counter, and the counter in the array
               */
            if(myArray[i] == myArray[i+1]) {
                charCounter++;
                counterArray[counterIndex] = charCounter;
            } 

              else if(myArray[i] != myArray[i+1] && myArray[i] != myArray[i-1]) {
                charCounter=1;
                counterArray[counterIndex] = charCounter;
                counterIndex++;
            }

            else if(myArray[i] != myArray[i+1]) {
                counterArray[counterIndex++];
                charCounter=1;

            }
        }
        for(int i = 0; i < 4; i++){
            printf("\n Stored in index %d of counterArray, this count of letters: %d",i, counterArray[i]);
        }

        
        int tempCounter = 0;
        char compressedCharTemp[len]; //stores letters and numbers
        int finalLength = 8;
        int howFar = 0;
        int counterJ = 0;
        compressedCharTemp[0] = myArray[0];

        for(int i = 1; i < 8; i++) {

            if((i%2) == 0) {
                howFar += counterArray[counterJ];
                compressedCharTemp[i] = myArray[howFar];
//printf("\nhow far = %d, compressedChar = %c, counterJ = %d\n", howFar, compressedCharTemp[i], counterJ);
                counterJ++;
            }else {
                compressedCharTemp[i] = counterArray[tempCounter]+'0';
                tempCounter++;
            }
        }   
        printf("\ntempArray is: \n");
        for(int i = 0; i < finalLength; i++){
            printf("%c",compressedCharTemp[i]);
        }
    }
}

int main() {         

    char * precompressed = "aabcccccaaa";

    int length = strlen(precompressed); // doesnt include '\0'  
    printf("\nthe length of the char string array is : %d\n", length);

    replaceString(precompressed,length);    

    printf("\n");
    return 0;
}