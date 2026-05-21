/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:42:10 by device935         #+#    #+#             */
/*   Updated: 2026/05/21 16:34:22 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;

	number = '1';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}
