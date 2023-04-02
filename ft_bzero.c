/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:12 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 00:52:28 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, 0, len);
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
// 	ft_bzero(str+5, 2);
// 	printf("%s\n", str);
// 	bzero(str+5, 2);
// 	printf("%s\n", str);
// 	printf("---------\n");
// }
