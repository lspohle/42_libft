#include "test.h"
#include "libft.h"

void	ft_putstr_fd_test(void)
{
	char *str = "42 Wolfsburg";

	printf("\n\033[1;33mft_putstr_fd.c\033[0m\n");

    // Test 1
    printf("\033[0;36mString to write:\033[0m\n%s\n\033[0;36mYour ouput:\033[0m\n", str);
	ft_putstr_fd(str, 1); // fd = 1
	printf("\n");
}

// #include "libft.h"
// #include <fcntl.h>

// int main(void)
// {
// 	ft_putstr_fd("Thanks :)", 1); // fd = 1 -> "Danke :)%" (terminal)
// 	ft_putstr_fd("Thanks :)", open("/Users/lspohle/Desktop/libft/libft_tests/ft_putstr_fd_test.txt", O_RDWR)); // fd = 3 -> "Danke :)" (file.txt)
// }
