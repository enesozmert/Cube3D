#include "../../include/header.h"

int exception_handler(t_map map)
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
			exit(printf("Error : %d %s\n",exception[i].error_code , exception[i].message));
	}
    return (i);
}