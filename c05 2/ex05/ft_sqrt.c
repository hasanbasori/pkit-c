/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:49:16 by kdanchal          #+#    #+#             */
/*   Updated: 2023/08/01 18:32:28 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	b;
	int	i;
	int	ans;
	int	c;

	b = 0;
	b = nb / 2;
	i = 2;
	if (nb == 1)
	{
		return (1);
	}
	while (i < b)
	{
		ans = nb % i;
		if (ans == 0)
		{
			c = i * i;
			if (c == nb)
				return (i);
		}
		i++;
	}
	return (0);
}
