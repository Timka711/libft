#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
	char *r;
	r = ft_itoa(n);
	if (fd && r != 0)
		ft_putstr_fd(r, fd);
}
