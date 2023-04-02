/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:31 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 02:41:29 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("------\n");
// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", ft_isprint('a'));
// 	printf("------\n");
// 	printf("%d\n", isprint('\n'));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("------\n");
// 	printf("%d\n", isprint('1'));
// 	printf("%d\n", ft_isprint('1'));
// 	printf("------\n");

// // 	printf("-----------\n");
// // 	if(isprint('A'))
// // 		puts("A is alphabet.");
// // 	if(isprint('5'))
// // 		puts("5 is alphabet");
// // 	if(isprint('\n'))
// // 		puts("\n is alphabet.");
// // 	printf("-----------\n");
// // 	if(ft_isprint('A'))
// // 		puts("A is alphabet.");
// // 	if(ft_isprint('5'))
// // 		puts("5 is alphabet");
// // 	if(ft_isprint('\n'))
// // 		puts("\n is alphabet.");
// // 	printf("-----------\n");
// }
