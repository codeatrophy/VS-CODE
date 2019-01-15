#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * replaceString(char *myArray, int len) {

 char new[len];
 char transfer[len];

 int repIndex = 0;

 for(int i = 0; i < len; i++) {
     new[i] = myArray[i];
     myArray[i] = ' ';
     printf("new is: %c\n",new[i]);

 }

 for(int i = 0; i < len; i++) {
     // NOTE: \40 is equivalent to blankspace, ' ' itself does not work.
     if(new[i] != '\40') {
        transfer[repIndex] = new[i]; 
        repIndex++;
     } else {
         transfer[repIndex] = '%';
         transfer[repIndex+1] = '2';
         transfer[repIndex+2] = '0';
         repIndex+=3;
     }
 }

 for(int i = 0; i < len; i++) 
     myArray[i] = transfer[i];
}

int main() {         
char strArray[] = {'M', 'r',' ','J','o','h','n',' ','S','m','i','t','h',' ',' ',' ',' ','\0'};
//char strArray[] = {'M', 'r','%','2','0','J','o','h','n','%','2','0','S','M','i','t','h'};
// the transformed array should be like this
// 17 characters
int len= sizeof(strArray) / sizeof(char);
while(strArray[len] != '\0'){
    printf("\nmy array is at: %c", strArray[len]);
    len++;
}

// this is without the null term character
printf("\nthe length of the array is : %d\n", len);

replaceString(strArray,len+1);

printf("\nResult: ");
for(int i = 0; i < len; i++) {
    printf("%c",strArray[i]);
}

    printf("\n");
    return 0;
}