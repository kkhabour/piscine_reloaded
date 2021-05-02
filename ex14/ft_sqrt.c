/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 21:20:17 by kkhabour          #+#    #+#             */
/*   Updated: 2019/03/28 00:52:29 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int i;
	int sq;

	if (nb <= 0)
		return (0);
	i = 1;
	while (1)
	{
		sq = nb - ft_recursive_power(i, 2);
		if (sq == 0)
		{
			sq = i;
			break ;
		}
		if (sq < 0)
		{
			sq = 0;
			break ;
		}
		i++;
	}
	return (sq);
}
