//
// TextMenuGetter.cpp for Text in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:24:25 2014 cedric paumard
// Last update Tue Jul 29 20:39:32 2014 cedric paumard
//

#include "MyText.hh"

const sf::Text	&MyText::getMenu(void)const
{
  return (this->_menu);
}

const sf::Text	&MyText::getGame(void)const
{
  return (this->_game);
}

const sf::Text	&MyText::getUnit(void)const
{
  return (this->_unit);
}

const sf::Text	&MyText::getAI(void)const
{
  return (this->_ai);
}

const sf::Text	&MyText::getFog(void)const
{
  return (this->_fog);
}

const sf::Text	&MyText::getLaunch(void)const
{
  return (this->_launch);
}

const sf::Text	&MyText::getReturn(void)const
{
  return (this->_return);
}

const sf::Text	&MyText::getExit(void)const
{
  return (this->_exit);
}

const sf::Text	&MyText::getCredit(void)const
{
  return (this->_credit);
}
