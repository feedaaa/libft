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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*all;
	size_t	i;
	size_t	j;

	all = (char *)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!all)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		all[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		all[i] = s2[j];
		j++;
		i++;
	}
	all[i] = '\0';
	return (all);
}

/* int main(void)
{
    char    *strs[5];

    strs[0] = "it";
    strs[1] = "is";
    strs[2] = "what";
	strs[3] = "it";
	strs[4] = "is";
	char sep[] = " ";
    printf("%s", ft_strjoin(5, strs, sep));
} */
