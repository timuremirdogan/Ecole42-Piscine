/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidogan <tidogan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:01:07 by tidogan           #+#    #+#             */
/*   Updated: 2023/09/18 12:38:09 by tidogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	index;

	index = 2;
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
				return (index);
			else if (index >= 46341)
				return (0);
			index++;
		}
	}
	return (0);
}
