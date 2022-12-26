#include "test.h"
#include "libft.h"

void	ft_strrchr_test(void)
{
    test_headline("ft_strrchr.c");

    int     test = 1;
    
    char    * s = "Hello\0World";
    int     c = '\0';
    int     d = 'A';
    
    // Test 1
    if (strncmp(strrchr(s, c), ft_strrchr(s, c), strlen(s)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strrchr(s, d) == ft_strrchr(s, d))
    	test_successful(test);
	else
		test_failed(test);
}
