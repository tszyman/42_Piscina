/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:55:01 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/05 09:58:45 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int ft_sqrt(int nb)
{
	int	i;
	
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb > 0)
	while (i >= 1)
	{
		if (i*i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("sqrt(%d) = %d (=0)\n", -1, ft_sqrt(-1));
	printf("sqrt(%d) = %d (=1)\n", 0, ft_sqrt(0));
	printf("sqrt(%d) = %d (=1)\n", 1, ft_sqrt(1));
	printf("sqrt(%d) = %d (=2)\n", 4, ft_sqrt(4));
	printf("sqrt(%d) = %d (=3)\n", 9, ft_sqrt(9));
	printf("sqrt(%d) = %d (=0)\n", 6, ft_sqrt(6));
}*/
