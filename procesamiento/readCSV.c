#include "readCSV.h"
#include <stdlib.h>
#define DELIMITER ','

token_t getTokensFromCSV(uintmax_t length, char * contenidos){
 uintmax_t num_entradas = 1;
 for(uintmax_t i = 0; i < length; i++){
  if(contenidos[i] == DELIMITER){
   num_entradas += 1;
  }
 }
 token_t tokens;
 tokens.token_count = num_entradas;
 tokens.start       = (uintmax_t *)calloc(num_entradas, sizeof(uintmax_t));
 tokens.end         = (uintmax_t *)calloc(num_entradas, sizeof(uintmax_t));

 uintmax_t pos = 0;
 num_entradas = 0;
 while(num_entradas < tokens.token_count && pos < length){
  while(pos < length &&
        (contenidos[pos] == ' '  ||
         contenidos[pos] == '\n' ||
         contenidos[pos] == '\t' )){
   pos++;
  } 
  tokens.start[num_entradas] = pos;


  tokens.end[num_entradas] = pos;
  while(pos < length && contenidos[pos] != DELIMITER){
   tokens.end[num_entradas] += 1;
   pos++;
  }
  pos++;
  num_entradas += 1;
 }
 return tokens;
}
