/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:25 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 00:43:20 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	// printf("------\n");
// 	// printf("%d\n", isascii('a'));
// 	// printf("%d\n", ft_isascii('a'));
// 	// // printf("------\n");
// 	// // printf("%d\n", isascii('®'));
// 	// // printf("%d\n", ft_isascii('®'));
// 	// // printf("------\n");
// 	// printf("%d\n", isascii('1'));
// 	// printf("%d\n", ft_isascii('1'));
// 	// printf("------\n");

// 	printf("-----------\n");
// 	if(isascii('A'))
// 		puts("A is alphabet.");
// 	if(isascii('5'))
// 		puts("5 is alphabet");
// 	// if(isascii('ｱ'))
// 	// 	puts("ｱ is alphabet");
// 	printf("-----------\n");
// 	if(ft_isascii('A'))
// 		puts("A is alphabet.");
// 	if(ft_isascii('5'))
// 		puts("5 is alphabet");
// 	// if(ft_isascii('ｱ'))
// 	// 	puts("ｱ is alphabet");
// 	printf("-----------\n");
// }
