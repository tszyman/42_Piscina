/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:57:12 by tomek             #+#    #+#             */
/*   Updated: 2023/12/05 11:14:53 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i =	2;
	
	if (nb < 2)
		return (0);
	while (i < nb && nb >= 2)
	{
		if (nb % i == 0)
		return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main()
{
	printf("is %d prime? %d (0 = not)\n", 0, ft_is_prime(0));
	printf("is %d prime? %d (0 = not)\n", 1, ft_is_prime(1));
	printf("is %d prime? %d (1 = yes)\n", 2, ft_is_prime(2));
	printf("is %d prime? %d (1 = yes)\n", 3, ft_is_prime(3));
	printf("is %d prime? %d (0 = not)\n", 4, ft_is_prime(4));
	printf("is %d prime? %d (1 = yes)\n", 5, ft_is_prime(5));
	printf("is %d prime? %d (0 = not)\n", 6, ft_is_prime(6));
	printf("is %d prime? %d (1 = yes)\n", 7, ft_is_prime(7));
	printf("is %d prime? %d (0 = not)\n", -1, ft_is_prime(-1));
}*/
