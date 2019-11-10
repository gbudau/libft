/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:39:35 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/11 00:06:17 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_strlentmp(const char *str)
{
	size_t i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;

	len = ft_strlentmp(src);
	if (!(dstsize))
		return (len);
	i = 0;
	while (*(src + i) && i < dstsize - 1)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (len);
}
