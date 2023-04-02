/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:36 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 08:20:44 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	dst += len -1;
	src += len -1;
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	while (len-- > 0)
		*d-- = *s--;
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0 || dst == src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (src < dst)
		ft_reverse_memcpy(dst, src, len);
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "abcdefg";

// 	// printf("-------\n");
// 	// ft_memmove(str+3, str, 3);
// 	// printf("%s\n", str);
// 	// memmove(str+3, str, 3);
// 	// printf("%s\n", str);
// 	// printf("-------\n");

// 	printf("-------\n");
// 	ft_memmove(str+5, str, 3);
// 	printf("%s\n", str);
// 	memmove(str+5, str, 3);
// 	printf("%s\n", str);
// 	printf("-------\n");

// 	// char dst[] = "cde";
// 	// char src[] = "abcde";

// 	// printf("-------\n");
// 	// memmove(dst, src, 3);
// 	// printf("%s\n", dst);
// 	// printf("-------\n");
// 	// ft_memmove(dst, src, 3);
// 	// printf("%s\n", dst);
// 	// printf("-------\n");
// }
