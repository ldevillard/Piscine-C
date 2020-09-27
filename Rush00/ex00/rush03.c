/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 05:59:25 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/12 14:21:17 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_extrem_line(int nbr)
{
	int i;

	i = 0;
	while (i <= nbr)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == nbr)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
}

void	ft_interm_line(int nbr)
{
	int i;

	i = 0;
	while (i <= nbr)
	{
		if (i == 0 || i == nbr)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (!(x < 1 || y < 1))
	{
		while (i < y)
		{
			if (i == 0 || i == y - 1)
			{
				ft_extrem_line(x - 1);
				ft_putchar('\n');
			}
			else
			{
				ft_interm_line(x - 1);
				ft_putchar('\n');
			}
			i++;
		}
	}
}
