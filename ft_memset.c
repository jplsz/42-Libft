/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:39 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 02:51:50 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;

	uc = (unsigned char *)b;
	while (len > 0)
	{
		*uc = (unsigned char) c;
		uc++;
		len--;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// char str[] = "ABCDEFGHIJK";

// 	// printf("---------\n");
// 	// memset(str+2, '1', 3);
// 	// printf("buf文字列→%s\n", str);
// 	// printf("---------\n");
// 	// ft_memset(str+2, '1', 3);
// 	// printf("buf文字列→%s\n", str);
// 	// printf("---------\n");

// 	char str[] = "42tokyo";

// 	printf("---------\n");
// 	ft_memset(str+5, '2', 2);
// 	printf("%s\n", str);
// 	printf("---------\n");
// 	memset(str+5, '2', 2);
// 	printf("%s\n", str);
// 	printf("---------\n");
// }
