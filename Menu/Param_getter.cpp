//
// Param_getter.cpp for Param in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 21:29:12 2014 cedric paumard
// Last update Sat Jul 26 21:35:52 2014 cedric paumard
//

#include "Param.hh"

std::map<std::string, int>	Param::getUnit(void)const
{
  return (this->_unit);
}

std::string			Param::getMap(void)const
{
  return (this->_map);
}

e_map_type			Param::getTypeName(void)const
{
  return (this->_type_name);
}

e_ai				Param::getAi(void)const
{
  return (this->_ai);
}

bool				Param::getFog(void)const
{
  return (this->_fog);
}

int				Param::getSizeX(void)const
{
  return (this->_size_x);
}

int				Param::getSizeY(void)const
{
  return (this->_size_y);
}
