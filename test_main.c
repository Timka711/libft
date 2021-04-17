#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlcat(char *buf, const char *a, int n)
{
	int i;
	int j;
	j = 0;
	i = 0;
	while (buf[i] != '\0')
		i++;
	while (i < n - 1)
	{
		buf[i] = a[j];
		i++;
		j++;
	}
	buf[i] = '\0';
	while (a[j] != '\0')
		j++;
	return ((i+j) - 1);
}

int main()
{
	int p;
	char j[8];
	char *k = "number";
	p = ft_strlcat(j,k, sizeof(j));
	printf("%d",p);
	return (0);
}

