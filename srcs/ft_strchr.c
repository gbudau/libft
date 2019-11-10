/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:53:48 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/10 22:19:18 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			j;
	unsigned int	i;

	j = c;
	i = 0;
	while (s[i] != j && s[i] != '\0')
		i++;
	if (s[i] == j)
		return ((char *)(s + i));
	else
		return (NULL);
}
