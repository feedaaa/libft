/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:35:33 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/13 17:24:05 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(char *str, char c)
{
	int	i;
	int	word;

	i = 1;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static void	freeall(char **s, int j)
{
	if (!s)
		return ;
	while (s[j] != NULL)
	{
		free(s[j]);
		j++;
	}
	free(s);
}

static char	allocation(const char *s, char c)
{
	char	**all;
	int		word;

	if (s == NULL || *s == '\0')
	{
		all = malloc(sizeof(char *));
		if (!all)
			return ;
		all[0] = NULL;
		return ((char *)all);
	}
	word = wordcounter((char *)s, c);
	all = malloc(sizeof(char **) * (word + 1));
	if (!all)
		return (NULL);
	all[word] = 0;
	return (all);
}

static void	substring(char **all, const char *s, char c, int word)
{
	size_t	i;
	int		end;
	size_t	len;

	i = 0;
	end = 0;
	while (s[i])
	{
		len = 0;
		while (s[i + len] != c && s[i])
			len++;
		if (len && end < word)
		{
			all[end] = ft_substr(s, i, len);
			if (!all[end])
			{
				freeall(all, end);
				return ;
			}
			end++;
		}
		i += len;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	int		word;

	if (!s)
		return (NULL);
	mem = allocation(s, c);
	if (!mem)
		return ;
	if (*s == '\0' && c != '\0')
	{
		mem[0] = NULL;
		return (mem);
	}
	word = wordcounter((char *)s, c);
	substring(mem, s, c, word);
	return (mem);
}

// int main() 
// {
//     char  input_string[] = "";
//     char delimiter = '\0';
//     char **result = ft_split(input_string, delimiter);

//     if (result == NULL) {
//         printf("Splitting failed\n");
//         return 1;
//     }

//     for (int i = 0; result[i] != NULL; ++i) {
//         printf("%s\n", result[i]);
//     }

//     for (int i = 0; result[i] != NULL; ++i) {
//         free(result[i]);
//     }
//     free(result);

//     return 0; 
// }
