/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_texture_dir.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:52:30 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:52:46 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	destroy_texture_dir(t_texture_dir *texture_dir)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		free(texture_dir[i].dir);
		free(texture_dir[i].texture_path);
	}
	return (0);
}
