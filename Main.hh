//
// Main.hh for Main.hh in /home/paumar_a/projet
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Fri Jul 25 18:08:05 2014 cedric paumard
// Last update Sat Jul 26 14:53:42 2014 cedric paumard
//

#ifndef MAIN_HH_
# define MAIN_HH_

/*
** includes
*/

# include "Param.hh"
# include <SFML/Graphics.hpp>
# include <SFML/Window.hpp>

/*
** class
*/

class	Main
{
  sf::RenderWindow	app;
  Menu			_menu;

public:
  Main(int, char **);
  ~Main();
};

#endif /* !MAIN_HH_ */
