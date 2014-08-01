//
// MenuBase.hpp for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Thu Jul 31 01:37:30 2014 cedric paumard
// Last update Fri Aug  1 23:52:30 2014 cedric paumard
//

#ifndef MENUBASE_HPP_
# define MENUBASE_HPP_

/*
** include
*/

#include "Menu.hh"
#include <iostream>

/*
** define
*/

# define DIS_MENU_SELECT_X 503
# define DIS_MENU_SELECT_Y 320
# define DIS_MENU_SELECT_DIF 120

/*
** class
*/

class MenuBase : public Menu
{
public:
  MenuBase(){};
  ~MenuBase(){};

  std::list<sf::Text>	&modifyText()
  {
    sf::Text		text;

    text = this->_all_text.getExit();
    text.setPosition(sf::Vector2f(744, 890));
    this->_text.push_front(text);
    text = this->_all_text.getCredit();
    text.setPosition(sf::Vector2f(685, 650));
    this->_text.push_front(text);
    text = this->_all_text.getMenu();
    text.setPosition(sf::Vector2f(597, 410));
    this->_text.push_front(text);
    return (this->_text);
  };
  
  std::list<sf::Sprite>	&modifyCurseur(int key)
  {
    const sf::Texture	&sele = this->_texture.getMenuSelect();
    sf::Sprite		sprite;

    if (key == sf::Keyboard::Up || key == sf::Keyboard::Down ||
	key == sf::Keyboard::Escape || key == sf::Keyboard::Return)
      {
	if (this->_curseur.size() != 0)
	  this->_curseur.pop_front();
	if (key == sf::Keyboard::Escape || (key == sf::Keyboard::Return && this->_pos2.front() == 4))
	  {
	    if (this->_curseur.size() != 0)
	      this->_pos2.pop_front();
	    return (this->_curseur);
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
    return (this->_curseur);
  };

};

#endif /* !MENUBASE_HPP_ */
