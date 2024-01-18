#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[i] / 16]);
            ft_putchar("0123456789abcdef"[str[i] % 16]);
        }
        else
            ft_putchar(str[i]);
        i++;
	}
}
/*
#include <stdio.h>
int main(void)
{   
    ft_putstr_non_printable("Ola\nesta bem?");
    write(1, "\n", 1);
}*/

