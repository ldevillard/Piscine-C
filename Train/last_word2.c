/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:35:52 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/28 19:57:38 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_last_word(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;
	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		i--;
	if (i < 0)
		i++;
	if ((str[i] == ' ' || str[i] == '\t') && str[i])
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	last_word(char *str)
{
	int		i;
	int		end;

	i = ft_strlen(str) - 1;
	while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;
	end = i;
	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		i--;
	write(1, &str[i + 1], end - i);
}

int 	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
