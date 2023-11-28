/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:57:41 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/27 17:59:43 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
//int	main()
//{
//	int	a;
//	int	b;
//	int	div;
//	int	mod;
//	
//	a=6;
//	b=3;
//	div=0;
//	mod=0;
//	printf("Before: \n");
//	printf("a = %d\n",a);
//	printf("b = %d\n",b);
//	printf("div = %d\n",div);
//	printf("mod = %d\n",mod);
//	ft_div_mod(a, b, &div, &mod);
//	printf("After: \n");
//	printf("a = %d\n",a);
//	printf("b = %d\n",b);
//	printf("div = %d\n",div);
//	printf("mod = %d\n",mod);
//}
