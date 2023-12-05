/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:53 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/04 17:25:11 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		result *= (i - 1);
		i--;
	}
	return (result);
}
/*#include <stdio.h>
int main()
{
	printf("%d! = %d (=1)\n", 0, ft_iterative_factorial(0));
	printf("%d! = %d (=1)\n", 1, ft_iterative_factorial(1));
	printf("%d! = %d (=2)\n", 2, ft_iterative_factorial(2));
	printf("%d! = %d (=6)\n", 3, ft_iterative_factorial(3));
	printf("%d! = %d (=120)\n", 5, ft_iterative_factorial(5));
}*/
