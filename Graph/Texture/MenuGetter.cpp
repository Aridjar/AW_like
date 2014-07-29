//
// MenuGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 12:14:14 2014 cedric paumard
// Last update Mon Jul 28 18:13:45 2014 cedric paumard
//

#include "MyTexture.hh"

// sf::Texture	*MyTexture::getMenuSelect(void)const
// {
//   return (&this->_menu_select);
// }

// sf::Texture	*MyTexture::getMenuRArrow(void)const
// {
//   return (&this->_menu_rarrow);
// }

// sf::Texture	*MyTexture::getMenuLArrow(void)const
// {
//   return (&this->_menu_larrow);
// }

// sf::Texture	*MyTexture::getMenuBack(void)const
// {
//   return (&this->_menu_back);
// }

sf::Texture	&MyTexture::getMenuBackSelect(void)
{
  return (this->_menu_back_select);
}

sf::Texture	&MyTexture::getMenuBackOpen(void)
{
  return (this->_menu_back_open);
}
