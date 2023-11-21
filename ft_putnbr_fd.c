/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:46:46 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/11 16:35:33 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		a;
	char	b;
	int		c;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == -2147483648)
		ft_putstr_fd("2147483648", fd);
	else if (n >= 10)
	{
		c = n;
		a = c % 10;
		ft_putnbr_fd(c / 10, fd);
		b = a + '0';
		ft_putchar_fd(b, fd);
	}
	if (n < 10 && n >= 0)
	{
		b = n + '0';
		ft_putchar_fd(b, fd);
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(-122, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(122, 1);
// }
