/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:35:33 by tomek             #+#    #+#             */
/*   Updated: 2023/11/30 00:11:10 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	These functions copy and catenate the input string into a desti‐
              nation  string.  If the destination buffer, limited by its size,
              isn’t large enough to hold the copy,  the  resulting  string  is
              truncated  (but  it  is guaranteed to be null‐terminated).  They
              return the length of the total  string  they  tried  to  create.
*/

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	len_dst;

	i = 0;
	x = 0;
	len_dst = ft_strlen(dest);
	if (size == 0 || size <= len_dst)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i + len_dst] = src [i];
		i++;
	}
	dest[i + len_dst] = '\0';
	x = ft_strlen(dest);
	return (x);
}

//int main (void)
//{
//	char src[] = "BornToCode";  //10 chars
//    	char dest [] = "42Warsaw"; //8 chars
//    printf("%i \n", ft_strlcat(dest, src, 9));
//    printf("%s \n", dest);
//}
