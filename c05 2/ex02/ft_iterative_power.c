/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:24:08 by kdanchal          #+#    #+#             */
/*   Updated: 2023/08/01 18:31:26 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;
	int	result;

	a = 0;
	b = nb;
	result = 1;
	if (power == 0 && nb == 0)
		result = 1;
	else if (power < 0)
		result = 0 ;
	while (a < power)
	{
		result = b * result;
		a++;
	}
	return (result);
}
