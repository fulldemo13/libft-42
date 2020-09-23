/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 08:36:30 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/09 13:12:44 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				r;
	unsigned char	*s1_char;
	unsigned char	*s2_char;

	i = 0;
	r = 0;
	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_char[i] != s2_char[i])
		{
			r = s1_char[i] - s2_char[i];
			return (r);
		}
		else
		{
			i++;
		}
	}
	return (r);
}
