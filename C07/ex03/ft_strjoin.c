/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 09:58:17 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/23 10:11:48 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strslen(char **strs, int size)
{
	int i;
	int storage;

	i = 0;
	storage = 0;
	while (i < size)
	{
		storage += ft_strlen(&strs[i][0]);
		i++;
	}
	return (storage);
}

char	*ft_memory_allocation(char *tab, int size, char **strs, char *sep)
{
	if (size == 0)
		tab = malloc(sizeof(char));
	else
		tab = malloc(sizeof(char) * (ft_strslen(strs, size) +
					(ft_strlen(sep) * (size - 1)) + 1));
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	tab = NULL;
	k = 0;
	i = 0;
	tab = ft_memory_allocation(tab, size, strs, sep);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		while (i != (size - 1) && sep[j])
			tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
