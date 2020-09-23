/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:19:47 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/16 19:45:26 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->next = NULL;
	}
	else
	{
		if ((new->content = (void *)malloc(sizeof(content))) == NULL)
			return (NULL);
		ft_memcpy(new->content, content, ft_strlen(content));
		new->next = NULL;
	}
	return (new);
}
