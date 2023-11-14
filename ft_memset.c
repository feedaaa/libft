/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:07:01 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/06 12:58:40 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*rep;
	size_t	i;

	i = 0;
	rep = (char *)b;
	while (i < len)
	{
		rep[i] = c;
		i++;
	}
	return (rep);
}
