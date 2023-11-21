/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffidha <ffidha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:54:15 by ffidha            #+#    #+#             */
/*   Updated: 2023/11/18 15:55:22 by ffidha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*insha;

	insha = (t_list *)malloc(sizeof(t_list));
	if (!insha)
		return (NULL);
	insha->content = content;
	insha->next = NULL;
	return (insha);
}
