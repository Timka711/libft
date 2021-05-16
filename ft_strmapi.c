#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			l;
	char			*res;
	unsigned int	i;

	if (!s)
		return (0);
	i = -1;
	l = ft_strlen(s);
	res = (char *)malloc((l + 1) * sizeof(char));
	if (!res)
		return (0);
	res[l] = 0;
	while (++i < l)
		res[i] = (*f)(i, s[i]);
	return (res);
}
