/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidogan <tidogan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:16:41 by tidogan           #+#    #+#             */
/*   Updated: 2023/09/13 11:35:52 by tidogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	statement;

	i = 0;
	statement = 0;
	while (str [i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (statement == 0)
			{
				str[i] -= 32 ;
				statement = 1;
			}
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && statement == 1)
			str[i] += 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			statement = 1;
		else
			statement = 0;
		i++;
	}
	return (str);
}
