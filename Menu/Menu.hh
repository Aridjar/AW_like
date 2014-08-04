//
// Menu.hh for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 15:48:23 2014 cedric paumard
// Last update Mon Aug  4 14:22:46 2014 cedric paumard
//

#ifndef MENU_HH_
# define MENU_HH_

/*
** includes
*/

# include "Param.hh"
# include "MyTexture.hh"
# include "MyText.hh"

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
    PM_ERR = -1,
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
  std::vector<sf::Text>	_mod;
  std::list<sf::Sprite>	_font;
  std::list<sf::Sprite>	_curseur;   //list curseur (push_front && pop front, n'afficher que le premier)
  std::list<sf::Text>	_text;
  std::vector<Menu*>	_graph;
  sf::RenderWindow	*_window;
  e_position_menu	_position;
  Param			_param;

protected:
  std::list<int>	_pos2;
  MyText		_all_text;
  MyTexture		_texture;

public:
  Menu();
  virtual ~Menu();

  Menu				&operator=(Menu&);
  void				initGame();
  virtual void			modifyInfo(int);
  virtual int			modifyText();
  virtual e_position_menu	modifyCurseur(int);
  virtual int			keyPressed(int);
  virtual int			modifyBack();

  // void			keyPressed(int);

  //Getters
  const std::vector<sf::Text>	&getMod(void)const;
  const std::list<sf::Sprite>	&getBack(void)const;
  const std::list<sf::Sprite>	&getCurs(void)const;
  const std::list<sf::Text>	&getText(void)const;
  const	e_position_menu		&getPosition(void)const;

  //Setters
  void				setWindow(sf::RenderWindow&);
  void				setTexture(MyTexture&);
  void				setText(MyText&);
};

#endif /* !MENU_HH_ */
