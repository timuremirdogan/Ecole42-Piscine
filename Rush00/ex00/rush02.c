/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidogan <tidogan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:55:54 by tidogan           #+#    #+#             */
/*   Updated: 2023/09/03 19:57:05 by tidogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	error(void)
{
	ft_putchar('z');
}

void	rush(int x, int y)
{
	int	width;
	int	length;

	if (x <= 0 || y <= 0)
		error();
	length = 1;
	while (y >= length)
	{
		width = 1;
		while (x >= width)
		{
			if ((width == 1 && length == 1) || (width == x && length == 1))
				ft_putchar ('A');
			else if ((width == 1 && length == y) || (width == x && length == y))
				ft_putchar ('C');
			else if ((width != 1 && width != x) && (length != 1 && length != y))
				ft_putchar (' ');
			else
				ft_putchar ('B');
			width++;
		}
		ft_putchar ('\n');
		length++;
	}
}
