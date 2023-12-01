/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:26:37 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/30 18:26:42 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	len_dest(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len_dst;

	i = 0;
	len_dst = len_dest(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[i + len_dst] = src[i];
		i++;
	}
	dest[i + len_dst] = '\0';
	return (dest);
}
