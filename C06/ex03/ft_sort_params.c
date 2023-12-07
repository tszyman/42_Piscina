/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:10:06 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/07 13:31:26 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str);
int		ft_strcmp(char *str1, char *str2);
void	ft_swap(char **s1, char **s2);

void	ft_printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	i;

	i = 0;
	while (str1[i] == str2[i] && (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*helper;

	helper = *s2;
	*s2 = *s1;
	*s1 = helper;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int k;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
		j++;
		}
	i++;
	}
	k = 1;
	while (k < argc)
	{
		ft_printstr(argv[k]);
		ft_printstr("\n");
		k++;
	}
	return (0);
}
