/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_void.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:32:59 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/17 17:19:27 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Copy the at most len characters from src into dst and NUL terminate the dst,
** there should be enough room in dst for the '\0'.
*/

void	ft_strncpy_void(char *dst, const char *src, size_t len)
{
	*(dst + len) = '\0';
	while (len--)
		*(dst + len) = *(src + len);
}
