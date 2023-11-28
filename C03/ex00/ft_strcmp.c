/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:08:20 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/28 18:36:58 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	calculate(char *str)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	while (str[i] != '\0')
	{
		val += str[i];
		i++;
	}
	return (val);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	v1;
	int	v2;

	v1 = 0;
	v2 = 0;
	v1 = calculate(s1);
	v2 = calculate(s2);
	return (v1 - v2);
}
