/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 08:58:15 by device935         #+#    #+#             */
/*   Updated: 2026/05/21 09:10:01 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Strlen 'Geeko': %i\n", ft_strlen("Geeko"));
// 	return (0);
// }