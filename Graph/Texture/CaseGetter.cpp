//
// CaseGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:20:37 2014 cedric paumard
// Last update Tue Jul 29 17:25:09 2014 cedric paumard
//

#include "MyTexture.hh"

const sf::Texture	&MyTexture::getCaseMoun(void)const
{
  return (this->_case_mount);
}

const sf::Texture	&MyTexture::getCasePlai(void)const
{
  return (this->_case_plai);
}

const sf::Texture	&MyTexture::getCaseRive(void)const
{
  return (this->_case_rive);
}

const sf::Texture	&MyTexture::getCaseFore(void)const
{
  return (this->_case_fore);
}

const sf::Texture	&MyTexture::getCaseCity(void)const
{
  return (this->_case_city);
}

const sf::Texture	&MyTexture::getCaseRoad(void)const
{
  return (this->_case_road);
}
