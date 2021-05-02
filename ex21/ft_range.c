/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 21:16:22 by kkhabour          #+#    #+#             */
/*   Updated: 2019/03/28 23:38:33 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int i;
	int *range;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	range = (int*)malloc(size * sizeof(int));
	while (i < size)
		range[i++] = min++;
	return (range);
}
