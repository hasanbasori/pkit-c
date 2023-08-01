/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:18 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/24 19:45:03 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	num1;
	unsigned int	num2;

	num1 = 0;
	num2 = 0;
	while (dest[num1] != '\0')
	{
		num1++;
	}
	while (num2 < nb && src[num2] != '\0')
	{
		dest[num1] = src[num2];
		num1++;
		num2++;
	}
	dest[num1] = '\0';
	return (dest);
}
