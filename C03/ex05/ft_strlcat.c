/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:27:37 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/01 10:40:03 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	These functions copy and catenate the input string into a desti‐
              nation  string.  If the destination buffer, limited by its size,
              isn’t large enough to hold the copy,  the  resulting  string  is
              truncated  (but  it  is guaranteed to be null‐terminated).  They
              return the length of the total  string  they  tried  to  create.
The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.
The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.  For strlcpy() that means the length of src.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.
Note, however, that if strlcat() traverses size characters without find‐
     ing a NUL, the length of the string is considered to be size and the des‐
     tination string will not be NUL-terminated (since there was no space for
     the NUL).  This keeps strlcat() from running off the end of a string.  In
     practice this should not happen (as it means that either size is incor‐
     rect or that dst is not a proper “C” string).  The check exists to pre‐
     vent potential security problems in incorrect code.

*/

//#include <stdio.h>

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
		return (len_dst + ft_strlen(src));
	while (src[i] != '\0' && i < size - len_dst - 1)
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
//    printf("%i \n", ft_strlcat(dest, src, 19));
//    printf("%s \n", dest);
//}
