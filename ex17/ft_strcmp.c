/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 09:10:54 by device935         #+#    #+#             */
/*   Updated: 2026/05/21 09:37:58 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Strcmp 'ABC' - 'ABC': %i\n", ft_strcmp("ABC", "ABC"));
// 	printf("Strcmp 'ABZ - 'ABA': %i\n", ft_strcmp("ABZ", "ABA"));
// 	printf("Strcmp 'ABA' - 'ABZ': %i\n", ft_strcmp("ABA", "ABZ"));
// 	printf("Strcmp 'AB' - 'ABZ': %i\n", ft_strcmp("AB", "ABZ"));
// 	printf("Strcmp 'ABZ' - 'AB': %i\n", ft_strcmp("ABZ", "AB"));
// }