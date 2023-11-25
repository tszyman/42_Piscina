#include <unistd.h>
#include <stdbool.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
	{
		write(1,&c,1);
	}

void	ft_pairs(int a, int b, bool finish)
	{
		ft_putchar(48 + a / 10);
		ft_putchar(48 + a % 10);
		write(1," ",1);
		ft_putchar(48 + b / 10);
		ft_putchar(48 + b % 10);
		if (finish)
			write(1, ", ",2);
	}

void	ft_print_comb2(void)
	{
	int	a;
	int b;
	bool finish;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			finish = !(a == 98 && b == 99);
			ft_pairs(a, b, finish);	
			b++;
		}
	a++;
	}
	}

//int main(void)
//	{
//		ft_print_comb2();
//	}
