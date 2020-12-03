/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:35:41 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/30 17:42:30 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_man(char *man, char c)
{
	int i;

	i = 0;
	while (man[i])
	{
		if (man[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char man[256] = {0};

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
	{
		if ((check_man(man, s1[i])) == 1)
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					ft_putchar(s1[i]);
					man[k++] = s1[i];
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
