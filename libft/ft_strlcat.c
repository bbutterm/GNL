/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:31:53 by bbutterm          #+#    #+#             */
/*   Updated: 2019/04/21 18:29:55 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	rsl;

	i = ft_strlen(dst);
	rsl = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (rsl);
	if (size < i)
		rsl += size;
	else
		rsl += i;
	while (src[j] != '\0' && i < size - 1 && dst != src)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (rsl);
}
