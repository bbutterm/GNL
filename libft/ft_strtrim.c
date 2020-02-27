/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 18:03:04 by bbutterm          #+#    #+#             */
/*   Updated: 2019/04/14 18:33:44 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	space;
	size_t	len;

	space = 0;
	if (!s)
		return (0);
	while ((s[space] == '\n' || s[space] == '\t' || s[space] == ' '))
		space++;
	if (!s[space])
		return (ft_strdup(s + space));
	len = ft_strlen(s) - 1;
	while ((s[len] == '\n' || s[len] == '\t' || s[len] == ' ') && len > 0)
		len--;
	return (ft_strsub(s, space, len - space + 1));
}
