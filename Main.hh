//
// Main.hh for Main.hh in /home/paumar_a/projet
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Fri Jul 25 18:08:05 2014 cedric paumard
// Last update Mon Jul 28 13:08:04 2014 cedric paumard
//

#ifndef MAIN_HH_
# define MAIN_HH_

/*
** includes
*/

# include "Menu.hh"

/*
** define
*/

# define VIDEO_GAME_NAME	"AW_Like"

# define SIZE_WINDOW_X		1680
# define SIZE_WINDOW_Y		1050

/*
** enum
*/

enum	e_graph_position
  {
    GP_MENU = 0,
    GP_GAME,
  };

/*
** class
*/

class	Main
{
  sf::RenderWindow	_window;
  e_graph_position	_position;
  MyTexture		_texture;
  MyText		_text;
  Menu			_menu;

public:

  Main();
  ~Main();

  int	beginGame();
  void	drawMenu();
};

#endif /* !MAIN_HH_ */
