/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:56:46 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/24 19:36:20 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (dest[num1] != '\0')
	{
		num1++;
	}
	while (src[num2] != '\0')
	{
		dest[num1] = src[num2];
		num1++;
		num2++;
	}
	dest[num1] = '\0';
	return (dest);
}
