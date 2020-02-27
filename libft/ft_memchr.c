/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:03:32 by bbutterm          #+#    #+#             */
/*   Updated: 2019/04/08 19:20:09 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char sym;

	ptr = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*ptr == sym)
			return (ptr);
		ptr++;
	}
	return (0);
}
