/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:40:24 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/22 19:58:52 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int nbr;
	int i;

	i = 0;
	nbr = min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab)
	{
		while (nbr < max)
		{
			tab[i] = nbr;
			nbr++;
			i++;
		}
		return (tab);
	}
	else
	{
		return (NULL);
	}
}
