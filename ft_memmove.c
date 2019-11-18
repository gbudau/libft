/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:32:43 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/12 20:51:35 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char const	*s;

	d = dst;
	s = src;
	if (d == s)
		return (dst);
	else if (s < d)
	{
		while (len)
		{
			len--;
			*(d + len) = *(s + len);
		}
		return (dst);
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
