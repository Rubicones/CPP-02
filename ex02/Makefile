NAME	=	Fixed

NAMES	=	main Fixed

OBJ_DIR		=	obj/
INC_DIR		= 	inc/

OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(NAMES)))
D_FILES		=	$(addprefix $(OBJ_DIR), $(addsuffix .d, $(NAMES)))

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

MD			=	mkdir

all: ${NAME}

$(NAME): ${OBJ} Makefile
			$(CC) $(CFLAGS) $(OBJ) -o ${NAME}

$(OBJ_DIR):
			${MD} $(OBJ_DIR)

$(OBJ): $(OBJ_DIR)%.o: %.cpp | $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $< -I$(INC_DIR) -o $@ -MD

include $(wildcard $(D_FILES))

clean:
			rm -f ${OBJ} $(D_FILES)

fclean:	clean
			rm -f ${NAME}

re:	fclean all

.PHONY: re fclean clean bonus all