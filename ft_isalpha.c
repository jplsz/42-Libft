/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:22 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 00:42:18 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("------\n");
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("------\n");
// 	printf("%d\n", isalpha('B'));
// 	printf("%d\n", ft_isalpha('B'));
// 	printf("------\n");
// 	printf("%d\n", isalpha('1'));
// 	printf("%d\n", ft_isalpha('1'));
// 	printf("------\n");

// 	// printf("-----------\n");
// 	// if(isalpha('A'))
// 	// 	puts("A is alphabet.");
// 	// if(isalpha('a'))
// 	// 	puts("a is alphabet.");
// 	// if(isalpha('5'))
// 	// 	puts("5 is alphabet");
// 	// printf("-----------\n");
// 	// if(ft_isalpha('A'))
// 	// 	puts("A is alphabet.");
// 	// if(ft_isalpha('a'))
// 	// 	puts("a is alphabet.");
// 	// if(ft_isalpha('5'))
// 	// 	puts("5 is alphabet");
// 	// printf("-----------\n");
// }
