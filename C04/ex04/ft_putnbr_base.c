/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:33:15 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/16 18:56:44 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int			ft_check_base(char *base)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

long int	ft_is_negative(long int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	return (nb);
}

void		ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			size_base;
	int			rest;

	rest = 0;
	size_base = ft_strlen(base);
	nb = nbr;
	if (ft_check_base(base) == 0)
		return ;
	nb = ft_is_negative(nb);
	rest = nb % size_base;
	if (nb >= size_base)
	{
		ft_putnbr_base(nb / size_base, base);
		ft_putchar(base[rest]);
	}
	else
	{
		ft_putchar(base[nb]);
	}
}
