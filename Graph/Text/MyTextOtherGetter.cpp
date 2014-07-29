//
// MyTextOtherGetter.cpp for MyText in /home/paumar_a/projet/git/AW_like/Graph/Text
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Jul 28 12:36:44 2014 cedric paumard
// Last update Tue Jul 29 16:09:00 2014 cedric paumard
//

#include "MyText.hh"

sf::Text	&MyText::getAIEasy(void)
{
  return (this->_ai_easy);
}

sf::Text	&MyText::getAIMedium(void)
{
  return (this->_ai_medium);
}

sf::Text	&MyText::getAIHard(void)
{
  return (this->_ai_hard);
}

sf::Text	&MyText::getAIPlayer(void)
{
  return (this->_ai_player);
}


sf::Text	&MyText::getFogWith(void)
{
  return (this->_fog_with);
}

sf::Text	&MyText::getFogWithout(void)
{
  return (this->_fog_without);
}
