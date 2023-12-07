/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:03:23 by tomek             #+#    #+#             */
/*   Updated: 2023/12/07 11:50:15 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buf;

	i = 0;
	while (i <= size/2)
	{
		buf = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = buf;
		i++;
	}
}
/*
#include <stdio.h>
int	main()
{
	int	tab[] = {8, 4, 3, 7, 5, 2};
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
