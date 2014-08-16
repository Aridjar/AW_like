//
// MenuBase.hpp for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Thu Jul 31 01:37:30 2014 cedric paumard
// Last update Wed Aug  6 11:10:16 2014 cedric paumard
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

class	MenuBase : public Menu
{
  std::list<sf::Sprite>	*_font;
  std::list<sf::Sprite>	*_curseur;   //list curseur (push_front && pop front, n'afficher que le premier)
  std::list<sf::Text>	*_text;

public:
  MenuBase(std::list<sf::Sprite> *font, std::list<sf::Sprite> *curs, std::list<sf::Text> *text)
  {
    this->_font = font;
    this->_curseur = curs;
    this->_text = text;
  };

  ~MenuBase(){};

  void			modifyInfo(int key){(void)key;};

  int			modifyText()
  {
    sf::Text		text;

    text = this->_all_text.getExit();
    text.setPosition(sf::Vector2f(744, 890));
    this->_text->push_front(text);
    text = this->_all_text.getCredit();
    text.setPosition(sf::Vector2f(685, 650));
    this->_text->push_front(text);
    text = this->_all_text.getMenu();
    text.setPosition(sf::Vector2f(597, 410));
    this->_text->push_front(text);
    return (0);
  };

  int			modifyBack()
  {
    const sf::Texture	&back = this->_texture.getMenuBackOpen();
    const sf::Texture	&sele = this->_texture.getMenuSelect();
    sf::Sprite		sprite;

    this->_font->clear();

    sprite.setTexture(back);
    sprite.setPosition(sf::Vector2f(0, 0));
    this->_font->push_front(sprite);

    if (this->_curseur->size() == 0)
      {
	sprite.setTexture(sele);
	sprite.setPosition(sf::Vector2f(DIS_MENU_SELECT_X, DIS_MENU_SELECT_Y));
	this->_curseur->push_front(sprite);
      }

    this->_text->clear();
    this->modifyText();
    return (0);
  }

  e_position_menu	execEnter()
  {
    if (this->_pos2.front() == 0)
      return (PM_CHOOSE);
    else if (this->_pos2.front() == 2)
      {    
	std::cout << "display credit" << std::endl;
	return (PM_ENTER);
      }
    else
      return (PM_ERR);
  };
  
  e_position_menu	modifyCurseur(int key)
  {
    const sf::Texture	&sele = this->_texture.getMenuSelect();
    sf::Sprite		sprite;

    if (key == sf::Keyboard::Return)
      return (this->execEnter());
    else if (key == sf::Keyboard::Up || key == sf::Keyboard::Down ||
	     key == sf::Keyboard::Escape)
      {
	if (this->_curseur->size() != 0)
	  this->_curseur->pop_front();
	if (key == sf::Keyboard::Escape || (key == sf::Keyboard::Return && this->_pos2.front() == 4))
	  {
	    if (this->_curseur->size() != 0)
	      this->_pos2.pop_front();
	    return (PM_ERR);
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
    this->_curseur->push_front(sprite);
    return (PM_ENTER);
  };

};

#endif /* !MENUBASE_HPP_ */
