/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:51:23 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:22:32 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as 
//     char *strnstr(const char *haystack, const char *needle, size_t len)
//     -> #include <string.h>
//     -> locates the first occurrence of the null-terminated string needle in 
//        the string haystack, where not more than len characters are searched
//     -> since the strnstr() function is a FreeBSD specific API, it should 
//        only be used when portability is not a concern
//     -> if s2 is an empty string, s1 is returned;
//        if s2 occurs nowhere in s1, NULL is returned;
//        otherwise a pointer to the first character of the first occurrence 
//        of s2 is returned

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;

	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *) haystack);
	while (len >= needle_len && haystack_len >= needle_len)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *) haystack);
		len--;
		haystack_len--;
		haystack++;
	}
	return (0);
}
// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char* s1 = "42WobWolfsburg";
//     char* s2 = "Wolf";
//     size_t len;

//     len = ft_strlen(s1);
//     printf("Original: %s\n", strnstr(s1, s2, len));
//     printf("Reproduction: %s\n", ft_strnstr(s1, s2, len));
// 	printf("\nOriginal: %s\n", strnstr(s1, s1, len));
//     printf("Reproduction: %s\n", ft_strnstr(s1, s1, len));
// }
