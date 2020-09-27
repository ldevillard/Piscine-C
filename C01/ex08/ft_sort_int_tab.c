/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 11:31:43 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/14 15:08:08 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int save;

	a = 0;
	b = 0;
	save = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				save = tab[a];
				tab[a] = tab[b];
				tab[b] = save;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	int tab[4] = {15, 81, 22, 13};
	int i = 0;
	ft_sort_int_tab(tab, 4);
	while (i < 4)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return 0;
}
