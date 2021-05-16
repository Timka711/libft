#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	t;

	if (n % 10 < 0)
		t = -1;
	else
		t = 1;
	if (fd == -1)
		return ;
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	ft_putchar_fd((n % 10) * t + '0', fd);
}
