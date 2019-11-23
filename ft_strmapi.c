/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <gbudau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:04:18 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/23 22:35:14 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	if (!s || !(ret = ft_calloc(sizeof(char), ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		ret[i] = (*f)(i, *s);
		s++;
		i++;
	}
	return (ret);
}
