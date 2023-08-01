/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:36:21 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/27 14:22:49 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	res;

	if (nb < 0)
	{
		ft_putchar('-');
		res = nb * (-1);
	}
	else
		res = nb;
	if (res > 9)
	{
		ft_putnbr(res / 10);
		res = res % 10;
	}
	ft_putchar(res + '0');
}
