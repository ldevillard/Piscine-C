/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:01:35 by ldevilla          #+#    #+#             */
/*   Updated: 2020/09/22 18:10:53 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int result;

	result = 0;
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	result = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (result);
}
