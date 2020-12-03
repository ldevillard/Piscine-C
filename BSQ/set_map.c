/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:31:37 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/30 14:13:21 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*set_map(void)
{
	int		fd;
	int		count;
	int		i;
	char	*map;
	char	buf[2];

	i = 0;
	count = 1;
	fd = open("map", O_RDONLY);
	while (count > 0)
	{
		count = read(fd, buf, 1);
		i += count;
	}
	close(fd);
	map = (char *)malloc(sizeof(char) * (i + 1));
	if (!map)
		return (NULL);
	count = 1;
	fd = open("map", O_RDONLY);
	count = read(fd, map, i);
	map[i] = '\0';
	close(fd);
	return (map);
}
