/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:55:01 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/04 21:14:58 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int ft_rec_pwr(int nb, int pwr)
{
	return(nb * ft_rec_pwr(nb, pwr-1));
}
int ft_sqrt(int nb)
{
	int	i;
	
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	while (i >= 1)
	{
	//	if (ft_rec_pwr(i, 2) == nb)
		if (i*i == nb)
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	printf("sqrt(%d) = %d (=0)\n", -1, ft_sqrt(-1));
	printf("sqrt(%d) = %d (=1)\n", 0, ft_sqrt(0));
	printf("sqrt(%d) = %d (=1)\n", 1, ft_sqrt(1));
	printf("sqrt(%d) = %d (=2)\n", 4, ft_sqrt(4));
	printf("sqrt(%d) = %d (=3)\n", 9, ft_sqrt(9));
	printf("sqrt(%d) = %d (=0)\n", 6, ft_sqrt(6));
}
