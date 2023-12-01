/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:25:44 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/30 18:25:51 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] == s2[i]
			&& (s1[i] != '\0' || s2[i] != '\0')
			&& i < (n - 1))
			i++;
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}
