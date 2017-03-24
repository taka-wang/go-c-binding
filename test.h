#include <stdio.h>
#include <stdlib.h>

typedef struct some 
{
    int a;
    int b;
} some_t;

void print(some_t *t);
some_t * init(void);