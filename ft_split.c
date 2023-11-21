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

static int	wordcount(char *str, char c)
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

static void	freemem(char **str, int i)
{
	if (!str)
		return ;
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free (str);
}

static char	**allocation(const char *s, char c)
{
	char	**all;
	int		word;

	if (s == NULL || *s == '\0')
	{
		all = malloc(sizeof(char *));
		if (!all)
			return (NULL);
		all[0] = NULL;
		return (all);
	}
	word = wordcount((char *)s, c);
	all = malloc(sizeof(char **) * (word + 1));
	if (!all)
		return (NULL);
	all[word] = 0;
	return (all);
}

static void	substring(char **all, const char *s, char c, int word)
{
	int		j;
	size_t	len;
	size_t	i;

	j = 0;
	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i + len] != c && s[i + len])
			len++;
		if (len && j < word)
		{
			all[j] = ft_substr(s, i, len);
			if (!all[j])
			{
				freemem(all, j);
				return ;
			}
			j++;
		}
		i += len;
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**all;
	int		word;

	if (!s)
		return (NULL);
	all = allocation(s, c);
	if (!all)
		return (NULL);
	if (*s == '\0' && c != '\0')
	{
		all[0] = NULL;
		return (all);
	}
	word = wordcount((char *)s, c);
	substring(all, s, c, word);
	return (all);
}static int	wordcount(char *str, char c)
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

static void	freemem(char **str, int i)
{
	if (!str)
		return ;
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free (str);
}

static char	**allocation(const char *s, char c)
{
	char	**all;
	int		word;

	if (s == NULL || *s == '\0')
	{
		all = malloc(sizeof(char *));
		if (!all)
			return (NULL);
		all[0] = NULL;
		return (all);
	}
	word = wordcount((char *)s, c);
	all = malloc(sizeof(char **) * (word + 1));
	if (!all)
		return (NULL);
	all[word] = 0;
	return (all);
}

static void	substring(char **all, const char *s, char c, int word)
{
	int		j;
	size_t	len;
	size_t	i;

	j = 0;
	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i + len] != c && s[i + len])
			len++;
		if (len && j < word)
		{
			all[j] = ft_substr(s, i, len);
			if (!all[j])
			{
				freemem(all, j);
				return ;
			}
			j++;
		}
		i += len;
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**all;
	int		word;

	if (!s)
		return (NULL);
	all = allocation(s, c);
	if (!all)
		return (NULL);
	if (*s == '\0' && c != '\0')
	{
		all[0] = NULL;
		return (all);
	}
	word = wordcount((char *)s, c);
	substring(all, s, c, word);
	return (all);
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
