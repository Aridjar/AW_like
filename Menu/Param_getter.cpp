//
// Param_getter.cpp for Param in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 21:29:12 2014 cedric paumard
// Last update Sun Aug  3 12:05:09 2014 cedric paumard
//

#include "Param.hh"

std::map<std::string, int>	&Param::getUnit(void)
{
  return (this->_unit);
}

std::list<std::pair<std::string, std::string> >	&Param::getListMap(void)
{
  return (this->_list_map);
}

std::list<std::pair<std::string, std::string> >	&Param::getListUnit(void)
{
  return (this->_list_unit);
}

std::string			&Param::getMap(void)
{
  return (this->_map);
}

e_map_type			&Param::getTypeName(void)
{
  return (this->_type_name);
}

e_ai				&Param::getAi(void)
{
  return (this->_ai);
}

bool				&Param::getFog(void)
{
  return (this->_fog);
}

int				&Param::getSizeX(void)
{
  return (this->_size_x);
}

int				&Param::getSizeY(void)
{
  return (this->_size_y);
}
