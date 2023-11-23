/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:07:10 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/21 19:46:44 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	int	countnb;

	countnb = 1;
	if (n < 0)
	{
		n = -n;
		countnb++;
	}
	while (n >= 10)
	{
		n /= 10;
		countnb++;
	}
	return (countnb);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		count;
	int		og_n;
	int		lastdigi;

	count = counter(n);
	og_n = n;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		n = -n;
	res = (char *)malloc(count + 1);
	if (!res)
		return (NULL);
	res[count] = '\0';
	while (count > 0)
	{
		lastdigi = n % 10;
		res[--count] = '0' + lastdigi;
		n = n / 10;
	}
	if (og_n < 0)
		res[0] = '-';
	return (res);
}
