/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdanchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:56:48 by kdanchal          #+#    #+#             */
/*   Updated: 2023/07/23 18:11:31 by kdanchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i - 1] < 'A' || 'Z' < str[i - 1])
			if (str[i - 1] < 'a' || 'z' < str[i - 1])
				if (str[i - 1] < '0' || '9' < str[i - 1])
					a = 1;
		else
			a = 0;
		else
			a = 0;
		else
			a = 0;
		if (a == 1 && 'a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] -32;
		if (a == 0 && 'A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}
