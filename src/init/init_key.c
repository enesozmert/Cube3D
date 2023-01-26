/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:10:05 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:10:06 by eozmert          ###   ########.fr       */
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
}
