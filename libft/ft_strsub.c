/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 18:18:34 by bbutterm          #+#    #+#             */
/*   Updated: 2019/04/14 18:35:14 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = 0;
	if (s)
	{
		if (!(sub = ft_strnew(len)))
			return (0);
		while (start--)
			s++;
		sub = ft_strncpy(sub, s, len);
	}
	return (sub);
}
