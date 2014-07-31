//
// MyTexture.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 09:21:27 2014 cedric paumard
// Last update Wed Jul 30 15:45:44 2014 cedric paumard
//

#include "MyTexture.hh"
#include <iostream>

MyTexture::MyTexture()
{
  // this->initCase();
  // this->initBlueUnit();
  // this->initRedUnit();
  // this->initBlueBUnit();
  // this->initRedBUnit();
  this->initMenu();
  // this->initGame();
}

MyTexture::~MyTexture()
{
}

MyTexture	&MyTexture::operator=(MyTexture &_texture)
{
  if (this == &_texture)
    return (*this);
  return (_texture);
}

// void	MyTexture::initCase()
// {
//   if (!this->_case_mount.loadFromFile(PIC_MOUN))
//     std::cerr << "Load case's mountain failed.\n" << std::endl;
//   if (!this->_case_plai.loadFromFile(PIC_RIVE))
//     std::cerr << "Load case's plaine failed.\n" << std::endl;
//   if (!this->_case_rive.loadFromFile(PIC_PLAI))
//     std::cerr << "Load case's river failed.\n" << std::endl;
//   if (!this->_case_fore.loadFromFile(PIC_FORE))
//     std::cerr << "Load case's forest failed.\n" << std::endl;
//   if (!this->_case_city.loadFromFile(PIC_CITY))
//     std::cerr << "Load case's city failed.\n" << std::endl;
//   if (!this->_case_road.loadFromFile(PIC_ROAD))
//     std::cerr << "Load case's road failed.\n" << std::endl;
// }

// void	MyTexture::initBlueUnit()
// {
//   if (!this->_unit_tank_b.loadFromFile(PIC_TANK_B))
//     std::cerr << "Load unit's blue tank failed.\n" << std::endl;
//   if (!this->_unit_bers_b.loadFromFile(PIC_BERS_B))
//     std::cerr << "Load unit's blue berserker arrow failed.\n" << std::endl;
//   if (!this->_unit_heli_b.loadFromFile(PIC_HELI_B))
//     std::cerr << "Load unit's blue helicopter arrow failed.\n" << std::endl;
//   if (!this->_unit_miss_b.loadFromFile(PIC_MISS_b))
//     std::cerr << "Load unit's blue missil failed.\n" << std::endl;
//   if (!this->_unit__b.loadFromFile(PIC__B))
//     std::cerr << "Load unit's blue failed.\n" << std::endl;
//   if (!this->_unit__b.loadFromFile(PIC__B))
//     std::cerr << "Load unit's blue failed.\n" << std::endl;
// }

// void	MyTexture::initRedUnit()
// {
//   if (!this->_unit_tank_r.loadFromFile(PIC_TANK_R))
//     std::cerr << "Load unit's red tank failed.\n" << std::endl;
//   if (!this->_unit_rers_r.loadFromFile(PIC_RERS_R))
//     std::cerr << "Load unit's red berserker arrow failed.\n" << std::endl;
//   if (!this->_unit_heli_r.loadFromFile(PIC_HELI_R))
//     std::cerr << "Load unit's red helicopter arrow failed.\n" << std::endl;
//   if (!this->_unit_miss_r.loadFromFile(PIC_MISS_r))
//     std::cerr << "Load unit's red missil failed.\n" << std::endl;
//   if (!this->_unit__r.loadFromFile(PIC__R))
//     std::cerr << "Load unit's red failed.\n" << std::endl;
//   if (!this->_unit__r.loadFromFile(PIC__R))
//     std::cerr << "Load unit's red failed.\n" << std::endl;
// }

