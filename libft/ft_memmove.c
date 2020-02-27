/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:29:10 by bbutterm          #+#    #+#             */
/*   Updated: 2019/04/17 19:36:16 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	i = 0;
	if (ptr2 < ptr)
		while (++i <= n)
			ptr[n - i] = ptr2[n - i];
	else
		while (n-- > 0)
			*(ptr++) = *(ptr2++);
	return (s1);
}
