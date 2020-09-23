/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:11:32 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/15 12:04:32 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compare(char s1, char const *set)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*s1_char;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) - 1;
	while (ft_compare(s1[i], set))
		i++;
	while (ft_compare(s1[len], set))
		len--;
	j = len - i + 2;
	if (j < 0)
	{
		s1_char = malloc(1);
		s1_char[0] = '\0';
		return (s1_char);
	}
	s1_char = malloc(j);
	if (s1_char == NULL)
		return (NULL);
	ft_strlcpy(s1_char, s1 + i, j);
	return (s1_char);
}
