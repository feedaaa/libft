/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:19:36 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/07 11:40:44 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	char		*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (!source && !dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char src[] = "hello";
//     char dst[] = "hi";
//     ft_memcpy(dst, src,3);
//     printf("%s", dst);
//     return (0);
// }
