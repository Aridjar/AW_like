//
// Menu.cpp for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 17:42:38 2014 cedric paumard
// Last update Thu Jul 31 14:21:52 2014 cedric paumard
//

#include "Menu.hh"
#include "MenuBase.hpp"
#include <iostream>

Menu::Menu()
{

  this->_position = PM_ENTER;
  this->_pos2.push_front(0);
}

Menu::~Menu()
{
}

Menu	&Menu::operator=(Menu &menu)
{
  return (menu);
}

int	Menu::modifyCurseur(int key)
{
  const	sf::Texture	&sele = this->_texture.getMenuSelect();
  sf::Sprite		sprite;

  if (key == sf::Keyboard::Up || key == sf::Keyboard::Down ||
      key == sf::Keyboard::Escape || key == sf::Keyboard::Return)
    {
      this->_curseur.pop_front();
      if (key == sf::Keyboard::Escape || (key == sf::Keyboard::Return && this->_pos2.front() == 4))
	{
	  this->_pos2.pop_front();
	  return (-1);
	}
      else if (key == sf::Keyboard::Down && this->_pos2.front() + 2 <= 4)
	this->_pos2.front() += 2;
      else if (key == sf::Keyboard::Up && this->_pos2.front() - 2 >= 0)
	this->_pos2.front() -= 2;
    }

  sprite.setTexture(sele);
  sprite.setPosition(sf::Vector2f(DIS_MENU_SELECT_X,
				  DIS_MENU_SELECT_Y +
				  DIS_MENU_SELECT_DIF * this->_pos2.front()));
  this->_curseur.push_front(sprite);
  return (0);
}

std::list<sf::Text>	&Menu::modifyText()
{
  this->_text = _graph[this->_position].modifyText();
  return (this->_text);
}

int	Menu::keyPressed(int key)
{
  if (key == sf::Keyboard::Up || key == sf::Keyboard::Down)
    this->modifyCurseur(key);
  else if (key == sf::Keyboard::Return || key == sf::Keyboard::Escape)
    {
      if (this->modifyCurseur(key) == -1 && this->_position == PM_ENTER)
	return (-1);
    }    
  else if  (key == sf::Keyboard::Left || key == sf::Keyboard::Right)
    std::cout << "Hard" << std::endl;
  // this->modifyInfo(key);
  return (0);
}

void	Menu::initGame()
{
  const sf::Texture	&back = this->_texture.getMenuBackOpen();
  const	sf::Texture	&sele = this->_texture.getMenuSelect();
  sf::Sprite		sprite;
  
  this->_graph.push_back(MenuBase());

  sprite.setTexture(back);
  sprite.setPosition(sf::Vector2f(0, 0));
  this->_font.push_front(sprite);

  sprite.setTexture(sele);
  sprite.setPosition(sf::Vector2f(DIS_MENU_SELECT_X, DIS_MENU_SELECT_Y));
  this->_curseur.push_front(sprite);
  this->modifyText();
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
