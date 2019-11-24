/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 18:08:47 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/24 17:54:41 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *subs, size_t len)
{
	const char *retptr;
	const char *reset;

	if (!(*subs))
		return ((char *)s);
	while (len + 1 && *s)
	{
		if (*s == *subs && len)
		{
			reset = subs;
			retptr = s;
			while (*s == *subs && *subs && len)
			{
				s++;
				subs++;
				len--;
			}
			if (!(*subs))
				return ((char *)retptr);
			subs = reset;
		}
		s++;
		len--;
	}
	return (NULL);
}
