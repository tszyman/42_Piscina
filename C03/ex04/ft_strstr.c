/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:08:59 by tszymans          #+#    #+#             */
/*   Updated: 2023/11/29 21:19:21 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
//int	main()
//{
//	char str[] = "I'm a bit tired.";
//	char find[] = "tired";
//	printf("%s", ft_strstr(str, find));
//}
