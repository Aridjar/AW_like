//
// MyText.hh for MyText in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 14:58:40 2014 cedric paumard
// Last update Tue Jul 29 13:49:54 2014 cedric paumard
//

#ifndef MYTEXT_HH_
# define MYTEXT_HH_

/*
** includes
*/

# include <SFML/Graphics.hpp>
# include <SFML/Window.hpp>

/*
** define
*/

# define FRONT_FILE	"External_Objects/Font/Prosto_Sans_Bold.otf"

# define TEXT_MENU	"New Game"
# define TEXT_GAME	"map"
# define TEXT_UNIT	"unit"
# define TEXT_AI	"AI"
# define TEXT_FOG	"Fog"
# define TEXT_LAUNCH	"Launch"
# define TEXT_RETURN	"Return"
# define TEXT_EXIT	"Exit"

# define TEXT_UNIT_NAME	"Name"
# define TEXT_UNIT_NUMB	"Number"

# define TEXT_MAP_NAME	"Name"
# define TEXT_MAP_SIZEX	"Width"
# define TEXT_MAP_SIZEY	"Height"
# define TEXT_MAP_TYPE	"Type"
# define TEXT_MAP_VISU	"Visualization"

# define TEXT_AI_EASY	"Easy"
# define TEXT_AI_MED	"Medium"
# define TEXT_AI_HARD	"Hard"
# define TEXT_PLAYER	"Player"

# define TEXT_FOG_WITH	"With"
# define TEXT_FOG_OUT	"Without"

# define TEXT_UNIT_TANK	"Tank"
# define TEXT_UNIT_MISS	"Missils"
# define TEXT_UNIT_BERS	"Berserkers"
# define TEXT_UNIT_HELI	"Helicopters"
# define TEXT_UNIT_BAZO	"Bazooka"
# define TEXT_UNIT_JEEP	"Jeep"

/*
** class
*/

class MyText
{
  sf::Font	_font;

  sf::Text	_menu;
  sf::Text	_game;
  sf::Text	_unit;
  sf::Text	_ai;
  sf::Text	_fog;
  sf::Text	_launch;
  sf::Text	_return;
  sf::Text	_exit;

  sf::Text	_map_name;
  sf::Text	_map_sizex;
  sf::Text	_map_sizey;
  sf::Text	_map_type;
  sf::Text	_map_visu;

  sf::Text	_ai_easy;
  sf::Text	_ai_medium;
  sf::Text	_ai_hard;
  sf::Text	_ai_player;

  sf::Text	_fog_with;
  sf::Text	_fog_without;

  sf::Text	_unit_number;
  sf::Text	_unit_name;

  sf::Text	_unit_tank;
  sf::Text	_unit_miss;
  sf::Text	_unit_bers;
  sf::Text	_unit_heli;
  sf::Text	_unit_baso;
  sf::Text	_unit_jeep;

  void		initMenu();
  void		initMap();
  void		initUnit();
  void		initOther();
public:
  MyText();
  ~MyText();

  MyText &operator=(MyText&);

  //MyTextMenuGetter.cpp
  sf::Text	&getMenu(void);
  sf::Text	&getGame(void);
  sf::Text	&getUnit(void);
  sf::Text	&getAI(void);
  sf::Text	&getFog(void);
  sf::Text	&getLaunch(void);
  sf::Text	&getReturn(void);
  sf::Text	&getExit(void);

  //MyTextMapGetter.cpp
  sf::Text	&getMapName(void);
  sf::Text	&getMapSizeX(void);
  sf::Text	&getMapSizeY(void);
  sf::Text	&getMapType(void);
  sf::Text	&getMapVisu(void);
  

  //MyTextUnitGetter.cpp
  sf::Text	&getUnitNumber(void);
  sf::Text	&getUnitName(void);
  sf::Text	&getUnitTank(void);
  sf::Text	&getUnitMiss(void);
  sf::Text	&getUnitBers(void);
  sf::Text	&getUnitBaso(void);
  sf::Text	&getUnitJeep(void);
  sf::Text	&getUnitHeli(void);

  //MyTextOtherGetter.cpp
  sf::Text	&getAIEasy(void);
  sf::Text	&getAIMedium(void);
  sf::Text	&getAIHard(void);
  sf::Text	&getAIPlayer(void);

  sf::Text	&getFogWith(void);
  sf::Text	&getFogWithout(void);
};

#endif /* !MYTEXT_HH_ */
