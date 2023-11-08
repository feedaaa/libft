/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:18:04 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/08 11:27:32 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[a] && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && needle[b] && (a + b) < len)
		{
			b++;
		}
		if (needle[b] == '\0')
			return ((char *)haystack + a);
		a++;
	}
	return (NULL);
}

// int main(void)
// {
//     printf("%s", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
// }
