/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:02:14 by fulldemo          #+#    #+#             */
/*   Updated: 2019/11/15 12:01:15 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calc_atoi(const char *str, int sign)
{
	long long int		r;
	size_t				i;

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (r);
		r = r * 10 + (long long int)(str[i] - '0');
		i++;
		if (r > 2147483648 && sign == 1)
			return (-1);
		else if (r > 2147483648 && sign == -1)
			return (0);
	}
	return (r);
}

int			ft_atoi(const char *str)
{
	long long int		r;
	int					sign;

	r = 0;
	sign = 1;
	while ((*str == '\t' || *str == ' ' || *str == '\n' || *str == '\v' ||
		*str == '\f' || *str == '\r' || *str == '-' || *str == '+') && r == 0)
	{
		(*str == '-') && ((sign = sign * -1) && (r++));
		(*str == '+') && r++;
		str++;
	}
	r = ft_calc_atoi(str, sign);
	return (sign * r);
}
