/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 13:37:27 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/25 14:22:22 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		n_words(char *str)
{
	int i;
	int word;
	int nbr;

	i = 0;
	word = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			word = 0;
		}
		if (word == 0 && str[i] != ' ' && str[i] != '\t')
		{
			word = 1;
			nbr++;
		}
		i++;
	}
	return (nbr);
}

void	last_word(char *str)
{
	int i = 0;
	int word = 0;
	int nbr = 0;
	int nbr_words = n_words(str);

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			word = 0;
		if (word == 0 && str[i] != ' ' && str[i] != '\t')
		{
			word = 1;
			nbr++;
		}
		if (nbr == nbr_words && str[i] != ' ' && str[i] != '\t')
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
