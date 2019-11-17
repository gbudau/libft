/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:38:26 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/17 16:02:11 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <errno.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	if (!(ret = malloc(sizeof(char) * len + 1)))
	{
		errno = ENOMEM;
		return (NULL);
	}
	*(ret + len) = *(s1 + len);
	while (len--)
		*(ret + len) = *(s1 + len);
	return (ret);
}
