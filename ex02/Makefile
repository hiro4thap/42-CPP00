NAME		= account

COMPILE		= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRC_DIR 	= ./
OBJ_DIR 	= obj/

SRC			= test.cpp Account.cpp
OBJ			= $(SRC:.cpp=.o)

SRCS		= $(addprefix $(SRC_DIR), $(SRC))
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ))

all:$(NAME)

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(COMPILE) $(CFLAGS) -o $@ -c $<

$(NAME):$(OBJS)
	$(COMPILE) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -rf $(OBJ_DIR)

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re
