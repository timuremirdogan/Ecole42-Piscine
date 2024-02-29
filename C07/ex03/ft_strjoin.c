/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidogan <tidogan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:05:50 by tidogan           #+#    #+#             */
/*   Updated: 2023/09/21 13:26:14 by tidogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcrt(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size - 1)
			len += ft_strlen(sep);
		i++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

void	ft_strcpy(int size, char **strs, char *sep, char *ptr)
{
	int		i;
	int		j;
	int		f;

	i = 0;
	f = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			ptr[f] = strs[i][j];
			j++;
			f++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			ptr[f] = sep[j];
			j++;
			f++;
		}
		i++;
	}
	ptr[f] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;

	ptr = ft_strcrt(size, strs, sep);
	ft_strcpy(size, strs, sep, ptr);
	return (ptr);
}
