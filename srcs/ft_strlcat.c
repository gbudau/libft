/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:51:00 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/11 00:07:09 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_strlentmp(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;
	size_t l;

	i = ft_strlentmp(dst) + ft_strlentmp(src);
	j = 0;
	k = ft_strlentmp(dst);
	l = ft_strlentmp(dst);
	if (!(dstsize))
		return (i);
	while (src[j] != '\0' && j + l < dstsize - 1)
	{
		dst[k] = src[j];
		k++;
		j++;
	}
	dst[k] = '\0';
	return (i);
}
