/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:53:44 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/06 14:45:00 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dest || (!src && !dstsize))
		return (0);
	else if (dstsize >= ft_strlen(dest))
		return (dstsize + ft_strlen(src));
	while (*dest && i < dstsize - 1)
	{
		dest++;
		i++;
	}
	while (*src && i < dstsize - 1)
	{
		*dest++ = *src++;
		i++;
	}
	if (i < dstsize)
		*dest = '\0';
	return (i + ft_strlen(src));
}

// int main(void)
// {
//     char src[] = "here";
//     char dest[10] = "look";

//     size_t result = ft_strlcat(dest, src, 0);

//     printf("concatenated str = %s\n", dest);
//     printf("length = %zu\n", result);
// }
