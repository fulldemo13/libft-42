/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:29:52 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/10 13:54:59 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	const char	*r;

	i = 0;
	r = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			r = &s[i];
			return ((char *)r);
		}
		i++;
	}
	if (c == '\0')
	{
		r = &s[i];
		return ((char *)r);
	}
	return ((char *)r);
}
