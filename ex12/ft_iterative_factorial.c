/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 23:04:43 by device935         #+#    #+#             */
/*   Updated: 2026/05/20 23:15:41 by device935        ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void)
// {
// 	printf("5 Factorial: %i\n", ft_iterative_factorial(5));
// }
