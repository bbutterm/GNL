/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:13:45 by bbutterm          #+#    #+#             */
/*   Updated: 2019/04/21 18:33:57 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int pos;
	unsigned int i;

	if (!*s2)
		return ((char*)s1);
	pos = 0;
	while (s1[pos] != '\0' && (size_t)pos < n)
	{
		if (s1[pos] == s2[0])
		{
			i = 1;
			while (s2[i] != '\0' && s1[pos + i] == s2[i] &&
					(size_t)(pos + i) < n)
				i++;
			if (s2[i] == '\0')
				return ((char*)&s1[pos]);
		}
		pos++;
	}
	return (0);
}
