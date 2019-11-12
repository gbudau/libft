/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 00:02:58 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/11 23:57:34 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			ch;
	unsigned const char		*ptr;

	ch = c;
	ptr = s;
	while (n)
	{
		if (*ptr == ch)
			return ((void *)ptr);
		n--;
		ptr++;
	}
	return (NULL);
}
