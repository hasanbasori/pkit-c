/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:27:27 by kdanchal          #+#    #+#             */
/*   Updated: 2023/08/01 16:14:10 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	a;
	int	result;

	a = 1;
	result = nb;
	if (nb == 0)
		result = 0;
	if (power == 0)
		result = 1;
	else if (power < 0)
		result = 0;
	while (a < power)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		a++;
	}
	return (result);
}
