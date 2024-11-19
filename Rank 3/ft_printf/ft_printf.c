#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

static void	ft_printstr(const char *s, int *count)
{
	if (!s)
	{
		s = "(null)";
	}
	while (*s)
	{
		write (1, s++, 1);
		(*count)++;
	}
}

static void	ft_printnbr(int n, int *count)
{
	char	c;

	if (n == -2147483648)
	{
		ft_printstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		(*count++);
		n = -n;
	}
	if (n > 9)
	{
		ft_printnbr(n / 10, count);
	}
	c = (n % 10) + '0';
	write (1, &c, 1);
	(*count)++;
}

static void	ft_printhex(unsigned int n, int *count)
{
	char	*hex[] = "0123456789abcdef";

	if (n >= 16)
	{
		ft_printhex(n / 16, count);
	}
	write (1, &hex[n % 16], 1);
	(*count)++;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 's')
			{
				ft_printstr(va_arg(args, char *), count);
			}
			else if (*format == 'd')
			{
				ft_printnbr(va_arg(args, int), count);
			}
			else if (*format == 'hex')
			{
				ft_printhex(va_arg(args, unsigned int), count);
			}
			else
			{
				write (1, format, 1);
				count++;
			}
		}
		else
		{
			write (1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
