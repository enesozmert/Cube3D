/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:28:32 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 15:02:49 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	main(int argc, char *argv[])
{
	t_game	game;

	init_all(&game);
	if (argc != 2)
		return (0);
	read_map(argv[1], &game.map);
	parser_map(&game.map);
	// exception_handler(game.map);
	// player(&game);
	// draw_screen(&game);
	// init_texture(&game);
	// routine(&game);
	return (0);
}
