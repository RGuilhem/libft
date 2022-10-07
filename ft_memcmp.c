/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:06:55 by graux             #+#    #+#             */
/*   Updated: 2022/10/07 16:07:24 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*s1_cpy;
	char			*s2_cpy;
	unsigned int	i;

	s1_cpy = (char *) s1;
	s2_cpy = (char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) s1_cpy[i] != (unsigned char) s2_cpy[i])
			return (s1_cpy[i] - s2_cpy[i]);
		i++;
	}
	return (0);
}
