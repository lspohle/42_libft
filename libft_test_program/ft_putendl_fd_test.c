#include "test.h"
#include "libft.h"

void	ft_putendl_fd_test(void)
{
	char *str = "World";

	printf("\n\033[1;33mft_putendl_fd.c\033[0m\n");

    // Test 1
    printf("\033[0;36mString to write (and new line):\033[0m\n%s\n\033[0;36mYour ouput:\033[0m\n", str);
	ft_putendl_fd(str, 1); // fd = 1
	printf("\n");
}

// #include "libft.h"
// #include <fcntl.h>

// int main(void)
// {
// 	ft_putendl_fd("Danke :)", 1); // fd = 1 -> "Danke :)" (terminal)
// 	ft_putendl_fd("Danke :)", open("/Users/lspohle/Desktop/libft/libft_tests/ft_putchar_fd_test.txt", O_RDWR)); // fd = 3 -> "Danke :)\n" (file.txt)
// }
