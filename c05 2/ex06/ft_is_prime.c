/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:10:28 by kdanchal          #+#    #+#             */
/*   Updated: 2023/08/01 18:27:49 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	ans;
	int	check;

	check = 2;
	if (nb <= 1)
		return (0);
	while (check < nb)
	{
		ans = nb % check;
		if (ans == 0)
			return (0);
		check++;
	}
	return (1);
}
