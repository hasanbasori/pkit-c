/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:07:32 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/20 15:28:51 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size
		)
{
	int	tab2[size];
	int	i;

	i = 0;
	while (i < size)
	{
		tab2[i] = *(tab + (size -1 - i));
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab2[i];
		i++;
	}
}

int		main(void)
{
	int tab[10] ={0,1,22,3,4,5,6,7,8,9};
	int i;
	int size;

	i = 0;
	size = 10;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
}
