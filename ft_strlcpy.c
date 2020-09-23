/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:58:12 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/12 12:27:55 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*n;
	const char	*l;

	n = dst + dstsize;
	l = src;
	if (src == NULL)
		return (0);
	while (*l != '\0' && dst < n)
		*dst++ = *l++;
	if (dst < n)
		*dst = 0;
	else if (dstsize > 0)
		dst[-1] = 0;
	while (*l != '\0')
		l++;
	return (l - src);
}
