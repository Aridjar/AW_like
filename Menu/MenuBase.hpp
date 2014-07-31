//
// MenuBase.hpp for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Thu Jul 31 01:37:30 2014 cedric paumard
// Last update Thu Jul 31 14:37:43 2014 cedric paumard
//

#ifndef MENUBASE_HH_
# define MENUBASE_HH_

#include "Menu.hh"
#include <iostream>

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
  
  virtual int			modifyCurseur(int)
  {

    return (0);
  };

  virtual int			keyPressed(int)
  {

    return (0);
  };
};

#endif /* !MENUBASE_HH_ */