// void	MyTexture::initBlueBUnit()
// {
//   if (!this->_bunit_tank_b.loadFromFile(PIC_BTANK_B))
//     std::cerr << "Load big unit's blue tank failed.\n" << std::endl;
//   if (!this->_bunit_bers_b.loadFromFile(PIC_BBERS_B))
//     std::cerr << "Load big unit's blue berserker arrow failed.\n" << std::endl;
//   if (!this->_bunit_heli_b.loadFromFile(PIC_BHELI_B))
//     std::cerr << "Load big unit's blue helicopter arrow failed.\n" << std::endl;
//   if (!this->_bunit_miss_b.loadFromFile(PIC_BMISS_b))
//     std::cerr << "Load big unit's blue missil failed.\n" << std::endl;
//   if (!this->_bunit__b.loadFromFile(PIC_B_B))
//     std::cerr << "Load big unit's blue failed.\n" << std::endl;
//   if (!this->_bunit__b.loadFromFile(PIC_B_B))
//     std::cerr << "Load big unit's blue failed.\n" << std::endl;
// }

// void	MyTexture::initRedBUnit()
// {
//   if (!this->_bunit_tank_r.loadFromFile(PIC_BTANK_R))
//     std::cerr << "Load big unit's red tank failed.\n" << std::endl;
//   if (!this->_bunit_rers_r.loadFromFile(PIC_BRERS_R))
//     std::cerr << "Load big unit's red berserker arrow failed.\n" << std::endl;
//   if (!this->_bunit_heli_r.loadFromFile(PIC_BHELI_R))
//     std::cerr << "Load big unit's red helicopter arrow failed.\n" << std::endl;
//   if (!this->_bunit_miss_r.loadFromFile(PIC_BMISS_r))
//     std::cerr << "Load big unit's red missil failed.\n" << std::endl;
//   if (!this->_bunit__r.loadFromFile(PIC_B_R))
//     std::cerr << "Load big unit's red failed.\n" << std::endl;
//   if (!this->_bunit__r.loadFromFile(PIC_B_R))
//     std::cerr << "Load big unit's red failed.\n" << std::endl;
// }

void	MyTexture::initMenu()
{
  if (!this->_menu_select.loadFromFile(PIC_SELE_MENU))
    std::cerr << "Load menu's select failed.\n" << std::endl;
  if (!this->_menu_rarrow.loadFromFile(PIC_SELE_LARR))
    std::cerr << "Load menu's left arrow failed.\n" << std::endl;
  if (!this->_menu_larrow.loadFromFile(PIC_SELE_RARR))
    std::cerr << "Load menu's right arrow failed.\n" << std::endl;
  if (!this->_menu_back.loadFromFile(PIC_SELE_BACK))
    std::cerr << "Load menu's background failed.\n" << std::endl;

  if (!this->_menu_back_select.loadFromFile(PIC_MENU_CHOS))
    std::cerr << "Load menu's background selection failed.\n" << std::endl;
  if (!this->_menu_back_open.loadFromFile(PIC_MENU_OPEN))
    std::cerr << "Load menu's background opening failed.\n" << std::endl;

}

// void	MyTexture::initGame()
// {
//   if (!this->_game_select_curs.loadFromFile(PIC_SELE_CURS))
//     std::cerr << "Load game's selection curser failed.\n" << std::endl;
//   if (!this->_game_attak_curs.loadFromFile(PIC_ATTA_CURS))
//     std::cerr << "Load game's attack curser failed.\n" << std::endl;
//   if (!this->_game_move_fog.loadFromFile(PIC_MOVE_POSS))
//     std::cerr << "Load game's move possibility failed.\n" << std::endl;
//   if (!this->_game_attack_fog.loadFromFile(PIC_ATTA_POSS))
//     std::cerr << "Load game's attack possibility failed.\n" << std::endl;
//   if (!this->_game_visu_fog.loadFromFile(PIC_FOG))
//     std::cerr << "Load game's fog failed.\n" << std::endl;
//   if (!this->_game_red_back.loadFromFile(PIC_RED_BACK))
//     std::cerr << "Load game's red backgound failed.\n" << std::endl;
//   if (!this->_game_blue_back.loadFromFile(PIC_BLUE_BACK))
//     std::cerr << "Load game's blue background failed.\n" << std::endl;
//   if (!this->_game_right_back.loadFromFile(PIC_RIGH_BACK))
//     std::cerr << "Load game's right background failed.\n" << std::endl;
//   if (!this->_game_left_back.loadFromFile(PIC_LEFT_BACK))
//     std::cerr << "Load game's left background failed.\n" << std::endl;
// }
