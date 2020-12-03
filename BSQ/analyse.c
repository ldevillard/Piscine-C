/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:11:03 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/30 17:19:01 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_analyse(char *map)
{
	char	*newmap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	newmap = (char *)malloc(sizeof(char) * (ft_strlen(map) + 1));
	newmap = map;
	if (!newmap)
		return (NULL);
	newmap[i] = '\0';
	return (newmap);
}
