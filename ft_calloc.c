/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:57:27 by graux             #+#    #+#             */
/*   Updated: 2022/10/07 15:57:50 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	if (total / nmemb != size || total / size != nmemb)
		return (NULL);
	allocated = malloc(total);
	if (allocated == NULL)
		return (NULL);
	ft_bzero(allocated, total);
	return (allocated);
}
