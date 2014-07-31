//
// MenuGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:14:14 2014 cedric paumard
// Last update Wed Jul 30 12:00:17 2014 cedric paumard
//

#include "MyTexture.hh"

const sf::Texture	&MyTexture::getMenuSelect(void)const
{
  return (this->_menu_select);
}

const sf::Texture	&MyTexture::getMenuRArrow(void)const
{
  return (this->_menu_rarrow);
}

const sf::Texture	&MyTexture::getMenuLArrow(void)const
{
  return (this->_menu_larrow);
}

const sf::Texture	&MyTexture::getMenuBack(void)const
{
  return (this->_menu_back);
}

const sf::Texture	&MyTexture::getMenuBackSelect(void)const
{
  return (this->_menu_back_select);
}

const sf::Texture	&MyTexture::getMenuBackOpen(void)const
{
  return (this->_menu_back_open);
}
