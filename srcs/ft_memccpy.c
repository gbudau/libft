/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:35:40 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/06 23:49:11 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	ch;
	size_t			i;

	ch = c;
	i = 0;
	while (n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
		n--;
		if (*((char *)src + (i - 1)) == ch)
			return ((void *)((char *)dst + i));
	}
	return (NULL);
}
