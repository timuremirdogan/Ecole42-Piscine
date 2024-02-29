/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidogan <tidogan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:38:21 by tidogan           #+#    #+#             */
/*   Updated: 2023/09/19 12:33:52 by tidogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 0)
	{
		while (av[0][i])
		{
			write(1, &av[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}