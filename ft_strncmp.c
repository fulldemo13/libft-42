/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:11:11 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/10 11:23:42 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				r;
	unsigned char	*s1_char;
	unsigned char	*s2_char;

	i = 0;
	r = 0;
	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	while ((i < n) && (s1_char[i] != '\0' || s2_char[i] != '\0'))
	{
		if (s1_char[i] != s2_char[i])
		{
			r = s1_char[i] - s2_char[i];
			if (r > 0)
			{
				return (1);
			}
			return (-1);
		}
		i++;
	}
	return (r);
}
