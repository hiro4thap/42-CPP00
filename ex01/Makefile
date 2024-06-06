NAME		= phonebook
NAME_98		= $(NAME)_cpp98

COMPILE		= c++
CFLAGS		= -Wall -Wextra -Werror
CPP98FLAG	= -std=c++98

SRC_DIR 	= ./
OBJ_DIR 	= obj/
OBJ_DIR_98	= obj_98/

SRC			= main.cpp PhoneBook.cpp Contact.cpp
OBJ			= $(SRC:.cpp=.o)

SRCS		= $(addprefix $(SRC_DIR), $(SRC))
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ))
OBJS_98		= $(addprefix $(OBJ_DIR_98), $(OBJ))

all:$(NAME)

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(COMPILE) $(CFLAGS) -o $@ -c $<

$(NAME):$(OBJS)
	$(COMPILE) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(OBJ_DIR_98)

fclean:clean
	rm -rf $(NAME)
	rm -rf $(NAME_98)

re:fclean all

cpp98:$(NAME_98)

$(OBJ_DIR_98)%.o:$(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR_98)
	$(COMPILE) $(CFLAGS) $(CPP98FLAG) -o $@ -c $<

$(NAME_98):$(OBJS_98)
	$(COMPILE) $(CFLAGS) $(CPP98FLAG) -o $@ $(OBJS_98)

.PHONY:all clean fclean re cpp98
