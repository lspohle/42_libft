#include "test.h"
#include "libft.h"

void	ft_calloc_test(void)
{
    int test = 1;

    int *array1;
    int *array2;
    size_t	count = 3; // count of objects
	size_t	size_char = 1; // size of each object (sizeof(char)
    size_t	size_int = 4; // size of each object (sizeof(int)

	printf("\n\033[1;33mft_calloc.c\033[0m\n");

    // Test 1
    array1 = calloc(count, size_char);
    array2 = ft_calloc(count, size_char);
	if (memcmp(array1, array2, count * size_char) == 0)
		test_successful(test);
	else
		test_failed(test);
    free(array1);
    free(array2);
    test++;

    // Test 2
    array1 = calloc(count, size_int);
    array2 = ft_calloc(count, size_int);
	if (memcmp(array1, array2, count * size_int) == 0)
		test_successful(test);
	else
		test_failed(test);
    free(array1);
    free(array2);
}

// #include "libft.h"

// int main(void)
// {
// 	size_t	count = 3; // count of objects
// 	size_t	size = 4; // size of each object (sizeof(char) = 1, sizeof(int) = 4)

// 	ft_calloc(count, size); // basic input -> "000000000000"
// }
