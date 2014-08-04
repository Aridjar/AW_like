//
// MenuChoose.hpp for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Fri Aug  1 23:45:47 2014 cedric paumard
// Last update Mon Aug  4 15:17:57 2014 cedric paumard
//

#ifndef MENUCHOOSE_HPP_
# define MENUCHOOSE_HPP_

/*
** include
*/

#include "Menu.hh"
#include <iostream>

/*
** define
*/

# define DIS_CHOOSE_SELECT_X 186
# define DIS_CHOOSE_SELECT_X2 526
# define DIS_CHOOSE_SELECT_Y 48
# define DIS_CHOOSE_SELECT_DIF 120

/*
** class
*/

class MenuChoose : public Menu
{
  std::vector<sf::Text>	*_mod;
  std::list<sf::Sprite>	*_font;
  std::list<sf::Sprite>	*_curseur;   //list curseur (push_front && pop front, n'afficher que le premier)
  std::list<sf::Text>	*_text;
  Param			*_param;

  void		putArrow();
  void		rightArrow();
  void		leftArrow();
  void		putInfoText(std::string, unsigned int);

public:
  MenuChoose(std::list<sf::Sprite>*, std::list<sf::Sprite>*,
	     std::list<sf::Text>*, Param*, std::vector<sf::Text>*);
  ~MenuChoose();

  int			modifyText();
  void			modifyInfo(int);
  int			modifyBack();
  e_position_menu	execEnter();
  e_position_menu	modifyCurseur(int);
};

#endif /* !MENUCHOOSE_HPP_ */
