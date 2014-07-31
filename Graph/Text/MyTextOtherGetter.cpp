//
// MyTextOtherGetter.cpp for MyText in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:36:44 2014 cedric paumard
// Last update Tue Jul 29 17:22:57 2014 cedric paumard
//

#include "MyText.hh"

const sf::Text	&MyText::getAIEasy(void)const
{
  return (this->_ai_easy);
}

const sf::Text	&MyText::getAIMedium(void)const
{
  return (this->_ai_medium);
}

const sf::Text	&MyText::getAIHard(void)const
{
  return (this->_ai_hard);
}

const sf::Text	&MyText::getAIPlayer(void)const
{
  return (this->_ai_player);
}


const sf::Text	&MyText::getFogWith(void)const
{
  return (this->_fog_with);
}

const sf::Text	&MyText::getFogWithout(void)const
{
  return (this->_fog_without);
}
