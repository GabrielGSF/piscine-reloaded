/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 09:39:21 by device935         #+#    #+#             */
/*   Updated: 2026/05/21 16:25:45 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (**argv)
			ft_putchar(**argv++);
		ft_putchar('\n');
		i++;
	}
}
