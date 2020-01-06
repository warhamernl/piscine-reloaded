/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlokhors <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 13:20:00 by mlokhors      #+#    #+#                 */
/*   Updated: 2019/03/20 20:27:15 by mlokhors      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int i;
	int *tab;

	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	while (i < len)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
