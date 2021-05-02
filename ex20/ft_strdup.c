/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 16:37:03 by kkhabour          #+#    #+#             */
/*   Updated: 2019/03/26 17:15:37 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = ft_strlen(src);
	str = (char*)malloc((len + 1) * sizeof(char));
	while (*src)
		*str++ = *src++;
	*str = 0;
	return (str - (len));
}
