void ft_putendl_fd(char *s, int fd)
{
	if (fd)
	{
		ft_putstr_fd(s,fd);
		write(fd, "\n", 1);
	}
}
