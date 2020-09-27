/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 10:16:09 by grosendo          #+#    #+#             */
/*   Updated: 2020/09/20 12:38:56 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		verif_pdv(int *digit, int *p_vue);
int		verif_digit(int *digit, int nm_c);
void	print(int *digit);

void	trouv_comb(int *digit, int nbr_c, int *p_vue, int *t)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		digit[15 - nbr_c] = i;
		if (nbr_c > 0 && verif_digit(digit, (15 - nbr_c)))
			trouv_comb(digit, (nbr_c - 1), p_vue, t);
		if (nbr_c == 0 && verif_digit(digit, (15 - nbr_c)))
		{
			if (verif_pdv(digit, p_vue) && *t == 0)
			{
				print(digit);
				*t = 1;
				return ;
			}
		}
		i++;
	}
}

void	print(int *digit)
{
	int		i;
	char	car;

	i = 0;
	while (i < 16)
	{
		car = digit[i] + '0';
		write(1, &car, 1);
		if (((i + 1) % 4 == 0) && i != 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
}

int		*convert(char *str)
{
	int		*tablo;
	int		i;
	int		j;

	tablo = malloc(sizeof(*tablo) * 16);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0 && j < 16)
			if (str[i] >= '1' && str[i] <= '4')
				tablo[j++] = str[i] - '0';
			else
				tablo[0] = 0;
		else if (str[i] != ' ')
			tablo[0] = 0;
		i++;
	}
	if (i != 31)
		tablo[0] = 0;
	return (tablo);
}

int		main(int argc, char **argv)
{
	int	*p_vue;
	int	*tab;
	int	trouve;

	trouve = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	p_vue = convert(argv[1]);
	if (p_vue[0] == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab = malloc(sizeof(*tab) * 16);
	trouv_comb(tab, 15, p_vue, &trouve);
	if (!trouve)
		write(1, "Error\n", 6);
	return (0);
}
