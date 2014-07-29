//
// MyText.cpp for MyText in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 10:55:19 2014 cedric paumard
// Last update Mon Jul 28 18:32:42 2014 cedric paumard
//

#include "MyText.hh"

MyText::MyText()
{
  this->_font.loadFromFile(FRONT_FILE);
  this->initMenu();
  this->initMap();
  this->initUnit();
  this->initOther();
}

MyText::~MyText()
{
}

MyText	&MyText::operator=(MyText &_text)
{
  if (this == &_text)
    return (*this);
  return (_text);
}

void	MyText::initMenu()
{
  this->_menu.setFont(this->_font);
  this->_menu.setString(TEXT_MENU);
  this->_game.setFont(this->_font);
  this->_game.setString(TEXT_GAME);
  this->_unit.setFont(this->_font);
  this->_unit.setString(TEXT_UNIT);
  this->_ai.setFont(this->_font);
  this->_ai.setString(TEXT_AI);
  this->_fog.setFont(this->_font);
  this->_fog.setString(TEXT_FOG);
  this->_launch.setFont(this->_font);
  this->_launch.setString(TEXT_LAUNCH);
  this->_return.setFont(this->_font);
  this->_return.setString(TEXT_RETURN);
  this->_exit.setFont(this->_font);
  this->_exit.setString(TEXT_EXIT);
}

void	MyText::initMap()
{
  this->_map_name.setFont(this->_font);
  this->_map_name.setString(TEXT_MAP_NAME);
  this->_map_sizex.setFont(this->_font);
  this->_map_sizex.setString(TEXT_MAP_SIZEX);
  this->_map_sizey.setFont(this->_font);
  this->_map_sizey.setString(TEXT_MAP_SIZEY);
  this->_map_type.setFont(this->_font);
  this->_map_type.setString(TEXT_MAP_TYPE);
  this->_map_visu.setFont(this->_font);
  this->_map_visu.setString(TEXT_MAP_VISU);
}

void	MyText::initUnit()
{
  this->_unit_number.setFont(this->_font);
  this->_unit_number.setString(TEXT_UNIT_NUMB);
  this->_unit_name.setFont(this->_font);
  this->_unit_name.setString(TEXT_UNIT_NAME);
  this->_unit_tank.setFont(this->_font);
  this->_unit_tank.setString(TEXT_UNIT_TANK);
  this->_unit_miss.setFont(this->_font);
  this->_unit_miss.setString(TEXT_UNIT_MISS);
  this->_unit_bers.setFont(this->_font);
  this->_unit_bers.setString(TEXT_UNIT_BERS);
  this->_unit_heli.setFont(this->_font);
  this->_unit_heli.setString(TEXT_UNIT_HELI);
  this->_unit_baso.setFont(this->_font);
  this->_unit_baso.setString(TEXT_UNIT_BAZO);
  this->_unit_jeep.setFont(this->_font);
  this->_unit_jeep.setString(TEXT_UNIT_JEEP);
}

void	MyText::initOther()
{
  this->_fog_with.setFont(this->_font);
  this->_fog_with.setString(TEXT_FOG_WITH);
  this->_fog_without.setFont(this->_font);
  this->_fog_without.setString(TEXT_FOG_OUT);
  this->_ai_easy.setFont(this->_font);
  this->_ai_easy.setString(TEXT_AI_EASY);
  this->_ai_medium.setFont(this->_font);
  this->_ai_medium.setString(TEXT_AI_MED);
  this->_ai_hard.setFont(this->_font);
  this->_ai_hard.setString(TEXT_AI_HARD);
  this->_ai_player.setFont(this->_font);
  this->_ai_player.setString(TEXT_PLAYER);
}
