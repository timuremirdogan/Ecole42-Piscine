/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidogan <tidogan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:26:45 by tidogan           #+#    #+#             */
/*   Updated: 2023/09/03 19:57:22 by tidogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	error(void)
{
	ft_putchar('z');
}

void	rush(int x, int y)
{
	int	length;
	int	width;

	if (x <= 0 || y <= 0)
		error ();
	length = 1;
	while (y >= length)
	{
		width = 1;
		while (x >= width)
		{
			if ((width == 1 || x == width) && (length == 1 || y == length))
				ft_putchar('o');
			else if ((width != 1 && width != x) && (length == 1 || length == y))
				ft_putchar('-');
			else if ((width == 1 || width == x) && (length != 1 && length != y))
				ft_putchar('|');
			else if ((width != 1 && width != x) && (length != 1 || length != y))
				ft_putchar(' ');
			if (x == width)
				ft_putchar('\n');
			width++;
		}
		length++;
	}
}
