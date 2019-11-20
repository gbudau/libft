/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 19:04:07 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/20 20:47:53 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;

	if (s1 == NULL || set == NULL || (*s1 == '\0' && *set == '\0'))
		return (NULL);
	start = s1;
	while (ft_strchr(set, *start) && *start)
		start++;
	end = s1;
	while (*(end + 1))
		end++;
	while (ft_strchr(set, *end) && end > s1)
		end--;
	if (end < start)
		return (ft_strdup(""));
	return (ft_strndup(start, (end - start) + 1));
}
