/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:39:35 by gbudau            #+#    #+#             */
/*   Updated: 2019/12/02 14:36:06 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (src[i])
	{
		if (dstsize && j + 1 < dstsize)
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
