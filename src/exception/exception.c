#include "../../include/header.h"

int exception_handler(t_map map)
{
    int			i;
	int			handle_code;
	t_exception	exception[18];

	i = -1;
	handle_code = 0;
	exception[0] = (t_exception){702, "Map Name", map_file_error};
	exception[1] = (t_exception){704, "Map Not Found", map_file_error};
	exception[2] = (t_exception){803, "Not Found NO", dir_file_error};
	exception[3] = (t_exception){801, "Not Found WE", dir_file_error};
	exception[4] = (t_exception){802, "Not Found SO", dir_file_error};
	exception[5] = (t_exception){804, "Not Found EA", dir_file_error};
	exception[6] = (t_exception){102, "Header Count", header_count_error};
	exception[7] = (t_exception){103, "Header Location", header_location_error};
	exception[8] = (t_exception){204, "Item Single", item_single_error};
	exception[9] = (t_exception){404, "Up", map_error};
	exception[10] = (t_exception){403, "Left", map_error};
	exception[11] = (t_exception){402, "Right", map_error};
	exception[12] = (t_exception){401, "Down", map_error};
	exception[13] = (t_exception){504, "Space Up", map_error_space};
	exception[14] = (t_exception){503, "Space Left", map_error_space};
	exception[15] = (t_exception){502, "Space Right", map_error_space};
	exception[16] = (t_exception){501, "Space Down", map_error_space};
	exception[17] = (t_exception){-1, NULL, NULL};
	while (exception[++i].message != NULL)
	{
		handle_code = exception[i].f(map);
		if (handle_code == exception[i].error_code)
			exit(printf("Error : %d %s\n",exception[i].error_code , exception[i].message));
	}
    return (i);
}