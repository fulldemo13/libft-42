/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:38:16 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/12 09:30:03 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*r;

	i = 0;
	r = malloc(ft_strlen(s1) + 1);
	if (r == NULL)
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
