//
// Render.cpp for Render in /home/paumar_a/projet/git/AW_like/Map
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Wed Aug  6 15:59:18 2014 cedric paumard
// Last update Sat Aug 16 14:12:05 2014 cedric paumard
//

#include "Render.hh"
#include <iostream>

Render::Render()
{
  this->_save = 1;
}

Render::~Render()
{
}

void			Render::prepareMap()
{
  std::vector<char>	vec;
  std::string	str = this->_param->getMap();
  // const bool	fog = this->_param->getFog();
  int		k = 0;
  int		i;

  this->_max_x = this->_param->getSizeX();
  this->_max_y = this->_param->getSizeY();
  for (int j = 0; j < this->_max_y; j++)
    {
      for (i = 0; i <= this->_max_x; i++) // le egal est là pour le \n
	vec.push_back(str[k++]); // faire une map correspondant à la case et à la lettre
      this->_map.push_back(vec);
      vec.clear();
    }
  this->viewMap(0, 0);
}

void			Render::viewMap(int add_x, int add_y)
{
  int			x;
  int			y;

  this->_save = 0;
  if (add_y != 0 && this->_pos_y + add_y >= 0 && this->_pos_y + add_y <= this->_max_y - VISU_Y_MAX)
    this->_pos_y += add_y;
  if (add_x != 0 && this->_pos_x + add_x >= 0 && this->_pos_x + add_x <= this->_max_x - VISU_X_MAX)
    this->_pos_x += add_x;
  this->_render.clear();
  for (y = this->_pos_y; y < VISU_Y_MAX + this->_pos_y; y++)
    {
      for (x = 0; x < VISU_X_MAX; x++)
	this->_render.push_back(this->_map[y][x + this->_pos_x]);
      this->_render.push_back('\n');
    }
}

int			Render::keyPressed(int key)
{
  if (key == sf::Keyboard::Escape)
    return (RP_MENU);
  else if (key == sf::Keyboard::Up)
    viewMap(0, -1);
  else if (key == sf::Keyboard::Down)
    viewMap(0, 1);
  else if (key == sf::Keyboard::Left)
    viewMap(-1, 0);
  else if (key == sf::Keyboard::Right)
    viewMap(1, 0);
  return (RP_REND);
}

const std::list<char>	&Render::getRender(void)const
{
  return (this->_render);
}

void	Render::setWindow(sf::RenderWindow &renderWindow)
{
  this->_window = &renderWindow;
}

void	Render::setParam(Param &param)
{
  this->_param = &param;
}
