/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlokhors <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/18 17:17:15 by mlokhors      #+#    #+#                 */
/*   Updated: 2019/03/19 19:35:00 by mlokhors      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	total = nb;
	if (nb <= 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		total = total * (nb - 1);
		nb--;
	}
	return (total);
}
