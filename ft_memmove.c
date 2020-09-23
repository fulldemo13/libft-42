/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:16:42 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/11 18:53:18 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst_char;
	const char	*src_char;

	dst_char = (char *)dst;
	src_char = (const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst_char > src_char)
	{
		dst_char = dst_char + n;
		src_char = src_char + n;
		while (n--)
		{
			*--dst_char = *--src_char;
		}
	}
	else
	{
		while (n > 0)
		{
			*dst_char++ = *src_char++;
			n--;
		}
	}
	return (dst);
}
