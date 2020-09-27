/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 11:05:29 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/10 11:27:17 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;
	int save;

	a = 0;
	b = size - 1;
	save = 0;
	while (a < b)
	{
		save = tab[a];
		tab[a] = tab[b];
		tab[b] = save;
		a++;
		b--;
	}
}
