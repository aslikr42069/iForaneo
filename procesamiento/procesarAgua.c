#include <stdio.h>
#include <stdlib.h>
#include "readCSV.h"

char * getSinAgua(int municipio){
 /*
 1 = Apodaca
 2 = Cadereyta
 3 = Garcia
 4 = General Escobedo
 5 = Guadalupe
 6 = Juarez
 7 = Monterrey
 8 = San Nicolas
 9 = San Pedro
 */
 FILE *file = fopen("../data/censoAgua.csv", "r");
 if(file == NULL){
  printf("ERROR: Archivo \"censoAgua.csv\" no existe");
 }
 fseek(file, 0, SEEK_END);
 long file_len = ftell(file);
 printf("File size: %d\n", file_len);
 rewind(file);
 char * contenidos = (char *) malloc(sizeof(char) * file_len); 
 for(int i = 0; i < file_len; i++){
  contenidos[i] = getc(file);
 }
 fclose(file);
 
 
 return contenidos;
}

int main(){
 free(archivo);
 return 0;
}
