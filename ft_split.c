/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:19:21 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/20 01:55:03 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t	i;
	char	*s_end;
	char	*w_end;
	char	*w_start;
	char 	**split;

	s_end = s;
	i = 0;
	while (*s_end)
	{
		if ((*s_end != c && *(s_end + 1) == c) || 
			(*s_end != c && *(s_end + 1) == '\0'))
			i++;
		s_end++;
	}
	if (!(split = ft_calloc(i + 1, sizeof(char *))))
		return (NULL);
	while (s <= s_end--)
	{
		if ((*s_end != c && *(s_end + 1) == c) ||
			(*s_end != c && *(s_end + 1) == '\0'))
			w_end = s_end;
		if (condition to get word start pointer, assign pointer to w_start then ft_strndup to i - 1)


		s_end--;
	}

}
