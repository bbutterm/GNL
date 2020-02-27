/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 20:34:28 by bbutterm          #+#    #+#             */
/*   Updated: 2019/04/19 19:14:16 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*map;

	dst = 0;
	map = 0;
	if (!s || !f)
		return (0);
	else
	{
		if (!(dst = ft_strnew(ft_strlen(s))))
			return (0);
		map = dst;
		if (s && f)
			while (*s)
				*dst++ = f((char)*s++);
	}
	return (map);
}
