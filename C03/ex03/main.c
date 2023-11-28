#include "ft_strncat.c"
#include <stdio.h>

int	main()
{
	char src[] = "eczek";
	char dest[] = "Tom";
	printf("%s", ft_strncat(dest, src, 5));
}
