#include "readCSV.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 char * testData = "hello, world, \n\ncopy, name";
 token_t tokenes = getTokensFromCSV(strlen(testData), testData);
 printf("%d\n", tokenes.end[3]);
 free(tokenes.start);
 free(tokenes.end);
 return 0;
} 
