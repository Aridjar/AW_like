//
// Main.cpp for Main in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 16:03:52 2014 cedric paumard
// Last update Mon Jul 28 17:44:34 2014 cedric paumard
//

#include "Main.hh"

Main::Main()
{
  this->_window.create(sf::VideoMode(SIZE_WINDOW_X, SIZE_WINDOW_Y, 32), VIDEO_GAME_NAME); 
  this->_menu.setWindow(this->_window);
  this->_menu.setTexture(this->_texture);
  this->_menu.setText(this->_text);
  this->_position = GP_MENU;
}

Main::~Main()
{
}

void	Main::drawMenu()
{
}

int	Main::beginGame()
{
  if (this->_position == GP_MENU)
    this->_menu.initGame();
  while (this->_window.isOpen())
    {
      if (this->_position == GP_MENU)
      	this->drawMenu();
      // else
      // 	this->game.draw_window();
      this->_window.display();
    }
  return (0);
}
