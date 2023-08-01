/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:34:46 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/15 18:26:21 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_x(int arr[3])
{
	arr[2] = arr[1] + 1;
	while (arr[2] <= '9' )
	{
		write (1, &arr[0], 1);
		write (1, &arr[1], 1);
		write (1, &arr[2], 1);
		if (arr[0] == '7')
		{
			break ;
		}
		write (1, ", ", 2);
		arr[2]++;
	}
	arr[1]++;
}

void	ft_print_numbers(void)
{
	int	arr[3];

	arr[0] = '0';
	while (arr[0] <= '9')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '9')
		{
			ft_x(arr);
			arr[1]++;
		}
		arr[0]++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
