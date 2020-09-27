/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 10:41:56 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/26 12:21:55 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//delete stdio

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_error(void)
{
	write(1, "error\n", 6);
}

int		*analyse_first_arg(char *str)
{
	int i;
	int *tab;
	int error;

	error = 0;	
	i = 0;
	tab = malloc(sizeof(int) * ft_strlen(str));
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			error = 1;
			break ;
		}
		else
		{
			tab[i] = str[i] - 48;
		}
		
		i++;
	}
	if (error == 1)
		tab[0] = -1;
	return (tab);
}

void	print_test(int *tab, char *str)
{
	int i;

	i = 0;
	while (i < ft_strlen(str))
	{
		printf("%d", tab[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int *tab;

	if (argc == 2)
	{
		tab = analyse_first_arg(argv[1]);
		if (tab[0] == -1)
			ft_error();
		else
			print_test(tab, argv[1]);

	}
	return (0);
}

