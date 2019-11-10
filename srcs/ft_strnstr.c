/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 18:08:47 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/10 22:18:41 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *retptr;
	const char *reset;

	if (!(*needle))
		return ((char *)haystack);
	while (len + 1 && *haystack)
	{
		if (*haystack == *needle && len)
		{
			reset = needle;
			retptr = haystack;
			while (*haystack == *needle && *needle && len)
			{
				haystack++;
				needle++;
				len--;
			}
			if (!(*needle))
				return ((char *)retptr);
			needle = reset;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
