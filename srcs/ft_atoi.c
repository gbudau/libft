/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 02:04:46 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/15 17:53:05 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int				r;
	const char	*s;

	s = str;
	while (*s)
		while (ft_isspace(*s)
				s++;
		if (*s == "+" || *s == "-")
		s++;
		while (ft_isdigit(*s))
		s++;
}
