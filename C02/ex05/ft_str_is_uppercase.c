/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:32:06 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/27 23:32:45 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	is_uppercase(int a)
{
	if (a >= 65 && a <= 90)
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	uppercase;

	i = 0;
	uppercase = 1;
	while (str[i] != '\0')
	{
		uppercase = uppercase * is_uppercase(str[i]);
		i++;
	}
	if (uppercase == 0)
		return (0);
	else
		return (1);
}
