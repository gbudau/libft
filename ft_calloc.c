/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 22:31:27 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/20 17:09:09 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;

	if (!(ret = malloc(sizeof(char) * size * count)))
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(ret, (sizeof(char) * size * count));
	return (ret);
}
