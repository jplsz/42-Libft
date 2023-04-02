/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:00 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 13:50:46 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *dst, const char *src, size_t nb)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	copylen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (nb < srclen)
		copylen = nb;
	else
		copylen = srclen;
	ft_memcpy(dst + dstlen, src, copylen);
	dst[dstlen + copylen] = '\0';
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	len;
	size_t	copylen;

	srclen = ft_strlen((char *)src);
	if (dst == NULL && size == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	len = dstlen + srclen;
	if (size < dstlen + 1)
		return (srclen + size);
	copylen = size - dstlen - 1;
	ft_strncat(dst, src, copylen);
	return (len);
}

// #include <stdio.h>

// int main()
// {
//     char dst[20] = "Hello, ";
//     char src[] = "world!";
//     size_t dst_len = ft_strlen(dst);
//     size_t src_len = ft_strlen(src);
//     size_t size = sizeof(dst);

//     printf("Before: %s\n", dst);
//     size_t result = ft_strlcat(dst, src, size);
//     printf("After: %s\n", dst);
//     printf("Returned value: %lu\n", result);
//     printf("Expected length: %lu\n", dst_len + src_len);
//     return 0;
// }
