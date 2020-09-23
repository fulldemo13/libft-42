/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 18:40:30 by fulldemo          #+#    #+#             */
/*   Updated: 2020/02/13 18:41:01 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t a;

	a = 0;
	if (!dst || !src)
		return (0);
	while (src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (ft_strlen(src));
}
