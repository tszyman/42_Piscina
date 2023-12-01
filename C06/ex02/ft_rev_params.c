/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:29:44 by tomek             #+#    #+#             */
/*   Updated: 2023/12/01 11:31:34 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	char	*name;
	int		i;

	i = argc - 1;
	while (i >= 1)
	{
		name = argv[i];
		ft_printstr(name);
		ft_printstr("\n");
		i--;
	}
}
