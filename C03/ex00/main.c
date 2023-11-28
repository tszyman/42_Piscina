#include "ft_strcmp.c"
#include <stdio.h>

int	main()
{
	printf("ABC - ABC: %d\n", ft_strcmp("ABC", "ABC"));
	printf("ABC - AB: %d\n", ft_strcmp("ABC", "AB"));
	printf("ABA - ABZ: %d\n", ft_strcmp("ABA", "ABZ"));
	printf("ABJ - ABC: %d\n", ft_strcmp("ABJ", "ABC"));
}
