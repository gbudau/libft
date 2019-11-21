/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:19:21 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/21 23:52:27 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wn(char const *s, char c)
{
	size_t i;
	size_t state;

	i = 0;
	state = OUT;
	while (*s != '\0')
	{
		if (*s == c)
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			i++;
		}
		s++;
	}
	return (i);
}

static char		**ft_strtomatr(char **split, char const *s, char c)
{
	char const	*ws;
	char const	*we;
	size_t		j;
	size_t		fw;

	j = 0;
	fw = 1;
	while (*s != '\0')
	{
		if (((j == 0 && *s != c && *(s + 1) && fw == 1)
					|| (*s != c && *(s - 1) == c)))
		{
			ws = s;
			fw = 0;
		}
		if ((*s != c && *(s + 1) == c) || (*s != c && *(s + 1) == '\0'))
		{
			we = s;
			split[j] = ft_strndup(ws, we - ws + 1);
			j++;
		}
		s++;
	}
	return (split);
}

char			**ft_split(char const *s, char c)
{
	size_t		i;
	char		**split;

	if (s == NULL)
		return (NULL);
	i = ft_wn(s, c);
	if (!(split = ft_calloc(i + 1, sizeof(char *))))
		return (NULL);
	return (ft_strtomatr(split, s, c));
}
