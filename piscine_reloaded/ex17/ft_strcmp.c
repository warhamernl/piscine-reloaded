/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlokhors <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/18 19:07:03 by mlokhors      #+#    #+#                 */
/*   Updated: 2019/03/20 16:34:20 by mlokhors      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	st1;
	unsigned char	st2;

	i = 0;
	st1 = s1[i];
	st2 = s2[i];
	while (s1[i] && s2[i])
	{
		st1 = s1[i];
		st2 = s2[i];
		if (st1 != st2)
			break ;
		i++;
	}
	return (st1 - st2);
}
