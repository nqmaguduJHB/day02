#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char alphabet = 'z';
	while (alphabet >= 'a')
	{
		ft_putchar(alphabet);
		alphabet--;
	}
	return;
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
