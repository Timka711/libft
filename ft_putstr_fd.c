void ft_putstr_fd(char *s, int fd)
{
	if (fd)
		while (*s != 0)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
}
