/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:10:05 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 13:11:58 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_key(t_key *key)
{
	key->is_w = 0;
	key->is_a = 0;
	key->is_s = 0;
	key->is_d = 0;
	key->is_left = 0;
	key->is_right = 0;
	key->is_esc = 0;
	key->is_space = 0;
	key->cursor = 1;
}
