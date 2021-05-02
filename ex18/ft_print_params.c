/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:45:41 by kkhabour          #+#    #+#             */
/*   Updated: 2019/03/28 00:58:01 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar(10);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
