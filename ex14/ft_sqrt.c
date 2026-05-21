/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 23:37:14 by device935         #+#    #+#             */
/*   Updated: 2026/05/21 16:50:35 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
int	ft_is_sqrt(int nb, int i);

int	ft_is_sqrt(int nb, int i)
{
	if (i * i > nb)
		return (0);
	if (i * i == nb)
		return (i);
	return (ft_is_sqrt(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_is_sqrt(nb, 0));
}

#include <stdio.h>

int	main(void)
{
	printf("Raiz de 25: %i\n", ft_sqrt(2147483647));
	printf("Raiz de 100: %i\n", ft_sqrt(100));
	printf("Raiz de 7: %i\n", ft_sqrt(7));
	printf("Raiz de -7: %i\n", ft_sqrt(-7));
}
