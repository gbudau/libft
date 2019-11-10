/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 20:32:32 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/10 00:55:16 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char *str1;
	const char *str2;

	str1 = s1;
	str2 = s2;
	while (*str1 && *str2 && n + 1)
	{
		if (*str1 != *str2)
			return (((unsigned char)*str1) - ((unsigned char)*str2));
		str1++;
		str2++;
		n--;
	}
	return (((unsigned char)*str1) - ((unsigned char)*str2));
}
