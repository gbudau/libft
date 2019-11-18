/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 19:04:07 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/18 21:04:12 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_searchchr(char c, char const *set)
{
	char const *p;

	p = set;
	while ((*p != c) && *p)
		p++;
	if (*p == '\0')
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0' && *set == '\0')
		return (NULL);
	start = s1;
	while (ft_searchchr(*start, set) && *start)
		start++;
	end = s1;
	while (*(end + 1))
		end++;
	while (ft_searchchr(*end, set) && end > s1)
		end--;
	if (end < start)
		return (ft_strdup(""));
	return (ft_strndup(start, (end - start) + 1));
}
