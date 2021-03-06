/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrypto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:14:49 by jkrypto           #+#    #+#             */
/*   Updated: 2019/10/14 23:49:43 by jkrypto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	while (*s)
	{
		if (*s == c)
		{
			temp = (char*)s;
			return (temp);
		}
		s++;
	}
	if (!c)
	{
		temp = (char*)s;
		return (temp);
	}
	return (0);
}
