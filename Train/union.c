/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:29:45 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/24 19:04:04 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check(char *man, char c)
{
	int i;

	i = 0;
	while (man[i])
	{
		if (man[i] == c )
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	char man[256] = {0};
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check(man, s1[i]) == 1)
		{
			ft_putchar(s1[i]);
			man[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
    {
        if (check(man, s2[i]) == 1)
        {
            ft_putchar(s2[i]);
            man[j] = s2[i];
            j++;
        }
        i++;
    }

}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
