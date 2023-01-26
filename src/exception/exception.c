/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:51:58 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 14:21:16 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	exception_handler(t_map map)
{
	int			i;
	int			handle_code;
	t_exception	exception[23];

	i = -1;
	handle_code = 0;
	static_exception(exception);
	while (exception[++i].message != NULL)
	{
		handle_code = exception[i].f(map);
		if (handle_code == exception[i].error_code)
			exit(printf("Error : %d %s\n", exception[i].error_code, \
			exception[i].message));
	}
	return (i);
}
