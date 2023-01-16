#include "../../include/header.h"

int main(int argc, char *argv[])
{
    (void)argc;
    t_map map;
    init_map(&map);
    if (argc != 2)
        return (0);
    read_map(argv[1], &map);
    parser_map(&map);
    return (0);
}
