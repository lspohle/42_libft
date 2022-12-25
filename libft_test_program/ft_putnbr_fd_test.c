#include "test.h"
#include "libft.h"

// Declaring struct and creating alias for it
typedef struct test_result
{
    int test1;
    int test2;
    int test3;
    int test4;
}      test_results;

// Assuring that the line of both files is at the end of itself
static char ft_continue_until_newline_check(FILE *fileCheck, char check, char test)
{
    while (test == '\n' && check != '\n')
        check = getc(fileCheck);
    return (check);
}

static char ft_continue_until_newline_test(FILE *fileTest, char check, char test)
{
    while (check == '\n' && test != '\n')
        test = getc(fileTest);
    return (test);
}

static test_results ft_compare_files(FILE *fileCheck, FILE *fileTest)
{
    char check = getc(fileCheck);
    char test = getc(fileTest);
    int line = 1;

    // Creating struct result to store return values
    test_results result;
    result.test1 = 0;
    result.test2 = 0;
    result.test3 = 0;
    result.test4 = 0;
    while(check != EOF && test != EOF)
    {
        if (check != test)
        {
            // Stating in which line the mismatch occurred
            if (line == 1)
                result.test1 = 1;
            else if (line == 2)
                result.test2 = 1;
            else if (line == 3)
                result.test3 = 1;
            else if (line == 4)
                result.test4 = 1;
            // Assuring that the line of fileCheck is at the end of itself
            if (test == '\n' && check != '\n')
                check = ft_continue_until_newline_check(fileCheck, check, test);
            // Assuring that the line of fileTest is at the end of itself
            if (check == '\n' && test != '\n')
                test = ft_continue_until_newline_test(fileTest, check, test);
        }
        if (check == '\n' || test == '\n')
            line++;
        check = getc(fileCheck);
        test = getc(fileTest);
    }
    return (result);
}

void	ft_putnbr_fd_test(void)
{
    int test = 1;

    int fd = open("/Users/leaspoehle/Desktop/42/libft/libft_new/intra-uuid-2153df94-6dd7-4f6b-8599-457993d64d94-4592149-lspohle/ft_putnbr_fd_test.txt" , O_RDWR);
    FILE *fileCheck;
    FILE *fileTest;

	printf("\n\033[1;33mft_putnbr_fd.c\033[0m\n");

    //Calling function with various input
    ft_putnbr_fd(5340, fd); // basic input
    write(fd, "\n", 1);
    ft_putnbr_fd(-5340, fd); // negativ input
    write(fd, "\n", 1);
    ft_putnbr_fd(-2147483648, fd); // min int
    write(fd, "\n", 1);
    ft_putnbr_fd(2147483647, fd); // max int
    write(fd, "\n", 1);

    // Opening check file and test file
    fileCheck = fopen("ft_putnbr_fd_check.txt", "r");
    fileTest = fopen("ft_putnbr_fd_test.txt", "r");
    if (fileCheck == NULL || fileTest == NULL)
        exit (0);

    // Comparing the files line by line
    test_results result = ft_compare_files(fileCheck, fileTest);

    // Test 1
    if (result.test1 == 0)
     	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (result.test2 == 0)
     	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (result.test3 == 0)
     	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
    if (result.test4 == 0)
     	test_successful(test);
	else
		test_failed(test);

    // Closing check and test file
    fclose(fileCheck);
    fclose(fileTest);
}


// void	ft_putnbr_fd_test(void)
// {
//     int test = 1;

//     int fd = open("/Users/leaspoehle/Desktop/42/libft/libft_new/intra-uuid-2153df94-6dd7-4f6b-8599-457993d64d94-4592149-lspohle/ft_putnbr_fd_test.txt" , O_RDWR);
//     FILE *fileCheck;
//     FILE *fileTest;

// 	printf("\n\033[1;33mft_putnbr_fd.c\033[0m\n");

//     // Test 1
//     ft_putnbr_fd(5340, fd); // basic input
//     fileCheck = fopen("ft_putnbr_fd_check.txt", "r");
//     fileTest = fopen("ft_putnbr_fd_test.txt", "r");
//     if (fileCheck == NULL || fileTest == NULL)
//         exit (0);
//     if (ft_compare_files(fileCheck, fileTest, 1) == 0)
//      	test_successful(test);
// 	else
// 		test_failed(test);
//     fclose(fileCheck);
//     fclose(fileTest);
//     write(fd, "\n", 1);
//     test++;

//     // Test 2
//     ft_putnbr_fd(-5340, fd); // negativ input
//     fileCheck = fopen("ft_putnbr_fd_check.txt", "r");
//     fileTest = fopen("ft_putnbr_fd_test.txt", "r");
//     if (fileCheck == NULL || fileTest == NULL)
//         exit (0);
//     if (ft_compare_files(fileCheck, fileTest, 2) == 0)
//      	test_successful(test);
// 	else
// 		test_failed(test);
//     fclose(fileCheck);
//     fclose(fileTest);
//     write(fd, "\n", 1);
//     test++;

//     // Test 3
//     ft_putnbr_fd(-2147483648, fd); // min int
//     fileCheck = fopen("ft_putnbr_fd_check.txt", "r");
//     fileTest = fopen("ft_putnbr_fd_test.txt", "r");
//     if (fileCheck == NULL || fileTest == NULL)
//         exit (0);
//     if (ft_compare_files(fileCheck, fileTest, 3) == 0)
//      	test_successful(test);
// 	else
// 		test_failed(test);
//     fclose(fileCheck);
//     fclose(fileTest);
//     write(fd, "\n", 1);
//     test++;

//     // Test 4
//     ft_putnbr_fd(2147483647, fd); // max int
//     fileCheck = fopen("ft_putnbr_fd_check.txt", "r");
//     fileTest = fopen("ft_putnbr_fd_test.txt", "r");
//     if (fileCheck == NULL || fileTest == NULL)
//         exit (0);
//     if (ft_compare_files(fileCheck, fileTest, 4) == 0)
//      	test_successful(test);
// 	else
// 		test_failed(test);
//     fclose(fileCheck);
//     fclose(fileTest);
// }

// #include "libft.h"
// #include <fcntl.h>

// int main(void)
// {
// 	ft_putnbr_fd(5340, 1); // fd = 1 -> 5340 (terminal) // basic input
// 	ft_putnbr_fd(-5340, 1); // fd = 1 -> -5340 (terminal) // negative int
// 	ft_putnbr_fd(-2147483648, 1); // fd = 1 -> -2147483648 (terminal) // int min
// 	ft_putnbr_fd(2147483647, 1); // fd = 1 -> 2147483647 (terminal) // int max
// 	ft_putnbr_fd(5340, open("/Users/lspohle/Desktop/libft/libft_tests/ft_putnbr_fd_test.txt", O_RDWR)); // fd = 3 -> 5340 (file.txt) // basic input
// }
