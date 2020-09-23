/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 08:49:07 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/18 11:56:15 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup_static(const char *s1, size_t len)
{
	size_t	i;
	char	*r;

	i = 0;
	while (s1[i] != '\0' && i < len)
		i++;
	r = malloc(i + 1);
	if (r == NULL)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0' && i < len)
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	const char	*s_char;
	const char	*r;

	i = 0;
	s_char = (const char *)s;
	r = &s_char[start];
	if (r == NULL)
		return (NULL);
	r = ft_strndup_static(r, len);
	return ((char *)r);
}
