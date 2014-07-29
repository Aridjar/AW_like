//
// CaseGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:20:37 2014 cedric paumard
// Last update Sun Jul 27 12:31:06 2014 cedric paumard
//

#include "MyTexture.hh"

sf::Texture	*MyTexture::getCaseMoun(void)const
{
  return (&this->_case_mount);
}

sf::Texture	*MyTexture::getCasePlai(void)const
{
  return (&this->_case_plai);
}

sf::Texture	*MyTexture::getCaseRive(void)const
{
  return (&this->_case_rive);
}

sf::Texture	*MyTexture::getCaseFore(void)const
{
  return (&this->_case_fore);
}

sf::Texture	*MyTexture::getCaseCity(void)const
{
  return (&this->_case_city);
}

sf::Texture	*MyTexture::getCaseRoad(void)const
{
  return (&this->_case_road);
}
