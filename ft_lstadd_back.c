/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbudau <gbudau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:10:20 by gbudau            #+#    #+#             */
/*   Updated: 2019/11/26 21:04:16 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (*alst != NULL)
	{
		if (new != NULL)
		{
			temp = ft_lstlast(*alst);
			temp->next = new;
			new->next = NULL;
		}
	}
	else if (new != NULL)
		*alst = new;
}
