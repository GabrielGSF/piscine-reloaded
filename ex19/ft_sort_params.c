/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:37:43 by gdos-san          #+#    #+#             */
/*   Updated: 2026/05/22 17:15:10 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char 	*small_str;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while(j)
		small_str = *argv[i];
		
		while (*argv[i])
			ft_putchar(*argv[i]++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
