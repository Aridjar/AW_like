//
// Menu.cpp for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 17:42:38 2014 cedric paumard
// Last update Mon Jul 28 18:00:14 2014 cedric paumard
//

#include "Menu.hh"

Menu::Menu()
{
  this->_position.push_front(PM_ENTER);
}

Menu::~Menu()
{
}

// void	Menu::modifyCurseur(int key)
// {
//   if (key == sf::Keyboard::Return || key == sf::Keyboard::Escape)
//     {  
//       this->_curseur.popfront();
//       if (key == sf::Keyboard::Escape)
// 	return;
//     }
//   this->_curseur.pushfront();
// }

void	Menu::modifyText()
{
  switch (this->_position.front())
    {
    case PM_ENTER:
      
      break;
    case PM_CHOOSE:
      
      break;
    case PM_MAP:
      
      break;
    case PM_UNIT:
      break;
    }
}

// void	Menu::keyPressed(int key)
// {
//   if (key == sf::Keyboard::Return || key == sf::Keyboard::Escape ||
//       key == sf::Keyboard::Up || key == sf::Keyboard::Down)
//     this->modifyCurseur(key);
//   if (key == sf::Keyboard::Return || key == sf::Keyboard::Escape)
//     this->modifyText();
//   if  (key == sf::Keyboard::Left || key == sf::Keyboard::Right)
//     this->modifyInfo();
// }

void	Menu::initGame()
{
  
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
