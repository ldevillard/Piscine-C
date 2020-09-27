/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 10:15:59 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/13 10:42:45 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int nbr_dest;
	int i;

	nbr_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[nbr_dest + i] = src[i];
		i++;
	}
	dest[nbr_dest + i] = '\0';
	return (dest);
}
