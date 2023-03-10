/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_close.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:48:55 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:28:28 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	key_close(t_game *game)
{
	if (game->key.is_esc)
		event_close(game);
	return (0);
}
