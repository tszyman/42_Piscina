/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:52:42 by tomek             #+#    #+#             */
/*   Updated: 2023/12/08 11:22:50 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
	double approx;
	double next_approx;
	int result;

	if (nb > 3)
	{
		approx = nb/2;
		next_approx = 0;
		while (approx != next_approx)
		{
			next_approx = approx;
			approx = (nb/next_approx + next_approx)/2;
		}
		result = approx;
	}
	if (nb == 1)
		return (nb);
	else if (result * result == nb)
		return (result);
	else 
		return (0);
}

#include <stdio.h>
int	main()
{
	printf("sqrt(%ld)(min int) = %d\n (=0)", -2147483648, ft_sqrt(-2147483648));
	printf("sqrt(%d)(min int - 1) = %d (=0)\n", -2147483647, ft_sqrt(-2147483647));
	printf("sqrt(%d)(negative number) = %d (=0)\n (", -1, ft_sqrt(-1));
	printf("sqrt(%d)(zero case) = %d (=0)\n", 0, ft_sqrt(0));
	printf("sqrt(%d)(positive number) = %d (=1)\n", 1, ft_sqrt(1));
	printf("sqrt(%d) = %d (=0)\n", 2, ft_sqrt(2));
	printf("sqrt(%d) = %d (=0)\n", 3, ft_sqrt(3));
	printf("sqrt(%d) = %d (=2)\n", 4, ft_sqrt(4));
	printf("sqrt(%d) = %d (=0)\n", 6, ft_sqrt(6));
	printf("sqrt(%d) = %d (=3)\n", 9, ft_sqrt(9));
	printf("sqrt(%d) = %d (=5)\n", 25, ft_sqrt(25));
	printf("sqrt(%d) = %d (=11)\n", 121, ft_sqrt(121));
	printf("sqrt(%d) = %d (=0)\n", 1257, ft_sqrt(1257));
	printf("sqrt(%d)(max int - 1) = %d (=0)\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt(%d)(max int) = %d (=0)\n", 2147483647, ft_sqrt(2147483647));
}
