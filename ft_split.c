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

static int wordcount(char *str , char c)
{
	int	i;
	int	word;
	
	i = 1;
	word = 0;  
	while (str[i])
	{
		if ((str[i - 1] != c && str[i] == c) || (str[i]!= c && str[i + 1] == '\0'))
			word++;
		i++;
	}
	return(word);	
}

char	**ft_split(char const *s, char c)
{
	char 	**mem;
	int		word;
	int		end;
	size_t	len;
    size_t i;
	
	end = 0;
	i = 0;
	word = wordcount((char *)s,c);
	mem = malloc(sizeof(char *) * word + 1);
	if(!mem)
		return (NULL);
	mem[word] = NULL;
  while (s[i])
  {
	len = 0;
	while (s[i + len] != c &&  s[i + len])
	
	{
		len++;
	}
	if (len && end < word)
	{
	mem[end] = ft_substr(s, i, len );
	if (mem[end] == NULL)
		return (NULL);
	end++;
	}
	i += len;
	 i++;
  }
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
