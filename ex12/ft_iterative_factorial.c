/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 20:24:52 by kkhabour          #+#    #+#             */
/*   Updated: 2019/03/29 17:28:52 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	factorial = 1;
	i = 0;
	if (nb < 0 || nb > 12)
		return (0);
	while (++i <= nb)
		factorial *= i;
	return (factorial);
}
