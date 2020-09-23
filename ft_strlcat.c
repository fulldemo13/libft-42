/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:00:32 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/08 16:09:15 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (*dst && dstsize > 0)
	{
		dst++;
		i++;
		dstsize--;
	}
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		i++;
		dstsize--;
	}
	while (dstsize > 0)
	{
		*dst++ = '\0';
		dstsize--;
	}
	while (*src++)
	{
		i++;
	}
	return (i);
}
