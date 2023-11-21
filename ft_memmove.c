/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:14:18 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/13 17:01:33 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest > source && len > 0)
	{
		i = len - 1;
		while (i >= 0)
		{
			dest[i] = source[i];
			if (i == 0)
			{
				break ;
			}
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, source, len);
	}
	return (dest);
}
