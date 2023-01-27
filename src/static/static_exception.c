/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_exception.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:49:20 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/27 17:41:56 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	static_exception(t_exception *exception)
{
	exception[0] = (t_exception){702, "Map Name", map_file_error};
	exception[1] = (t_exception){704, "Map Not Found", map_file_error};
	exception[2] = (t_exception){803, "Not Found NO", dir_file_error};
	exception[3] = (t_exception){801, "Not Found WE", dir_file_error};
	exception[4] = (t_exception){802, "Not Found SO", dir_file_error};
	exception[5] = (t_exception){804, "Not Found EA", dir_file_error};
	exception[6] = (t_exception){102, "Header Count", header_count_error};
	exception[7] = (t_exception){103, "Header Location", header_location_error};
	exception[8] = (t_exception){203, "Item Wrong", item_wrong_error};
	exception[9] = (t_exception){204, "Item Single", item_single_error};
	exception[10] = (t_exception){601, "Player Down", player_error};
	exception[11] = (t_exception){602, "Player Right", player_error};
	exception[12] = (t_exception){603, "Player Left", player_error};
	exception[13] = (t_exception){604, "Player Up", player_error};
	exception[14] = (t_exception){404, "Up", map_error};
	exception[15] = (t_exception){403, "Left", map_error};
	exception[16] = (t_exception){402, "Right", map_error};
	exception[17] = (t_exception){401, "Down", map_error};
	exception[18] = (t_exception){504, "Space Up", map_error_space};
	exception[19] = (t_exception){503, "Space Left", map_error_space};
	exception[20] = (t_exception){502, "Space Right", map_error_space};
	exception[21] = (t_exception){501, "Space Down", map_error_space};
	exception[22] = (t_exception){900, "Syntax Rgb", map_rgb_error};
	exception[23] = (t_exception){-1, NULL, NULL};
}
