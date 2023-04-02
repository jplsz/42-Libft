/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:18 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 02:40:46 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("------\n");
	printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum('a'));
	printf("------\n");
	printf("%d\n", isalnum('='));
	printf("%d\n", ft_isalnum('='));
	printf("------\n");
	printf("%d\n", isalnum('1'));
	printf("%d\n", ft_isalnum('1'));
	printf("------\n");

	// printf("-----------\n");
	// if(isalnum('A'))
	// 	puts("A is alphabet.");
	// if(isalnum('5'))
	// 	puts("5 is alphabet");
	// if(isalnum('='))
	// 	puts("= is alphabet.");
	// printf("-----------\n");
	// if(ft_isalnum('A'))
	// 	puts("A is alphabet.");
	// if(ft_isalnum('5'))
	// 	puts("5 is alphabet");
	// if(ft_isalnum('='))
	// 	puts("= is alphabet.");
	// printf("-----------\n");
}*/
