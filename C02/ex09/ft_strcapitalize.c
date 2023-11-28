/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:45:31 by tomek             #+#    #+#             */
/*   Updated: 2023/11/28 12:05:45 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}


char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	i = 0;
	capital = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capital == 1)
			{
				str[i] -= 32;
			}
			capital = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capital = 0;
		else
			capital = 1;
		i++;
	}
	return (str);
}
