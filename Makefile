#Definition
CC          	=   gcc
NAME        	=   cube3d
LIBFT			=	./libraries/libft/libft.a
MINILIBX		=	./libraries/minilibx/libmlx.a
CC				=	gcc
USER_NAME1		=	eozmert
USER_NAME2		=	iyapar
LEAKS			=	-fsanitize=address
CFLAGS			=	-Wall -Werror -Wextra -g -I./include -I./libft -I./minilibx -I 
LFLAGS      	=   -framework OpenGL -framework AppKit -L./minilibx -lmlx
RM				=	rm -f


#Directory
OBJ_DIR			=	obj/
SRC_DIR			= 	src/

SRC_COMMON		= 	common/
SRC_EXCEPTION	=	exception/
SRC_CORE		=	core/

#Files
COMMON			= 	main
EXCEPTION		= 	excepiton
CORE			= 	core
DRAWING			= 	drawing
EVENTS			= 	events
PARSING			= 	parsing
RAYCASTING		= 	raycasting
#FileCreate
 
SRC_FILES		+=	$(addprefix $(SRC_COMMON),$(COMMON))
SRC_FILES		+=	$(addprefix $(SRC_EXCEPTION),$(EXCEPTION))
SRC_FILES		+=	$(addprefix $(SRC_CORE),$(CORE))
SRC_FILES		+=	$(addprefix $(SRC_DRAWING),$(DRAWING))
SRC_FILES		+=	$(addprefix $(SRC_EVENTS),$(EVENTS))
SRC_FILES		+=	$(addprefix $(SRC_PARSING),$(PARSING))
SRC_FILES		+=	$(addprefix $(SRC_RAYCASTING),$(RAYCASTING))

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