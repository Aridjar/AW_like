//
// MyTextMapGetter.cpp for MyText in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:30:31 2014 cedric paumard
// Last update Tue Jul 29 17:23:03 2014 cedric paumard
//

#include "MyText.hh"

const sf::Text	&MyText::getMapName(void)const
{
  return (this->_map_name);
}

const sf::Text	&MyText::getMapSizeX(void)const
{
  return (this->_map_sizex);
}

const sf::Text	&MyText::getMapSizeY(void)const
{
  return (this->_map_sizey);
}

const sf::Text	&MyText::getMapType(void)const
{
  return (this->_map_type);
}

const sf::Text	&MyText::getMapVisu(void)const
{
  return (this->_map_visu);
}
