#include "../../include/header.h"

int exception_handler(t_map map)
{
    int			i;
	int			handle_code;
	t_exception	exception[10];

	i = -1;
	handle_code = 0;
	exception[0] = (t_exception){404, "Up", map_error};
	exception[1] = (t_exception){403, "Left", map_error};
	exception[2] = (t_exception){402, "Right", map_error};
	exception[3] = (t_exception){401, "Down", map_error};
	exception[4] = (t_exception){202, "Item Repeat", item_repeat_error};
	exception[5] = (t_exception){204, "Item Single", item_single_error};
	exception[6] = (t_exception){102, "Item Wrong", item_wrong_error};
	exception[7] = (t_exception){502, "Map Name", file_error};
	exception[8] = (t_exception){504, "Map Not Found", file_error};
	exception[9] = (t_exception){-1, NULL, NULL};
	while (exception[++i].message != NULL)
	{
		handle_code = exception[i].f(map);
		if (handle_code == exception[i].error_code)
			exit(printf("Error : %d %s\n",exception[i].error_code , exception[i].message));
	}
    return (i);
}