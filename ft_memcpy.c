/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:33 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/25 22:50:58 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (len == 0 || dst == src)
		return (dst);
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	while (len-- > 0)
		*d++ = *s++;
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char dst[] = "abcdefg";
// 	char src[] = "123456789";

// 	printf("-------\n");
// 	ft_memcpy(dst, src, 5);
// 	printf("%s\n", dst);
// 	memcpy(dst, src, 5);
// 	printf("%s\n", dst);
// 	printf("-------\n");

// 	ft_memcpy(dst, src, 7);
// 	printf("%s\n", dst);
// 	memcpy(dst, src, 7);
// 	printf("%s\n", dst);
// 	printf("-------\n");
// }
