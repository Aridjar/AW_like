//
// TextMenuGetter.cpp for Text in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:24:25 2014 cedric paumard
// Last update Tue Jul 29 16:08:01 2014 cedric paumard
//

#include "MyText.hh"

sf::Text	&MyText::getMenu(void)
{
  return (this->_menu);
}

sf::Text	&MyText::getGame(void)
{
  return (this->_game);
}

sf::Text	&MyText::getUnit(void)
{
  return (this->_unit);
}

sf::Text	&MyText::getAI(void)
{
  return (this->_ai);
}

sf::Text	&MyText::getFog(void)
{
  return (this->_fog);
}

sf::Text	&MyText::getLaunch(void)
{
  return (this->_launch);
}

sf::Text	&MyText::getReturn(void)
{
  return (this->_return);
}

sf::Text	&MyText::getExit(void)
{
  return (this->_exit);
}
