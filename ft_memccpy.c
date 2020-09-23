/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:43:41 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/11 17:57:50 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_char;
	unsigned char	*dst_char;
	void			*ptr;

	i = 0;
	src_char = (unsigned char *)src;
	dst_char = (unsigned char *)dst;
	ptr = NULL;
	while (i < n)
	{
		dst_char[i] = src_char[i];
		if (src_char[i] == (unsigned char)c)
		{
			ptr = dst_char + i + 1;
			return (ptr);
		}
		i++;
	}
	return (ptr);
}
