/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_dir.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:59 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:26:00 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTURE_DIR_H
# define TEXTURE_DIR_H

typedef struct s_texture_dir
{
	int		index;
	int		fd_start_index;
	char	*dir;
	char	*texture_path;
	int		check;
}			t_texture_dir;

#endif