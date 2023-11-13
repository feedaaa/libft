#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
  	size_t  i;
  	size_t  j;
	char *all;

	all = 0;
	if(s1 != 0 && set != 0)
	{
		i  = 0;
		j = 0;
		while(s1[i] && ft_strchr(set, s1[i]))
			i++;
		while(j > i && s1[j - i] && ft_strchr(set, s1[j - i]))
			j--;
		all = (char *)malloc(sizeof(char) * (j - i + 1));
		if(!all)
			return(NULL);
		ft_strlcpy(all, &s1[i], j - i + 1);
	}
	return (all);
}
	
