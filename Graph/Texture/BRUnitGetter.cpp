//
// BRUnitGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:36:23 2014 cedric paumard
// Last update Sun Jul 27 19:44:15 2014 cedric paumard
//

#include "MyTexture.hh"

sf::Texture	*MyTexture::getBRUnitTank(void)const
{
  return (&this->_bunit_tank_r);
}

sf::Texture	*MyTexture::getBRUnitBers(void)const
{
  return (&this->_bunit_bers_r);
}

sf::Texture	*MyTexture::getBRUnitHeli(void)const
{
  return (&this->_bunit_heli_r);
}

sf::Texture	*MyTexture::getBRUnitMiss(void)const
{
  return (&this->_bunit_miss_r);
}

sf::Texture	*MyTexture::getBRUnitBaso(void)const
{
  return (&this->_bunit_baso_r);
}

sf::Texture	*MyTexture::getBRUnitJeep(void)const
{
  return (&this->_bunit_jeep_r);
}
