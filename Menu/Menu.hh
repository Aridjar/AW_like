//
// Menu.hh for Menu in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 15:48:23 2014 cedric paumard
// Last update Mon Jul 28 18:00:13 2014 cedric paumard
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

# define RANDOM_NB = -1

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

enum	e_position_curs
  {
    PC_CHOOSE = 0,
    PC_RETURN,
    PC_MAP_ADVANCED,
    PC_MAP,
    PC_SIZE_X,
    PC_SIZE_Y,
    PC_TYPE,
    PC_VIEW,
    PC_UNIT,
    PC_UNIT_TYPE,
    PC_NUMBER,
    PC_IA,
    PC_FOG,
    PC_LAUNCH,
    PC_EXIT
  };
  
/*
** class
*/

class	Menu
{
  std::list<e_position_menu>	_position;
  std::list<sf::Sprite>	_curseur;   //list curseur (push_front && pop front, n'afficher que le premier)
  std::list<sf::Text>	_text;
  sf::RenderWindow	*_window;
  MyTexture		_texture;
  MyText		_all_text;
  Param			_param;

  //liste de texte
  //liste des fleches
  

public:

  Menu();
  ~Menu();

  void			initGame();
  void			modifyText();
  // void			keyPressed(int);

  void			setWindow(sf::RenderWindow&);
  void			setTexture(MyTexture&);
  void			setText(MyText&);
};

#endif /* !MENU_HH_ */
