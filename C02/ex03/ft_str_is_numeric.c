/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:08:39 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/27 23:08:47 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	is_numeric(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	numeric;

	i = 0;
	numeric = 1;
	while (str[i] != '\0')
	{
		numeric = numeric * is_numeric(str[i]);
		i++;
	}
	if (numeric == 0)
		return (0);
	else
		return (1);
}
