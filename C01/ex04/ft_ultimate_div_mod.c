/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:02:58 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/27 18:36:23 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//
void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	helper;
	int	helper2;

	if (*b != 0)
	{
		helper = *a / *b;
		helper2 = *a % *b;
		*a = helper;
		*b = helper2;
	}
}
//int	main()
//{
//	int	a;
//	int	b;
//	
//	a=6;
//	b=3;
//	printf("Before: \n");
//	printf("a = %d\n",a);
//	printf("b = %d\n",b);
//	ft_ultimate_div_mod(&a, &b);
//	printf("After: \n");
//	printf("a = %d\n",a);
//	printf("b = %d\n",b);
//}
