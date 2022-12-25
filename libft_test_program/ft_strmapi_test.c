#include "libft.h"
#include <stdio.h>

char	ft_do_lower(unsigned int i, char c)
{
	printf("Index: %u / Character: %c\n", i, c);
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int main(void)
{
	char (*f) (unsigned int, char);
	f = ft_do_lower;
	char *str = "HELLo";
	char *result = ft_strmapi(str, f); // basic input

	printf("Before: %s\n", str);
	printf("After: %s\n", result);

	free (result);
}
