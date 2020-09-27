/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_verif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:06:51 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/20 12:37:01 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		pdv_haut(int *digit, int i)
{
	int j;
	int counter;
	int max;

	max = 0;
	counter = 0;
	j = -1;
	while (++j < 4)
		if (max < digit[i % 4 + j * 4])
		{
			counter++;
			max = digit[i % 4 + j * 4];
		}
	return (counter);
}

int		pdv_bas(int *digit, int i)
{
	int j;
	int counter;
	int max;

	max = 0;
	counter = 0;
	j = -1;
	while (++j < 4)
		if (max < digit[15 - (3 - i % 4) - j * 4])
		{
			counter++;
			max = digit[15 - (3 - i % 4) - j * 4];
		}
	return (counter);
}

int		pdv_gauche(int *digit, int i)
{
	int j;
	int counter;
	int max;

	max = 0;
	counter = 0;
	j = -1;
	while (++j < 4)
		if (max < digit[(i % 4) * 4 + j])
		{
			counter++;
			max = digit[(i % 4) * 4 + j];
		}
	return (counter);
}

int		pdv_droit(int *digit, int i)
{
	int j;
	int counter;
	int max;

	max = 0;
	counter = 0;
	j = -1;
	while (++j < 4)
		if (max < digit[(i % 4) * 4 + (3 - j)])
		{
			counter++;
			max = digit[(i % 4) * 4 + (3 - j)];
		}
	return (counter);
}

int		vd_line(int col, int *digit, int start_l)
{
	int i;
	int j;

	i = -1;
	while (++i < (col + 1))
	{
		j = -1;
		while (++j < (col + 1))
			if ((digit[start_l + i] == digit[start_l + j]) && i != j)
				return (0);
	}
	return (1);
}
