SRCS	= main.cpp\
		  Contact.cpp\
		  utils.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

NAME	= phonebook

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all:	$(NAME)

$(NAME):$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

re:		fclean $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)
