/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 23:04:43 by device935         #+#    #+#             */
/*   Updated: 2026/05/21 16:36:54 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
