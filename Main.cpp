//
// Main.cpp for Main in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 16:03:52 2014 cedric paumard
// Last update Mon Aug  4 15:04:01 2014 cedric paumard
//

#include "Main.hh"
#include <iostream>

Main::Main()
{
  this->_window.create(sf::VideoMode(SIZE_WINDOW_X, SIZE_WINDOW_Y, 32), VIDEO_GAME_NAME); 
  this->_menu.setWindow(this->_window);
  this->_menu.setTexture(this->_texture);
  this->_menu.setText(this->_text);
  this->_position = GP_MENU;
  this->_event.setWindow(this->_window);
  this->_event.setMenu(this->_menu);
}

Main::~Main()
{
}

void	Main::drawMenu()
{
  std::vector<sf::Text>	tmp_mod(this->_menu.getMod());
  std::list<sf::Sprite>	tmp(this->_menu.getBack());
  std::list<sf::Sprite>	tmp_sel(this->_menu.getCurs());
  std::list<sf::Text>	tmp_txt(this->_menu.getText());

  for(std::list<sf::Sprite>::iterator it = tmp.begin(); it != tmp.end(); ++it)
    this->_window.draw(*it);
  this->_window.draw(tmp_sel.front());
  for(std::list<sf::Text>::iterator it_txt = tmp_txt.begin(); it_txt != tmp_txt.end(); ++it_txt)
    this->_window.draw(*it_txt);
  if (this->_menu.getPosition() != PM_ENTER)
    {
      for(std::vector<sf::Text>::iterator it_mod = tmp_mod.begin(); it_mod != tmp_mod.end(); ++it_mod)
	this->_window.draw(*it_mod);
    }
}

int	Main::beginGame()
{
  if (this->_position == GP_MENU)
    this->_menu.initGame();

  while (this->_window.isOpen())
    {
      if (this->_event(this->_position) == -1)
	return (-1);
      else if (this->_position == GP_MENU)
	this->drawMenu();
      // else
      // 	this->game.draw_window();
      this->_window.display();
    }
  return (0);
}
