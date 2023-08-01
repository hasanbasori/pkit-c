/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:42:03 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/27 18:56:37 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	output;
	int	pos_neg;
	int	i;

	output = 0;
	pos_neg = 0;
	i = 0;
	while ((str[i] == ' ') || (8 < str[i] && str[i] < 14))
		i++;
	while (str[i] != 0 && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			pos_neg++;
		i++;
	}
	while (str[i] != 0 && ('0' <= str[i] && str[i] <= '9'))
	{
		output = output * 10;
		output = output + (str[i] - '0');
		i++;
	}
	if (pos_neg % 2 == 1)
		output = output * (-1);
	return (output);
}
