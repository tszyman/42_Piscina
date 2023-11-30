/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:16:33 by tomek             #+#    #+#             */
/*   Updated: 2023/11/30 16:15:19 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int				out;
	unsigned int	minus;

	out = 0;
	minus = 1;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\f' || *str == '\n'
			|| *str == '\r' || *str == '\t' || *str == '\v')
			str++;
		while (*str && (*str == '+' || *str == '-'))
		{
			if (*str == '-')
				minus *= -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			out = (out * 10) + (*str - 48);
			str++;
		}
	}
return (minus * out);
}

int	main(void)
{
	char	str[] = "---+--+1234ab567";
	
	printf("%d", ft_atoi(str));
}
