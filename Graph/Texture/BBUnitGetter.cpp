//
// BBUnitGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:35:05 2014 cedric paumard
// Last update Sun Jul 27 19:43:43 2014 cedric paumard
//

#include "MyTexture.hh"

sf::Texture	*MyTexture::getBBUnitTank(void)const
{
  return (&this->_bunit_tank_b);
}

sf::Texture	*MyTexture::getBBUnitBers(void)const
{
  return (&this->_bunit_bers_b);
}

sf::Texture	*MyTexture::getBBUnitHeli(void)const
{
  return (&this->_bunit_heli_b);
}

sf::Texture	*MyTexture::getBBUnitMiss(void)const
{
  return (&this->_bunit_miss_b);
}

sf::Texture	*MyTexture::getBBUnitBaso(void)const
{
  return (&this->_bunit_bazo_b);
}

sf::Texture	*MyTexture::getBBUnitJeep(void)const
{
  return (&this->_bunit_jeep_b);
}
