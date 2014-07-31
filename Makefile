##
## Makefile for Makefile in /home/paumar_a/rendu/cpp_va
## 
## Made by cedric paumard
## Login   <paumar_a@epitech.net>
## 
## Started on  Sun Jul 20 00:53:21 2014 cedric paumard
## Last update Wed Jul 30 16:24:23 2014 cedric paumard
##

SRCS	=	main.cpp \
		Main.cpp \
		Menu/Menu.cpp \
		Menu/Param.cpp \
		Menu/Param_getter.cpp \
		Event/MyEvent.cpp \
		Graph/Texture/MyTexture.cpp \
		Graph/Texture/MenuGetter.cpp \
		Graph/Text/MyText.cpp \
		Graph/Text/MyTextMapGetter.cpp \
		Graph/Text/MyTextMenuGetter.cpp \
		Graph/Text/MyTextOtherGetter.cpp \
		Graph/Text/MyTextUnitGetter.cpp \

OBJ	=	$(SRCS:.cpp=.o)

NAME	=	shootandrun

CXXFLAGS+=	-Wall -Wextra -Werror
CXXFLAGS+=	-I Menu -I External_Objects/SFML-2.1/Include/SFML -I Graph/Text -I Graph/Texture -I Event

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		clang++ -o $(NAME) $(OBJ) -lsfml-graphics -lsfml-window -lsfml-system

clean	:
		rm -rf $(OBJ)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
