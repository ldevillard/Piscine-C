/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 10:53:56 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/17 17:04:11 by ldevilla         ###   ########lyon.fr   */
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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup_str;

	i = 0;
	dup_str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dup_str != NULL)
	{
		while (src[i])
		{
			dup_str[i] = src[i];
			i++;
		}
		dup_str[i] = '\0';
		return (dup_str);
	}
	else
		return (NULL);
}
