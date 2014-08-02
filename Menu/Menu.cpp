//
// Menu.cpp for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 17:42:38 2014 cedric paumard
// Last update Sat Aug  2 11:56:54 2014 cedric paumard
//

#include "MenuBase.hpp"
#include "MenuChoose.hpp"
#include <iostream>

Menu::Menu()
{
  this->_position = PM_ENTER;
  this->_pos2.push_front(0);
}

Menu::~Menu()
{
  if (this->_graph.size() != 0)
    delete (this->_graph[0]);
}

Menu	&Menu::operator=(Menu &menu)
{
  return (menu);
}

int	Menu::modifyBack()
{
  return (this->_graph[this->_position]->modifyBack());
}

e_position_menu	Menu::modifyCurseur(int key)
{
  return (this->_graph[this->_position]->modifyCurseur(key));
}

int	Menu::modifyText()
{
  return (this->_graph[this->_position]->modifyText());
}

int	Menu::keyPressed(int key)
{
  int	tmp = this->_position;

  if (key == sf::Keyboard::Up || key == sf::Keyboard::Down)
    this->modifyCurseur(key);
  else if (key == sf::Keyboard::Return || key == sf::Keyboard::Escape)
    {
      if ((this->_position = this->modifyCurseur(key)) == PM_ERR)
	return (-1);
      else if (this->_position != tmp)
	return (this->modifyBack());
    }
  else if  (key == sf::Keyboard::Left || key == sf::Keyboard::Right)
    std::cout << "Hard" << std::endl;
  
  return (0);
}

void	Menu::initGame()
{
  this->_graph.push_back(new MenuBase(&this->_font, &this->_curseur, &this->_text));
  this->_graph.push_back(new MenuChoose(&this->_font, &this->_curseur, &this->_text));
  this->modifyBack();
}

const std::list<sf::Sprite>	&Menu::getBack(void)const
{
  return (this->_font);
}

const std::list<sf::Sprite>	&Menu::getCurs(void)const
{
  return (this->_curseur);
}

const std::list<sf::Text>	&Menu::getText(void)const
{
  return (this->_text);
}

void	Menu::setWindow(sf::RenderWindow &_window)
{
  this->_window = &_window;
}

void	Menu::setText(MyText &_text)
{
  this->_all_text = _text;
}

void	Menu::setTexture(MyTexture &_texture)
{
  this->_texture = _texture;
}
