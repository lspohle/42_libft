/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:46:39 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:20:45 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as int strncmp(const char *s1, const char *s2, size_t n)
//     -> #include <string.h>
//     -> lexicographically compares the null-terminated strings s1 and s2
//     -> compares not more than n characters
//     -> if s1 == s2, return (0) [return equal to 0]
//        if s1 < s2, return (s1[i] - s2[i]) [return smaller than 0]
//        if s1 > s2, return (s1[i] - s2[i]) [return greater than 0]

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_u;
	unsigned char	*s2_u;
	size_t			i;

	s1_u = (unsigned char *) s1;
	s2_u = (unsigned char *) s2;
	i = 0;
	while (i < n && s1_u[i] == s2_u[i] && s1_u[i] && s1_u[i])
		i++;
	if (i == n)
		return (0);
	return (s1_u[i] - s2_u[i]);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
//     char s1[] = "Hello World";
//     char s2[] = "HelloWorld";
//     size_t n1 = 6;

// 	char s3[] = "abcdef";
// 	char s4[] = "abcdefghijklmnop";
// 	size_t n2 = 6;

//     printf("Original: %d\n", strncmp(s1, s2, n1));
//     printf("Reproduction: %d\n", ft_strncmp(s1, s2, n1));
// 	printf("Original: %d\n", strncmp(s3, s4, n2));
//     printf("Reproduction: %d\n", ft_strncmp(s3, s4, n2));
// }