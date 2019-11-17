/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpycat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 17:43:25 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/17 19:00:21 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Concatenate string s1 with string s2 and add a terminating '\0',
** the space for the terminating NUL should be included in len.
*/

void	ft_strlcpycat(char *dst, char const *s1, char const *s2, size_t len)
{
	char		*aux;
	char const	*str1;
	char const	*str2;

	aux = dst;
	str1 = s1;
	str2 = s2;
	*(aux + len) = '\0';
	while (*str1)
		*aux++ = *str1++;
	while (*str2)
		*aux++ = *str2++;
}
