#include "../../include/header.h"

int main(int argc, char *argv[])
{
    t_map map;
    init_map(&map);
    if (argc != 2)
        return (0);
    read_map(argv[1], &map);
    parser_map(&map);
    exception_handler(map);
    return (0);
}
