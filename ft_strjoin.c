/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:55:16 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/12 15:37:38 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = malloc(sizeof(dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == NULL)
		return (NULL);
	while (*s1)
	{
		dst[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		dst[i] = *s2;
		i++;
		s2++;
	}
	dst[i] = '\0';
	return (dst);
}
