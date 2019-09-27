/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:27:45 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/27 14:34:03 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		if (!s1 || !s2)
			return (1);
		while (*s1 == *s2 && s2 && n > i + 1)
		{
			s1++;
			s2++;
			i++;
		}
		if (*s1 != *s2)
			return (0);
		return (1);
	}
	return (0);
}
