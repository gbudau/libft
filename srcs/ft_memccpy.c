/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:35:40 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/10 22:14:42 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	ch;
	size_t			i;

	ch = c;
	i = 0;
	while (n + 1)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
		n--;
		if (*((char *)src + (i - 1)) == ch)
			return ((void *)((char *)dst + i));
	}
	return (NULL);
}
