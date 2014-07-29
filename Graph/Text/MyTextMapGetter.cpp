//
// MyTextMapGetter.cpp for MyText in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:30:31 2014 cedric paumard
// Last update Tue Jul 29 12:14:07 2014 cedric paumard
//

#include "MyText.hh"

sf::Text	&MyText::getMapName(void)
{
  return (this->_map_name);
}

sf::Text	&MyText::getMapSizeX(void)
{
  return (this->_map_sizex);
}

sf::Text	&MyText::getMapSizeY(void)
{
  return (this->_map_sizey);
}

sf::Text	&MyText::getMapType(void)
{
  return (this->_map_type);
}

sf::Text	&MyText::getMapVisu(void)
{
  return (this->_map_visu);
}
