/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:38:52 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/16 17:15:31 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (del == 0 || *lst == 0)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		free(*lst);
		(*lst) = (*lst)->next;
	}
	*lst = NULL;
}
