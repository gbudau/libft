/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:19:21 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/20 18:48:51 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char const	*s_e;
	char const	*w_e;
	char		**split;

	if (s == NULL)
		return (NULL);
	s_e = s;
	i = 0;
	while (*s_e)
	{
		if ((*s_e != c && *(s_e + 1) == c) || (*s_e != c && !(*(s_e + 1))))
			i++;
		s_e++;
	}
	if (!(split = ft_calloc(i + 1, sizeof(char *))))
		return (NULL);
	s_e--;
	while (i && (s <= s_e))
	{
		if ((*s_e != c && *(s_e + 1) == c) || (*s_e != c && !(*(s_e + 1))))
			w_e = s_e;
		if (*s_e != c && (s_e == s || *(s_e - 1) == c))
			split[i-- - 1] = ft_strndup(s_e, (w_e - s_e) + 1);
		s_e--;
	}
	return (split);
}
