/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:42:11 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/27 14:31:41 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_delimiter(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	dig[3];

	dig[0] = '0';
	while (dig[0] <= '9')
	{
		dig[1] = '0';
		while (dig[1] <= '9')
		{
			dig[2] = '0';
			while (dig[2] <= '9')
			{
				if (dig[0] < dig[1] && dig[1] < dig[2])
				{
					ft_putchar(dig[0]);
					ft_putchar(dig[1]);
					ft_putchar(dig[2]);
					if (!(dig[0] == '7' && dig[1] == '8' && dig[2] == '9'))
						ft_delimiter();
				}
				dig[2]++;
			}
			dig[1]++;
		}
		dig[0]++;
	}
}
