/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <bbutterm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:55:56 by bbutterm          #+#    #+#             */
/*   Updated: 2019/05/02 18:16:13 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 10
# define ENDL '\n'
# define END '\0'

int get_next_line(int const fd, char **line);

#endif
