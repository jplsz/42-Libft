/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:48 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 00:44:49 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[] = "42tokyo";

// 	int count1 = strlen(str);
// 	int count2 = ft_strlen(str);

// 	printf("-------\n");
// 	printf("%d\n", count1);
// 	printf("%d\n", count2);
// 	printf("-------\n");

// 	// char str[] = "42tokyo";

// 	// printf("-------\n");
// 	// printf("%zd\n", strlen(str));
// 	// printf("%zd\n", ft_strlen(str));
// 	// printf("-------\n");
// }
