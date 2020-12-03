/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:48:00 by ldevilla          #+#    #+#             */
/*   Updated: 2020/10/01 09:51:05 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		is_match(char *s1, char *s2)
{
	int i;
	int j;
	int found;

	i = 0;
	j = 0;
	while (s1[i])
	{
		found = 0;	
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				found = 1;	
				break;
			}		
			j++;
		}
		if (found == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if ((is_match(argv[1], argv[2])) == 1)
			ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
