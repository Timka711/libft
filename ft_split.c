void	**wordf(char const *s, char c)
{
    char	**res;
    int		word;
    int 	i;
    
    word = 0;
    i = 0;
    while (s[i] != 0)
    {
	    if (s[i] == c && i != 0)
		    word++;
	    i++;
    }
    if (s[--i] != c)
	    word++;
    res = (char**)malloc((word + 1) * sizeof(char*));
    if (!res)
	    return (0);
    res[word] = 0;
    return (res);
}

void	letterf(char const *s, char c, char **res)
{
	int word;
	int letter;
	int i;

	letter = 0;
	i = 0;
	word = 0;
	while (s[i] != 0)
	{
		letter++;
		if (s[i] == c)
		{
			res[word] = (char*)malloc((letter + 1) * sizeof(char));
			letter = 0;
			word++;
		}
		i++;
	}
	if (s[--i] != c)
		res[word] = (char*)malloc(letter + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	word;
	int letter;
	int i;
	
	i = 0;
	word = 0;
	res = wordf(s, c);
	letterf(s, c, res);
	while (s[i] != 0)
	{
		letter = 0;
		while (s[i] != c && s[i] != 0)
			res[word][letter++] = s[i++];
		if (letter != 0)
			res[word++][letter] = 0;
		if (s[i] == 0)
			break ;
		i++;
	}
	return (res);
}
