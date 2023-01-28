/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:51:58 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:25:19 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	exception_handler(t_map *map)
{
	int			i;
	int			handle_code;
	t_exception	*exception;

	i = -1;
	handle_code = 0;
	exception = malloc(sizeof(t_exception) * 24);
	static_exception(exception);
	while (exception[++i].message != NULL)
	{
		handle_code = exception[i].f(map);
		if (handle_code == exception[i].error_code)
			exit(printf("Error : %d %s\n", exception[i].error_code, \
			exception[i].message));
	}
	free(exception);
	return (i);
}
