#include "ft_strncmp.c"
#include <stdio.h>

int	main()
{
	printf("ABC - AB: %d\n", ft_strncmp("ABC", "AB", 3));
	printf("ABC - AB: %d\n", ft_strncmp("ABC", "AB", 2));
	printf("ABC - : %d\n", ft_strncmp("ABC", "", 0));
	printf(" - AB: %d\n", ft_strncmp("", "AB", 0));
	printf("ABC - AB: %d\n", ft_strncmp("ABC", "AB", 0));
}
