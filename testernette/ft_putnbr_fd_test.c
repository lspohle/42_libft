/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:09 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:51:57 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

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
    char    check = getc(fileCheck);
    char    test = getc(fileTest);
    int     line = 1;

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
            else if (check == '\n' && test != '\n')
                test = ft_continue_until_newline_test(fileTest, check, test);
        }
        if (check == '\n' || test == '\n')
            line++;
        check = getc(fileCheck);
        test = getc(fileTest);
    }
    return (result);
}

void	ft_putnbr_fd_test(int *value)
{
    test_headline("ft_putnbr_fd.c");

    int     test = 1;

    int     fd = open("../txt_files/ft_putnbr_fd_test.txt", O_RDWR);
    FILE    *fileCheck;
    FILE    *fileTest;

    //Calling function with various input
    ft_putnbr_fd(5340, fd); // basic input
    write(fd, "\n", 1);
    ft_putnbr_fd(-5340, fd); // negativ input
    write(fd, "\n", 1);
    ft_putnbr_fd(-2147483648, fd); // min int
    write(fd, "\n", 1);
    ft_putnbr_fd(2147483647, fd); // max int

    // Opening check file and test file
    fileCheck = fopen("../txt_files/ft_putnbr_fd_check.txt", "r");
    fileTest = fopen("../txt_files/ft_putnbr_fd_test.txt", "r");
    if (fileCheck == NULL || fileTest == NULL)
        exit (0);

    // Comparing the files line by line
    test_results result = ft_compare_files(fileCheck, fileTest);

    // Test 1
    if (result.test1 == 0)
     	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (result.test2 == 0)
     	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
    if (result.test3 == 0)
     	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 4
    if (result.test4 == 0)
     	test_successful(test);
	else
		test_failed(test, value);

    // Closing check and test file (which were opened for comparing their content)
    fclose(fileCheck);
    fclose(fileTest);

    // Closing test file (which was open in order to apply ft_putnbr_fd())
    close(fd);
}
