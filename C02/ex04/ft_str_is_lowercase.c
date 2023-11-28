/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:22:25 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/27 23:23:19 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	is_lowercase(int a)
{
	if (a >= 97 && a <= 122)
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lowercase;

	i = 0;
	lowercase = 1;
	while (str[i] != '\0')
	{
		lowercase = lowercase * is_lowercase(str[i]);
		i++;
	}
	if (lowercase == 0)
		return (0);
	else
		return (1);
}
