#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isUniqueChar(char *myCharArray, int len)
{
  int counter = -1;
  int skipIndex; // the index of the char you are checking duplicates for which will not be counted
  char tempChar; // 
  //outer loop advances the tempChar character
  for (int i = 0; i < len; i++) {
    tempChar = myCharArray[i];
    skipIndex = i;
    printf("Checking character %c and counter is reset to %d \n\n", tempChar, counter);

    // inner loop compares the tempChar advanced character with the arrray's characters
    for (int j = 0; j < len; j++) {
      printf("Comparing tempChar char %c with the arrray char %c and counter value is %d: \n", tempChar, myCharArray[j], counter);
    // counter increased for dups and only if not equal to the tempChars own index
      if (tempChar == myCharArray[j] && j != skipIndex) counter++; //makresurenewoneowkrs
    }
  }

  if (counter == -1) return false;
  else return true;
}
int main() {

  char myCharArray[] = {'h', 'e', 'l', 'l', 'o', '\0'};

  int len = sizeof(myCharArray) / sizeof(char);
  printf("number of items in myCharArray array are: %d\n", len);

  if (isUniqueChar(myCharArray, len)) printf("There is at least one duplicate character.");
  else printf("There are no duplicate characters.");

  return 0;
}