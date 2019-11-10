/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:42:30 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/10 22:19:15 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	k;
	char			j;

	i = 0;
	k = 0;
	j = c;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			k = i;
		i++;
	}
	if (!j)
		return ((char *)(s + i));
	else if (k)
		return ((char *)(s + k));
	else
		return (NULL);
}
