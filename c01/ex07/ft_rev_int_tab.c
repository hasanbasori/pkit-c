/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:46:50 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/20 15:53:09 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	h;
	int	tmp;

	h = size / 2;
	size--;
	i = 0;
	while (i < h)
	{
		tmp = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = tmp;
		i++;
		return (tab);
	}
}
