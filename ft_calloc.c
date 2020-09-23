/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 09:06:49 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/08 16:06:36 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	t;
	void	*r;
	char	*r_int;

	i = 0;
	t = count * size;
	r = malloc(t);
	if (r == NULL)
	{
		return (0);
	}
	r_int = (char *)r;
	while (i < (t))
	{
		r_int[i] = '\0';
		i++;
	}
	return (r);
}
