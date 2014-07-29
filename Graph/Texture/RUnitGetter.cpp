//
// RUnitGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:27:19 2014 cedric paumard
// Last update Sun Jul 27 19:43:36 2014 cedric paumard
//

#include "MyTexture.hh"

sf::Texture	*MyTexture::getRUnitTank(void)const
{
  return (&this->_unit_tank_r);
}

sf::Texture	*MyTexture::getRUnitBers(void)const
{
  return (&this->_unit_bers_r);
}

sf::Texture	*MyTexture::getRUnitHeli(void)const
{
  return (&this->_unit_heli_r);
}

sf::Texture	*MyTexture::getRUnitMiss(void)const
{
  return (&this->_unit_miss_r);
}

sf::Texture	*MyTexture::getRUnitBaso(void)const
{
  return (&this->_unit_baso_r);
}

sf::Texture	*MyTexture::getRUnitJeep(void)const
{
  return (&this->_unit_jeep_r);
}
