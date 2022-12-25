#include "test.h"

void    test_failed(int test)
{
    printf("	\033[0;31mTest %d: KO\033[0m\n", test);
}