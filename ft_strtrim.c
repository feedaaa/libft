/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:19:27 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/13 16:50:21 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  	size_t  i;
  	size_t  j;
	char *all;

	all = 0;
	if(s1 != 0 && set != 0)
	{
		i  = 0;
		j = ft_strlen(s1);
		while(s1[i] && ft_strchr(set, s1[i]))
			i++;
		while(j > 1 && s1[j - i] && ft_strchr(set, s1[j - 1]))
			j--;
		all = (char *)malloc(sizeof(char) * (j - i + 1));
		if(!all)
			return(NULL);
		ft_strlcpy(all, &s1[i], j - i + 1);
	}
	return (all);
}
	
