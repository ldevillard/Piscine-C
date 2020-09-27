/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 11:02:37 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/20 12:41:44 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		pdv_haut(int *digit, int i);
int		pdv_bas(int *digit, int i);
int		pdv_gauche(int *digit, int i);
int		pdv_droit(int *digit, int i);
int		vd_line(int col, int *digit, int start_l);

int		verif_pdv(int *digit, int *p_vue)
{
	int	i;
	int counter;

	i = 0;
	while (i < 16)
	{
		if (i <= 3)
			counter = pdv_haut(digit, i);
		else if (i <= 7)
			counter = pdv_bas(digit, i);
		else if (i <= 11)
			counter = pdv_gauche(digit, i);
		else
			counter = pdv_droit(digit, i);
		if (p_vue[i] != counter)
			return (0);
		i++;
	}
	return (1);
}

int		verif_digit(int *digit, int nm_c)
{
	int	i;
	int	start_l;
	int	col;
	int	j;
	int	nbrcol;

	col = nm_c % 4;
	start_l = nm_c - col;
	if (!vd_line(col, digit, start_l))
		return (0);
	col = nm_c % 4;
	i = -1;
	nbrcol = (nm_c) / 4;
	while (++i < (nbrcol + 1))
	{
		j = -1;
		while (++j < (nbrcol + 1))
			if ((digit[col + i * 4] == digit[col + j * 4]) && i != j)
				return (0);
	}
	return (1);
}
