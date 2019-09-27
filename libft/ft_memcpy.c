/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:01:31 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/25 19:27:24 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char				*str1;
	unsigned char				*str2;
	size_t						i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0 || s1 == s2)
		return (str1);
	while (n > i)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
