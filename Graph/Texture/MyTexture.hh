//
// MyTexture.hh for MyTexture in /home/paumar_a/projet/git/AW_like/Graph
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 09:21:24 2014 cedric paumard
// Last update Wed Jul 30 15:48:09 2014 cedric paumard
//

#ifndef MYTEXTURE_HH_
# define MYTEXTURE_HH_

/*
** Includes
*/

# include <SFML/Graphics.hpp>
# include <SFML/Window.hpp>

/*
** define the path of textures for cases
*/

// # define PIC_MOUN	"External_Objects/Pictures/Case/"
// # define PIC_RIVE	"External_Objects/Pictures/Case/"
// # define PIC_PLAI	"External_Objects/Pictures/Case/"
// # define PIC_CITY	"External_Objects/Pictures/Case/"
// # define PIC_FORE	"External_Objects/Pictures/Case/"
// # define PIC_ROAD	"External_Objects/Pictures/Case/"

/*
** define the path of textures for units
*/


// # define PIC_TANK_R	"External_Objects/Pictures/Unit/"
// # define PIC_TANK_B	"External_Objects/Pictures/Unit/"
// # define PIC_BERS_R	"External_Objects/Pictures/Unit/"
// # define PIC_BERS_B	"External_Objects/Pictures/Unit/"
// # define PIC_MISS_R	"External_Objects/Pictures/Unit/"
// # define PIC_MISS_B	"External_Objects/Pictures/Unit/"
// # define PIC_HELI_R	"External_Objects/Pictures/Unit/"
// # define PIC_HELI_B	"External_Objects/Pictures/Unit/"
// # define PIC_BAZO_B	"External_Objects/Pictures/Unit/"
// # define PIC_BAZO_R	"External_Objects/Pictures/Unit/"
// # define PIC_JEEP_B	"External_Objects/Pictures/Unit/"
// # define PIC_JEEP_R	"External_Objects/Pictures/Unit/"

/*
** define the path of textures for big_units
*/

// # define PIC_BTANK_R	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BTANK_B	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BBERS_R	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BBERS_B	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BMISS_R	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BMISS_B	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BHELI_R	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BHELI_B	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BBAZO_B	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BBAZO_R	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BJEEP_B	"External_Objects/Pictures/Big_Unit/"
// # define PIC_BJEEP_R	"External_Objects/Pictures/Big_Unit/"

/*
** define the path of menu
*/

# define PIC_SELE_MENU	"External_Objects/Pictures/Menu/cadre_visualisation_menu.png"
# define PIC_SELE_LARR	"External_Objects/Pictures/Menu/gauche.png"
# define PIC_SELE_RARR	"External_Objects/Pictures/Menu/droite.png"
# define PIC_SELE_BACK	"External_Objects/Pictures/Menu/cadre_visualisation_selection.png"
# define PIC_MENU_OPEN	"External_Objects/Pictures/Menu/visualisation_menu.jpg"
# define PIC_MENU_CHOS	"External_Objects/Pictures/Menu/visualisation_selection.jpg"

/*
** define the path of the option game
*/

// # define PIC_SELE_CURS	"External_Objects/Pictures/Game/"
// # define PIC_ATTA_CURS	"External_Objects/Pictures/Game/"
// # define PIC_ATTA_POSS	"External_Objects/Pictures/Game/"
// # define PIC_MOVE_POSS	"External_Objects/Pictures/Game/"
// # define PIC_LEFT_BACK	"External_Objects/Pictures/Game/"
// # define PIC_RIGH_BACK	"External_Objects/Pictures/Game/"
// # define PIC_BLUE_BACK	"External_Objects/Pictures/Game/"
// # define PIC_RED_BACK	"External_Objects/Pictures/Game/"
// # define PIC_FOG	"External_Objects/Pictures/Game/"
// # define PIC_PAUS	"External_Objects/Pictures/Game/"

/*
** Class
*/

class MyTexture
{
  // sf::Texture	_case_mount;
  // sf::Texture	_case_plai;
  // sf::Texture	_case_rive;
  // sf::Texture	_case_fore;
  // sf::Texture	_case_city;
  // sf::Texture	_case_road;

  // sf::Texture	_unit_tank_r;
  // sf::Texture	_unit_bers_r;
  // sf::Texture	_unit_heli_r;
  // sf::Texture	_unit_miss_r;
  // sf::Texture	_unit_bazo_r;
  // sf::Texture	_unit_jeep_r;

  // sf::Texture	_unit_tank_b;
  // sf::Texture	_unit_bers_b;
  // sf::Texture	_unit_heli_b;
  // sf::Texture	_unit_miss_b;
  // sf::Texture	_unit_bazo_b;
  // sf::Texture	_unit_jeep_b;

