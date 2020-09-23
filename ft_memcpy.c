/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:48:34 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/11 18:44:07 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_char;
	const char	*src_char;

	dst_char = (char *)dst;
	src_char = (const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*(dst_char++) = *(src_char++);
		n--;
	}
	return (dst);
}
