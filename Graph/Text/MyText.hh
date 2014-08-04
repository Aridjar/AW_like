//
// MyText.hh for MyText in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 14:58:40 2014 cedric paumard
// Last update Mon Aug  4 14:56:17 2014 cedric paumard
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
# define TEXT_GAME	"Map"
# define TEXT_UNIT	"Unit"
# define TEXT_AI	"AI"
# define TEXT_FOG	"Fog"
# define TEXT_VISU	"Rendering"
# define TEXT_LAUNCH	"Launch"
# define TEXT_RETURN	"Return"
# define TEXT_EXIT	"Exit"
# define TEXT_CRED	"Credit"

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
  sf::Text	_visu;
  sf::Text	_launch;
  sf::Text	_return;
  sf::Text	_exit;
  sf::Text	_credit;

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
  const sf::Font	&getFont(void)const;

  //MyTextMenuGetter.cpp
  const sf::Text	&getMenu(void)const;
  const sf::Text	&getGame(void)const;
  const sf::Text	&getUnit(void)const;
  const sf::Text	&getAI(void)const;
  const sf::Text	&getFog(void)const;
  const sf::Text	&getVisu(void)const;
  const sf::Text	&getLaunch(void)const;
  const sf::Text	&getReturn(void)const;
  const sf::Text	&getExit(void)const;
  const sf::Text	&getCredit(void)const;

  //MyTextMapGetter.cpp
  const sf::Text	&getMapName(void)const;
  const sf::Text	&getMapSizeX(void)const;
  const sf::Text	&getMapSizeY(void)const;
  const sf::Text	&getMapType(void)const;
  const sf::Text	&getMapVisu(void)const;
  

  //MyTextUnitGetter.cpp
  const sf::Text	&getUnitNumber(void)const;
  const sf::Text	&getUnitName(void)const;
  const sf::Text	&getUnitTank(void)const;
  const sf::Text	&getUnitMiss(void)const;
  const sf::Text	&getUnitBers(void)const;
  const sf::Text	&getUnitBaso(void)const;
  const sf::Text	&getUnitJeep(void)const;
  const sf::Text	&getUnitHeli(void)const;

  //MyTextOtherGetter.cpp
  const sf::Text	&getAIEasy(void)const;
  const sf::Text	&getAIMedium(void)const;
  const sf::Text	&getAIHard(void)const;
  const sf::Text	&getAIPlayer(void)const;

  const sf::Text	&getFogWith(void)const;
  const sf::Text	&getFogWithout(void)const;
};

#endif /* !MYTEXT_HH_ */
