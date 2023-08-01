/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:53:08 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/16 16:08:01 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writ(char *num)
{
	if (num[0] == num[3] && num[1] < num[4] || num[0] < num[3])
	{
		write(1, num, 5);
		if (!(num[0] == '9' && num[1] == '8'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	char	num[5];

	num[2] = ' ';
	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[3] = '0';
			while (num[3] <= '9') 
			{
				num[4] = '0';
				while (num[4] <= '9')
				{
					ft_writ(num);
					num[4]++;
				}
				num[3]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
