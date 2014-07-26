##
## Makefile for Makefile in /home/paumar_a/rendu/cpp_va
## 
## Made by cedric paumard
## Login   <paumar_a@epitech.net>
## 
## Started on  Sun Jul 20 00:53:21 2014 cedric paumard
## Last update Sat Jul 26 15:41:29 2014 cedric paumard
##

SRCS	=	main.cpp \
		Menu.cpp \

OBJ	=	$(SRCS:.cpp=.o)

NAME	=	shootandrun

CXXFLAGS+=	-Wall -Wextra -Werror
CXXFLAGS+=	-I Unit -I Map -I Graph -I External_Objects/SFML-2.1/Include/SFML

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		g++ -o $(NAME) $(OBJ) -lsfml-graphics -lsfml-window -lsfml-system

clean	:
		rm -rf $(OBJ)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
