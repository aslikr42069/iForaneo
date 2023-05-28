#ifndef __READ_CSV_H
#define __READ_CSV_H 1

#include <stdint.h>

typedef struct token_t{
 uintmax_t   token_count;
 uintmax_t * start;
 uintmax_t * end;
}token_t;

token_t getTokensFromCSV(uintmax_t length, char * contenidos);

#endif
