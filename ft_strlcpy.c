/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:39:35 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/19 20:54:53 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	if (dst == NULL)
		return (0);
	i = 0;
	j = 0;
	while (src[i])
	{
		if (dstsize && j < dstsize - 1)
		{
			dst[j] = src[j];
			j++;
		}
		i++;
	}
	if (dstsize || j || !i)
		dst[j] = '\0';
	return (i);
}
