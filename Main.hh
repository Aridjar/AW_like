//
// Main.hh for Main.hh in /home/paumar_a/projet
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Fri Jul 25 18:08:05 2014 cedric paumard
// Last update Sat Jul 26 21:43:21 2014 cedric paumard
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

# define	VIDEO_GAME_NAME "AW_Like"

# define	SIZE_WINDOW_X 1680
# define	SIZE_WINDOW_Y 1080

/*
** enum
*/

enum	position
  {
    MENU = 0,
    GAME,
  };

/*
** class
*/

class	Main
{
  sf::RenderWindow	_window;
  int			_position;

public:
  Menu			_menu;

  Main();
  ~Main();

  // int	beginGame();
};

#endif /* !MAIN_HH_ */
