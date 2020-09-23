/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:18:34 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/10 13:55:42 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_char;
	char	*r;

	i = 0;
	s_char = (char *)s;
	r = NULL;
	while (i < n)
	{
		if (s_char[i] == c)
		{
			r = s_char + i;
			return (r);
		}
		i++;
	}
	return (r);
}
