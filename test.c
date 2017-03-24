#include "test.h"

void print(some_t *t)
{
    printf("%d, %d\n", t->a, t->b);
}

some_t * init(void)
{
    some_t * a = (some_t *)malloc(sizeof(some_t));
    a->a = 3;
    a->b = 4;
    return a;
}

int main(void)
{
    some_t *a = init();
    print(a);
    free(a);
}