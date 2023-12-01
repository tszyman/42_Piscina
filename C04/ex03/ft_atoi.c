/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:43:51 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/01 00:04:41 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int				out;
	unsigned int	minus;
	unsigned int	i;

	out = 0;
	minus = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (*str && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (out * 10) + (str[i] - 48);
		i++;
	}
	return (minus * out);
}

//int	main(void)
//{
//	char	str[] = "---+--+1234ab567";
//	
//	printf("%d", ft_atoi(str));
//}
