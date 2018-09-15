
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

typedef struct foo {
char a;
bool b;
int c;
double d;
short e;
float f;
double g;
char *chrptr;
float *fptr;
int x;
} foo;

foo foo;

printf("%d\n",sizeof(foo));
printf("%d\n",sizeof(foo->a));
printf("%d\n",sizeof(foo->b));
printf("%d\n",sizeof(foo->c));
printf("%d\n",sizeof(foo->d));
printf("%d\n",sizeof(foo->e));
printf("%d\n",sizeof(foo->f));
printf("%d\n",sizeof(foo->g));
printf("%d\n",sizeof(foo->chrptr));
printf("%d\n",sizeof(foo->fptr));
printf("%d\n",sizeof(foo->x));

}