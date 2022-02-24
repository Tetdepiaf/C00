/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:31:39 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/09 14:31:50 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int i)
{
	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		ft_putchar(i / 10 + '0');
		ft_putchar(i % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		while (j < 100)
		{
			print(i);
			write(1, " ", 1);
			print(j);
			if (i == 98 && j == 99)
				break ;
			write(1, ", ", 2);
			j++;
		}
		i++;
		j = i + 1;
	}
}
