/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:56:28 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/16 17:06:41 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*r;
	size_t		i;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack != '\0' && i < len)
	{
		if (*needle == *haystack)
		{
			r = haystack;
			if ((ft_strncmp(haystack, needle, ft_strlen((char *)needle)) == 0)
			&& (i + ft_strlen((char *)needle) <= len))
			{
				return ((char *)r);
			}
		}
		haystack++;
		i++;
	}
	r = NULL;
	return ((char *)r);
}
