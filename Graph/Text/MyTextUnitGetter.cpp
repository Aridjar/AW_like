//
// TextUnitGetter.cpp for MyText in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:13:24 2014 cedric paumard
// Last update Tue Jul 29 17:22:49 2014 cedric paumard
//

#include "MyText.hh"

const sf::Text	&MyText::getUnitNumber(void)const
{
  return (this->_unit_number);
}

const sf::Text	&MyText::getUnitName(void)const
{
  return (this->_unit_name);
}

const sf::Text	&MyText::getUnitTank(void)const
{
  return (this->_unit_tank);
}

const sf::Text	&MyText::getUnitMiss(void)const
{
  return (this->_unit_miss);
}

const sf::Text	&MyText::getUnitBers(void)const
{
  return (this->_unit_bers);
}

const sf::Text	&MyText::getUnitBaso(void)const
{
  return (this->_unit_baso);
}

const sf::Text	&MyText::getUnitJeep(void)const
{
  return (this->_unit_jeep);
}

const sf::Text	&MyText::getUnitHeli(void)const
{
  return (this->_unit_heli);
}
