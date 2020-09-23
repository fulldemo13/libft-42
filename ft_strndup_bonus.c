/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:54:57 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/18 12:22:38 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
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
