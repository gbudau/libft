/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:35:40 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/11 21:39:42 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		ch;
	unsigned const char *s;

	ch = c;
	d = dst;
	s = src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
		if (*(s - 1) == ch)
		{
			return ((void *)d);
		}
	}
	return (NULL);
}
