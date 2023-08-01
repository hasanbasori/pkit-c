/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:13:16 by kdanchal          #+#    #+#             */
/*   Updated: 2023/08/01 17:17:12 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	if (argc > 1)
	{
		while (--i > 0)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
		}
	}
	return (1);
}
