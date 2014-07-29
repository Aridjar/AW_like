//
// TextUnitGetter.cpp for MyText in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:13:24 2014 cedric paumard
// Last update Tue Jul 29 16:09:23 2014 cedric paumard
//

#include "MyText.hh"

sf::Text	&MyText::getUnitNumber(void)
{
  return (this->_unit_number);
}

sf::Text	&MyText::getUnitName(void)
{
  return (this->_unit_name);
}

sf::Text	&MyText::getUnitTank(void)
{
  return (this->_unit_tank);
}

sf::Text	&MyText::getUnitMiss(void)
{
  return (this->_unit_miss);
}

sf::Text	&MyText::getUnitBers(void)
{
  return (this->_unit_bers);
}

sf::Text	&MyText::getUnitBaso(void)
{
  return (this->_unit_baso);
}

sf::Text	&MyText::getUnitJeep(void)
{
  return (this->_unit_jeep);
}

sf::Text	&MyText::getUnitHeli(void)
{
  return (this->_unit_heli);
}
