/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:08:59 by tszymans          #+#    #+#             */
/*   Updated: 2023/12/01 10:38:57 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

/*	The  strstr() function finds the first occurrence of the substring nee‐
       dle in the string haystack.  The terminating null bytes ('\0') are  not
       compared.
	These functions return a pointer to the beginning of the  located  sub‐
       string, or NULL if the substring is not found
*/

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	i = 0;
	if (to_find[i] == '\0')
		return(str);
	while (*str)
	{
		while (str[i] == to_find[i])
			if (to_find[++i] == '\0')
				return(str);
		str++;
	}
	return (0);
}
//int	main()
//{
//	char str[] = "I'm a bit tired.";
//	char find[] = "tir";
//	printf("%s", ft_strstr(str, find));
//}
