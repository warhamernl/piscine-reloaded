/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   display_file.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlokhors <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 20:41:54 by mlokhors      #+#    #+#                 */
/*   Updated: 2019/03/21 13:18:56 by mlokhors      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	display_file(char *str)
{
	int		fd;
	char	buf;

	fd = open(str, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		write(1, &buf, 1);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "File name missing\n", 18);
	if (argc > 2)
		write(1, "Too many arguments\n", 19);
	if (argc == 2)
		display_file(argv[1]);
	return (0);
}
