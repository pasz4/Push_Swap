/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reallocation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:58:39 by prossi            #+#    #+#             */
/*   Updated: 2022/04/19 15:04:24 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/push_swap.h"

void	ft_reallocation(long *pointer, int startsize, int newsize)
{
	int		i;
	long	*temporary;

	i = 0;
	if ((pointer != NULL) && (startsize < newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < startsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
	else if ((pointer != NULL) && (startsize > newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < newsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
}
