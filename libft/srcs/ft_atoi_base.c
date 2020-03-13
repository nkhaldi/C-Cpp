/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrypto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:20:09 by jkrypto           #+#    #+#             */
/*   Updated: 2019/09/18 22:02:31 by jkrypto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_valid(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= ('A' + base - 10)) ||
			(c >= 'a' && c <= ('a' + base - 10)));
}

int			ft_atoi_base(const char *str, int base)
{
	int		res;
	int		sgn;

	res = 0;
	sgn = 1;
	if (!str || !*str || base < 2 || base > 16)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sgn = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && is_valid(*str, base))
	{
		if (*str >= 'A' && *str <= 'F')
			res = (res * base) + (*str - 'A' + 10);
		else if (*str >= 'a' && *str <= 'f')
			res = (res * base) + (*str - 'a' + 10);
		else
			res = (res * base) + (*str - '0');
		str++;
	}
	return (res * sgn);
}
