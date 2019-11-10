/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 00:02:58 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/10 22:14:50 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	const char		*ptr;

	ch = c;
	ptr = s;
	while (*ptr != ch && n + 1)
	{
		n--;
		ptr++;
	}
	if (!(n + 1))
		return (NULL);
	return ((void *)ptr);
}
