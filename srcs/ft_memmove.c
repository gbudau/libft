/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:32:43 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/10 01:30:26 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((char *)dst == (char *)src)
		return (dst);
	else if ((char *)src < (char *)dst)
	{
		while (len + 1)
		{
			*((char *)dst + (len - 1)) = *((char *)src + (len - 1));
			len--;
		}
		return (dst);
	}
	else
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	return (dst);
}
