#Definition
CC          	=   gcc
NAME        	=   cube3d
USER_NAME1		=	eozmert
USER_NAME2		=	iyapar
LIBFT			=	./libraries/libft/libft.a
LIBFT_PATH		=	./libraries/libft
MINILIBX		=	./libraries/minilibx/libmlx.a
MINILIBX_PATH	=	./libraries/minilibx
CFLAGS			=	-Wall -Werror -Wextra -g -I ./include -I ./libraries/libft -I ./libraries/minilibx
LFLAGS      	=   -framework OpenGL -framework AppKit -L$(MINILIBX_PATH) -lmlx
LEAKS			=	-fsanitize=address
RM				=	rm -f


#Directory
OBJ_DIR			=	obj/
SRC_DIR			= 	src/

SRC_COMMON		= 	common/
SRC_EXCEPTION	=	exception/
SRC_CORE		=	core/
SRC_DRAWING		=	drawing/
SRC_EVENTS		=	events/
SRC_PARSING		=	parsing/
SRC_RAYCASTING	=	raycasting/
SRC_GNL			=	gnl/
SRC_INIT		=	init/
SRC_FORMAT		=	format/

#Files
COMMON			= 	main routine read_map
EXCEPTION		= 	exception map_error argc_error
CORE			= 	core ft_strjoin_s1 get_filename_from_path get_filename_without_extension \
					get_file_extension is_valid_filename is_valid_path get_str_char_count \
					is_valid_rgb rgb_hex int_rgb \
					get_map_height
DRAWING			= 	
EVENTS			= 	
PARSING			=	parser_map \
					parser_map_ceiling parser_map_floor parser_map_textture_dir
RAYCASTING		= 	
GNL				= 	gnl
INIT			= 	init_map init_floor init_ceiling init_texture_dirs
FORMAT			= 	format_floor format_ceiling format_texture_dir

#FileCreate 
SRC_FILES		+=	$(addprefix $(SRC_COMMON),$(COMMON))
SRC_FILES		+=	$(addprefix $(SRC_EXCEPTION),$(EXCEPTION))
SRC_FILES		+=	$(addprefix $(SRC_CORE),$(CORE))
SRC_FILES		+=	$(addprefix $(SRC_DRAWING),$(DRAWING))
SRC_FILES		+=	$(addprefix $(SRC_EVENTS),$(EVENTS))
SRC_FILES		+=	$(addprefix $(SRC_PARSING),$(PARSING))
SRC_FILES		+=	$(addprefix $(SRC_RAYCASTING),$(RAYCASTING))
SRC_FILES		+=	$(addprefix $(SRC_GNL),$(GNL))
SRC_FILES		+=	$(addprefix $(SRC_INIT),$(INIT))
SRC_FILES		+=	$(addprefix $(SRC_FORMAT),$(FORMAT))

SRC 			= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 			= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJF			=	.cache_exists

all:		welcome $(NAME)

$(OBJF):
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(SRC_COMMON)
			@mkdir -p $(OBJ_DIR)$(SRC_CORE)
			@mkdir -p $(OBJ_DIR)$(SRC_EXCEPTION)
			@mkdir -p $(OBJ_DIR)$(SRC_DRAWING)
			@mkdir -p $(OBJ_DIR)$(SRC_EVENTS)
			@mkdir -p $(OBJ_DIR)$(SRC_PARSING)
			@mkdir -p $(OBJ_DIR)$(SRC_RAYCASTING)
			@mkdir -p $(OBJ_DIR)$(SRC_GNL)
			@mkdir -p $(OBJ_DIR)$(SRC_INIT)
			@mkdir -p $(OBJ_DIR)$(SRC_FORMAT)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
			@$(CC) $(CFLAGS) -c $< -o $@
			@echo Compiling Success file is : $< $(SRC_DIR) $@ 

norm:
			@norminette $(SRC) | grep -v Norme -B1 || true
			@echo Norminatte exception


$(NAME):	$(OBJ)
			@$(CC) $(OBJ) $(CFLAGS) $(LFLAGS) -o $(NAME) $(LIBFT) $(MINILIBX)
			@echo $(NAME) compiled!

clean:
			@$(RM) -rf $(OBJ_DIR)
			@$(RM) -f $(OBJF)const
			@echo Objects files cleaned!

fclean:		clean
			@$(RM) -f $(NAME)
			@echo $(NAME) executable files cleaned!

re:			fclean all
			@echo Cleaned and rebuilt

welcome:
			@echo "Cube3d delle"
			@echo "\n"

.PHONY:		all clean fclean re bonus norm