/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:59:25 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/08 10:16:13 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//strjoin concatenates two strings s1 and s2

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*all;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
//It first allocates memory for a new string all that is large enough to
//hold both s1 and s2, plus an extra character for the null terminator ('\0').
	all = (char *)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
//if the memory allocation fails, the function returns NULL
	if (!all)
		return (NULL);
//It then copies each character from s1 into all.
	while (s1[i])
	{
		all[i] = s1[i];
		i++;
	}
//After that, it appends each character from s2 to all.
	while (s2[j])
	{
		all[i] = s2[j];
		j++;
		i++;
	}
//Finally, it adds a null terminator at the end of all and returns the newly created string.
	all[i] = '\0';
	return (all);
}
