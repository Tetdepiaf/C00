/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:30:56 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/09 14:31:04 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int *tab)
{
	write(1, &tab[0], 1);
	write(1, &tab[1], 1);
	write(1, &tab[2], 1);
}

void	ft_print_comb(void)
{
	int	tab[3];

	tab[0] = 48;
	tab[1] = 49;
	tab[2] = 50;
	while (tab[0] < 56)
	{
		while (tab[1] < 57)
		{
			while (tab[2] < 58)
			{
				ft_putchar(tab);
				if (tab[0] == 55)
					break ;
				write(1, ", ", 2);
				tab[2]++;
			}
			tab[1]++;
			tab[2] = tab[1] + 1;
		}
		tab[0]++;
		tab[1] = tab[0] + 1;
		tab[2] = tab[1] + 1;
	}
}
