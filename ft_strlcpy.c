/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:45 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 01:41:03 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	while ((i < size) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	else if (size > 0)
		dst[size - 1] = '\0';
	return (srclen);
}

// #include <stdio.h>

// int main(void)
// {
// 	// char n[] = "Hello, world!";
//     // char o[6];
//     // size_t len = ft_strlcpy(o, n, 6);
//     // printf("After strlcpy: %s, Length of copied string: %ld\n", o, len);

// 	char p[20];
//     char q[] = "Hello, world!";
//     size_t len = ft_strlcpy(p, q, sizeof(p));
//     printf("After strlcpy: %s\n", p);
//     printf("Length returned by strlcpy: %ld\n", len);
//     // Output: After strlcpy: Hello, world!
//     //         Length returned by strlcpy: 13

// 	return (0);
// }
