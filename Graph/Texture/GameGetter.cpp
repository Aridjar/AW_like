//
// GameGetter.cpp for MyTexture in /home/paumar_a/projet/git/AW_like/Graph/Texture
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 27 13:30:44 2014 cedric paumard
// Last update Tue Jul 29 17:27:17 2014 cedric paumard
//

#include "MyTexture.hh"

const sf::Texture	&MyTexture::getGameSelectCurs(void)const
{
  return (this->_game_select_curs);
}

const sf::Texture	&MyTexture::getGameAttackCurs(void)const
{
  return (this->_game_attack_curs);
}

const sf::Texture	&MyTexture::getGameMoveFog(void)const
{
  return (this->_game_move_fog);
}

const sf::Texture	&MyTexture::getGameAttackFog(void)const
{
  return (this->_game_select_attack_fog);
}

const sf::Texture	&MyTexture::getGameVisuFog(void)const
{
  return (this->_game_visu_fog);
}

const sf::Texture	&MyTexture::getGameRedBack(void)const
{
  return (this->_game_red_back);
}

const sf::Texture	&MyTexture::getGameBlueBack(void)const
{
  return (this->_game_blue_back);
}

const sf::Texture	&MyTexture::getGameRightBack(void)const
{
  return (this->_game_right_back);
}

const sf::Texture	&MyTexture::getGameLeftBack(void)const
{
  return (this->_game_left_back);
}
