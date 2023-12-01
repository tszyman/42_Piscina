/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:26:10 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/30 18:26:16 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

int	len_dest(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dst;

	i = 0;
	len_dst = len_dest(dest);
	while (src[i] != '\0')
	{
		dest[i + len_dst] = src[i];
		i++;
	}
	dest[i + len_dst] = '\0';
	return (dest);
}
