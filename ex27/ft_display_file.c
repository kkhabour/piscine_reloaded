/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:09:06 by kkhabour          #+#    #+#             */
/*   Updated: 2019/04/01 23:31:08 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char **argv)
{
	int		error;
	char	c;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	error = open(argv[1], O_RDONLY);
	while (read(error, &c, 1))
		ft_putchar(c);
	return (0);
}
