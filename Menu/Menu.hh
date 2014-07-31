//
// Menu.hh for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 15:48:23 2014 cedric paumard
// Last update Thu Jul 31 14:21:04 2014 cedric paumard
//

#ifndef MENU_HH_
# define MENU_HH_

/*
** includes
*/

# include "Param.hh"
# include "MyTexture.hh"
# include "MyText.hh"

# include <list>

/*
** define
*/

# define RANDOM_NB -1

# define DIS_MENU_SELECT_X 503
# define DIS_MENU_SELECT_Y 320
# define DIS_MENU_SELECT_DIF 120

/*
** enum
*/

enum	e_position_menu
  {
    PM_ENTER = 0,
    PM_CHOOSE,
    PM_MAP,
    PM_UNIT,
  };

/*
** class
*/

class	Menu
{
  std::vector<Menu>	_graph;
  sf::RenderWindow	*_window;
  e_position_menu	_position;
  std::list<int>	_pos2;

protected:
  std::list<sf::Sprite>	_font;
  std::list<sf::Sprite>	_curseur;   //list curseur (push_front && pop front, n'afficher que le premier)
  std::list<sf::Text>	_text;
  MyText		_all_text;
  MyTexture		_texture;
  Param			_param;

public:
  Menu();
  virtual ~Menu();

  Menu				&operator=(Menu&);
  void				initGame();
  virtual std::list<sf::Text>	&modifyText();
  virtual int			modifyCurseur(int);
  virtual int			keyPressed(int);

  // void			keyPressed(int);

  //Getters
  const std::list<sf::Sprite>	&getBack(void)const;
  const std::list<sf::Sprite>	&getCurs(void)const;
  const std::list<sf::Text>	&getText(void)const;

  //Setters
  void				setWindow(sf::RenderWindow&);
  void				setTexture(MyTexture&);
  void				setText(MyText&);
};

#endif /* !MENU_HH_ */
