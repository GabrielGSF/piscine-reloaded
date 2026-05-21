/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:57:07 by device935         #+#    #+#             */
/*   Updated: 2026/05/20 23:03:44 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	n1;
// 	int	n2;
// 	int	div;
// 	int	mod;

// 	n1 = 7;
// 	n2 = 2;
// 	ft_div_mod(n1, n2, &div, &mod);
// 	printf("Div: %i\nMod: %i", div, mod);
// }