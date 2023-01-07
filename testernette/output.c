/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:36:34 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 20:01:37 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// Displaying congrats
void	testernette(void)
{
	printf(MINT"\n╔══════════════════════════════════════════════════╗\n");
	printf(MINT"║"PURPLE"             Welcome to Testernette!           "MINT"   ║\n");
	printf(MINT"╚══════════════════════════════════════════════════╝\n");
}

// Displaying headline
void	test_headline(char *function_name)
{
	printf(PINK"\n----------------------------------------------------\n"ESCAPE);
	printf(CYAN"	          %s\n"ESCAPE, function_name);
	printf(PINK"----------------------------------------------------\n"ESCAPE);
}

// Displaying success
void	test_successful(int test)
{
	printf(GREEN"Test %d: OK\n"ESCAPE, test);
}

// Displaying failure
void	test_failed(int test, int *value)
{
	printf(RED"Test %d: KO\n"ESCAPE, test);
	*value = 1;
}

// Displaying congrats
void	test_congratulations(void)
{
	printf(PURPLE"╔══════════════════════════════════════════════════╗\n");
	printf(PURPLE"║"BGREEN"   🎉🥳 All tests passed! Congratulations! 🥳🎉"PURPLE"   ║\n");
	printf(PURPLE"╚══════════════════════════════════════════════════╝\n");
}

// Displaying error
void	test_error(void)
{
	printf(PURPLE"╔══════════════════════════════════════════════════╗\n");
	printf(PURPLE"║"BRED"                   🥴 Error! 🥴"PURPLE"                   ║\n");
	printf(PURPLE"╚══════════════════════════════════════════════════╝\n");
}