  // sf::Texture	_bunit_tank_r;
  // sf::Texture	_bunit_bers_r;
  // sf::Texture	_bunit_heli_r;
  // sf::Texture	_bunit_miss_r;
  // sf::Texture	_bunit_bazo_r;
  // sf::Texture	_bunit_jeep_r;

  // sf::Texture	_bunit_tank_b;
  // sf::Texture	_bunit_bers_b;
  // sf::Texture	_bunit_heli_b;
  // sf::Texture	_bunit_miss_b;
  // sf::Texture	_bunit_bazo_b;
  // sf::Texture	_bunit_jeep_b;

  sf::Texture	_menu_select;
  sf::Texture	_menu_rarrow;
  sf::Texture	_menu_larrow;
  sf::Texture	_menu_back;
  sf::Texture	_menu_back_select;
  sf::Texture	_menu_back_open;

  // sf::Texture	_game_select_curs;
  // sf::Texture	_game_attack_curs;
  // sf::Texture	_game_move_fog;
  // sf::Texture	_game_attack_fog;
  // sf::Texture	_game_visu_fog;
  // sf::Texture	_game_red_back;
  // sf::Texture	_game_blue_back;
  // sf::Texture	_game_right_back;
  // sf::Texture	_game_left_back;

  // initialization
  // void	initCase();
  // void	initBlueUnit();
  // void	initRedUnit();
  // void	initBlueBUnit();
  // void	initRedBUnit();
  void	initMenu();
  // void	initGame();

public:
  MyTexture();
  ~MyTexture();
  MyTexture &operator=(MyTexture&);

  // getters list
  // CaseGetter.cpp
  // const sf::Texture	&getCaseMoun(void)const;
  // const sf::Texture	&getCasePlai(void)const;
  // const sf::Texture	&getCaseRive(void)const;
  // const sf::Texture	&getCaseFore(void)const;
  // const sf::Texture	&getCaseCity(void)const;
  // const sf::Texture	&getCaseRoad(void)const;

  // RUnitGetter.cpp
  // const sf::Texture	&getRUnitTank(void)const;
  // const sf::Texture	&getRUnitBers(void)const;
  // const sf::Texture	&getRUnitHeli(void)const;
  // const sf::Texture	&getRUnitMiss(void)const;
  // const sf::Texture	&getRUnitBazo(void)const;
  // const sf::Texture	&getRUnitJeep(void)const;

  // BUnitGetter.cpp
  // const sf::Texture	&getBUnitTank(void)const;
  // const sf::Texture	&getBUnitBers(void)const;
  // const sf::Texture	&getBUnitHeli(void)const;
  // const sf::Texture	&getBUnitMiss(void)const;
  // const sf::Texture	&getBUnitBazo(void)const;
  // const sf::Texture	&getBUnitJeep(void)const;

  // RBUnitGetter.cpp
  // const sf::Texture	&getRUnitTank(void)const;
  // const sf::Texture	&getRUnitBers(void)const;
  // const sf::Texture	&getRUnitHeli(void)const;
  // const sf::Texture	&getRUnitMiss(void)const;
  // const sf::Texture	&getRUnitBazo(void)const;
  // const sf::Texture	&getRUnitJeep(void)const;

  // BBUnitGetter.cpp
  // const sf::Texture	&getBUnitTank(void)const;
  // const sf::Texture	&getBUnitBers(void)const;
  // const sf::Texture	&getBUnitHeli(void)const;
  // const sf::Texture	&getBUnitMiss(void)const;
  // const sf::Texture	&getBUnitBazo(void)const;
  // const sf::Texture	&getBUnitJeep(void)const;

  // MenuGetter.cpp
  const sf::Texture	&getMenuSelect(void)const;
  const sf::Texture	&getMenuRArrow(void)const;
  const sf::Texture	&getMenuLArrow(void)const;
  const sf::Texture	&getMenuBack(void)const;
  const sf::Texture	&getMenuBackSelect(void)const;
  const sf::Texture	&getMenuBackOpen(void)const;

  // GameGetter.cpp
  // const sf::Texture	&getGameSelectCurs(void)const;
  // const sf::Texture	&getGameAttackCurs(void)const;
  // const sf::Texture	&getGamMoveFoge(void)const;
  // const sf::Texture	&getGameAttackFog(void)const;
  // const sf::Texture	&getGameVisuFog(void)const;
  // const sf::Texture	&getGameRedBack(void)const;
  // const sf::Texture	&getGameBlueBack(void)const;
  // const sf::Texture	&getGameRightBack(void)const;
  // const sf::Texture	&getGameLeftBack(void)const;
};

#endif /* !MYTEXTURE_HH_ */
