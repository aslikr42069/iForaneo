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
 rewind(file);
 char * contenidos = (char *) malloc(sizeof(char) * file_len); 
 for(int i = 0; i < file_len; i++){
  contenidos[i] = getc(file);
 }
 fclose(file);
 token_t tokenes = getTokensFromCSV((uintmax_t) file_len, contenidos);

 int indice_token = (5 * (municipio + 1)) - 1;
 uintmax_t entry_length = (tokenes.end[indice_token] - tokenes.start[indice_token]);
 char * entry = (char *) calloc(entry_length + 1, sizeof(char));
 for(int i = 0; i < entry_length; i++){
  entry[i] = contenidos[tokenes.start[indice_token] + i];
 }
 entry[entry_length] = '\0';
 return entry;
}

