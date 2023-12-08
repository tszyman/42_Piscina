/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:04:40 by tomek             #+#    #+#             */
/*   Updated: 2023/12/08 22:40:51 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*cpy;

	len = ft_strlen(src);
	cpy = malloc(len * sizeof(*src));
	i = 0;
	while (i < len)
	{
		cpy[i] = src[i];
		i++;
	}

	return (cpy);
}
#include <stdio.h>
int	main()
{
	char *str;

	str = "tomek";
	printf("Original str: %s\n", str);
	printf("Copy str: %s\n", ft_strdup(str));
}
