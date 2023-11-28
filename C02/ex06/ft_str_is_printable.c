/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:38:43 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/27 23:42:20 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	is_printable(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	printable;

	i = 0;
	printable = 1;
	while (str[i] != '\0')
	{
		printable = printable * is_printable(str[i]);
		i++;
	}
	if (printable == 0)
		return (0);
	else
		return (1);
}
