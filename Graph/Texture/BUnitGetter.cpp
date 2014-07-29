//
// BUnitGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:32:59 2014 cedric paumard
// Last update Sun Jul 27 19:43:52 2014 cedric paumard
//

#include "MyTexture.hh"

sf::Texture	*MyTexture::getBUnitTank(void)const
{
  return (&this->_unit_tank_b);
}

sf::Texture	*MyTexture::getBUnitBers(void)const
{
  return (&this->_unit_bers_b);
}

sf::Texture	*MyTexture::getBUnitHeli(void)const
{
  return (&this->_unit_heli_b);
}

sf::Texture	*MyTexture::getBUnitMiss(void)const
{
  return (&this->_unit_miss_b);
}

sf::Texture	*MyTexture::getBUnitBaso(void)const
{
  return (&this->_unit_bazo_b);
}

sf::Texture	*MyTexture::getBUnitJeep(void)const
{
  return (&this->_unit_jeep_b);
}
