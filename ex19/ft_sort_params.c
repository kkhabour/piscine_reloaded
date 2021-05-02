/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 15:11:43 by kkhabour          #+#    #+#             */
/*   Updated: 2019/03/26 15:14:05 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int res;

	res = 0;
	while (*s1 || *s2)
	{
		res = *s1++ - *s2++;
		if (res != 0)
			return (res);
	}
	return (0);
}

void	print_args(int size, char **args)
{
	int i;

	i = 0;
	while (++i < size)
	{
		ft_putstr(args[i]);
		ft_putchar(10);
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		swapped;
	char	*temp;

	i = 0;
	swapped = 1;
	while (++i < argc)
	{
		j = 0;
		while (++j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				swapped = 1;
			}
		}
		if (!swapped)
			break ;
	}
	print_args(argc, argv);
	return (0);
}
