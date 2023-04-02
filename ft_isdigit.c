/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snajwa <snajwa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:37:28 by snajwa            #+#    #+#             */
/*   Updated: 2023/03/27 00:43:00 by snajwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("------\n");
// 	printf("%d\n", isdigit('a'));
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("------\n");
// 	printf("%d\n", isdigit('A'));
// 	printf("%d\n", ft_isdigit('A'));
// 	printf("------\n");
// 	printf("%d\n", isdigit('1'));
// 	printf("%d\n", ft_isdigit('1'));
// 	printf("------\n");

// 	// printf("-----------\n");
// 	// if(isdigit('A'))
// 	// 	puts("A is alphabet.");
// 	// if(isdigit('['))
// 	// 	puts("a is alphabet.");
// 	// if(isdigit('5'))
// 	// 	puts("5 is alphabet.");
// 	// printf("-----------\n");
// 	// if(ft_isdigit('A'))
// 	// 	puts("A is alphabet.");
// 	// if(ft_isdigit('['))
// 	// 	puts("a is alphabet.");
// 	// if(ft_isdigit('5'))
// 	// 	puts("5 is alphabet.");
// 	// printf("-----------\n");
// }
