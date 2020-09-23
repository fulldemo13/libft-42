/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:01:10 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/16 09:21:58 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_size(unsigned int nb)
{
	unsigned int	size;

	size = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		++size;
	}
	return (size + 1);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	i;
	unsigned int	size;

	if (n < 0)
		nb = (unsigned int)(n * -1);
	else
		nb = (unsigned int)n;
	size = (unsigned int)ft_n_size(nb);
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (0);
	if (n < 0 && (str[i] = '-'))
		size++;
	i = size - 1;
	while (nb >= 10)
	{
		str[i--] = (char)(nb % 10 + 48);
		nb = nb / 10;
	}
	str[i] = (char)(nb % 10 + 48);
	str[size] = '\0';
	return (str);
}
