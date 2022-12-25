#include "test.h"
#include "libft.h"

static int ft_compare_files(FILE *fileCheck, FILE *fileTest)
{
    char check = getc(fileCheck);
    char test = getc(fileTest);
    int pos = 0;
    int line = 1;

    while(check != EOF || test != EOF)
    {
        pos++;
        if (check == '\n' && test == '\n')
        {
            line++;
            pos = 0;
        }
        if (check != test)
            return (1);
        check = getc(fileCheck);
        test = getc(fileTest);
    }
    return (0);
}

void	ft_putchar_fd_test(void)
{
    int test = 1;

    FILE *fileCheck;
    FILE *fileTest;

	printf("\n\033[1;33mft_putchar_fd.c\033[0m\n");

    // Test 1
    ft_putchar_fd('a', open("/Users/leaspoehle/Desktop/42/libft/libft_new/intra-uuid-2153df94-6dd7-4f6b-8599-457993d64d94-4592149-lspohle/ft_putchar_fd_test.txt", O_RDWR));
    fileCheck = fopen("ft_putchar_fd_check.txt", "r");
    fileTest = fopen("ft_putchar_fd_test.txt", "r");
    if (fileCheck == NULL || fileTest == NULL)
        exit (0);
    if (ft_compare_files(fileCheck, fileTest) == 0)
     	test_successful(test);
	else
		test_failed(test);
    fclose(fileCheck);
    fclose(fileTest);
}

// #include "libft.h"
// #include <fcntl.h>
// #include <stdio.h>

// int main(void)
// {
// 	int fd;

// 	printf("File Descirptor: %d\n", fd);
// 	ft_putchar_fd('b', 1); // fd = 1
// }
