/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:52:48 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/12 11:50:04 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The memcmp() function compares byte string s1 against byte string s2.
//Both strings are assumed to be n bytes long.

// The memcmp() function returns zero if the two strings are identical, oth-
//  erwise returns the difference between the first two differing bytes
//  (treated as unsigned char values, so that `\200' is greater than `\0',
//  for example).  Zero-length strings are always identical.  This behavior
//  is not required by C and portable code should only depend on the sign of
//  the returned value.

// int ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*str1;
// 	unsigned char	*str2;

// 	while (*str1 && *str2 && i < n - 1)
// 	{
// 		if (str1 != str2)
// 		{
// 		}
// 	}
// }
