//
// Menu.hh for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 15:48:23 2014 cedric paumard
// Last update Sat Jul 26 21:45:34 2014 cedric paumard
//

#ifndef MENU_HH_
# define MENU_HH_

/*
** includes
*/

# include "Param.hh"
# include <SFML/Graphics.hpp>
# include <SFML/Window.hpp>

/*
** enum
*/

enum	position_menu
  {
    SELECT_MAP = 0,
    SELECT_MAP_RANDOM,
    SELECT_MAP_SIZE_X,
    SELECT_MAP_SIZE_Y,
    SELECT_MAP_SIZE_RAND,
    SELECT_MAP_TYPE_DEFINE,
    SELECT_MAP_TYPE_RAND,
    SELECT_MAP_VIEW,
    SELECT_UNIT,
    SELECT_UNIT_CONF,
    SELECT_UNIT_RAND,
    SELECT_IA,
    SELECT_FOG,
    SELECT_LAUNCH,
    SELECT_RETURN,
  };
  
/*
** class
*/

class	Menu
{
  sf::RenderWindow	*_window;
  int			position;

public:
  Param			_param;

  Menu();
  ~Menu();

  //setWindow(sf::RenderWindow)
};

#endif /* !MENU_HH_ */
