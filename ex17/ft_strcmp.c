/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:11:43 by kkhabour          #+#    #+#             */
/*   Updated: 2019/03/26 11:45:04 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if ((*s1 - *s2) != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
