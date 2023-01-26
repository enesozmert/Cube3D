/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:28:32 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:28:33 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	main(int argc, char *argv[])
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 8b5f32c87b52380a22e4ce4ebdb0f87788063ce4
	t_game	game;

	init_all(&game);
	if (argc != 2)
		return (0);
	read_map(argv[1], &game.map);
	parser_map(&game.map);
	exception_handler(game.map);
	player(&game);
	draw_screen(&game);
	init_texture(&game);
	routine(&game);
	return (0);
<<<<<<< HEAD
=======
=======
    t_game game;

    init_all(&game);
    if (argc != 2)
        return (0);
    read_map(argv[1], &game.map);
    parser_map(&game.map);
    exception_handler(game.map);
    player(&game);
    draw_screen(&game);
    init_texture(&game);
    routine(&game);
    return (0);
>>>>>>> 875c2fed454e357818e7313581ee2e11251d1b86
>>>>>>> 8b5f32c87b52380a22e4ce4ebdb0f87788063ce4
}
