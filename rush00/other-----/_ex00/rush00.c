/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:06:59 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/15 18:55:34 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main() 
{
	int	max_x;
	int	max_y;
	int	x;
	int	y;

	max_x = 6;
	max_y = 3;
	x = 1;
	y = 1;
	while ( x <= max_x)
	{
		if ( x == 1 || x ==max_x)
		{
			write(1, "0", 1);
		}
		else
		{
			write(1, "-", 1);
		}
		x++;
	}
	write(1, "\n", 1);
	x= 1;
	while ( y+1 < max_y)
	{
		while ( x <= max_x)
		{
			if ( x ==1||x ==max_x)
			{
				write(1, "|", 1);
			}
                	else
			{
				write(1, " ", 1);
			}
			x++;
		}
		y++;
		write(1, "\n", 1);
		x= 1;
	}
	while (y+1 == max_y)
	{
		while (x <= max_x)
		{
			if (x == 1 ||x == max_x )
			{
				write(1, "0", 1);
			}
			else
			{
				write(1, "-", 1);
			}
			x++;
		}
	}
}
