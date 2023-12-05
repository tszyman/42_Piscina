/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:01:33 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/04 18:29:28 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d to power of %d is %d(=0)\n", 0, 0, ft_iterative_power(0,0));
	printf("%d to power of %d is %d(=1)\n", 1, 5, ft_iterative_power(1,5));
	printf("%d to power of %d is %d(=8)\n", 2, 3, ft_iterative_power(2,3));
	printf("%d to power of %d is %d(=9)\n", 3, 2, ft_iterative_power(3,2));
	printf("%d to power of %d is %d(=25)\n", 5, 2, ft_iterative_power(5,2));
	printf("%d to power of %d is %d(=10)\n", 10, 1, ft_iterative_power(10,1));
}*/
