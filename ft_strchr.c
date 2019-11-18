/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:53:48 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/12 01:25:05 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			ch;
	const char		*p;

	ch = c;
	p = s;
	while (*p)
	{
		if (*p == ch)
			return ((char *)p);
		p++;
	}
	if (*p == ch)
		return ((char *)p);
	return (NULL);
}
