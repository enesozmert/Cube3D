/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_filename_from_path.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:37:11 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:37:59 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

char	*get_filename_from_path(char *path)
{
	char	*last_slash;

	last_slash = ft_strrchr(path, '/');
	if (last_slash == NULL)
		return (path);
	else
		return (last_slash + 1);
}
