//
// Param.cpp for Param in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 17:43:53 2014 cedric paumard
// Last update Sat Jul 26 22:04:40 2014 cedric paumard
//

#include "Param.hh"
#include <fstream>
#include <sstream>
#include <iostream>

Param::Param()
{
  this->_size_x = MIN_SIZE_X;
  this->_size_y = MIN_SIZE_Y;

  this->assignUnit(BEGIN_UNIT);
  this->assignMap(BEGIN_MAP);
  this->_type_name = MT_CITY;
  this->_ai = AI_EASY;
  this->_fog = BEGIN_FOG;
}

Param::~Param()
{
}

void	Param::assignUnit(const std::string _unit)
{
  std::ifstream	file(_unit.c_str(), std::ios::in);
  std::string	str;
  std::size_t	pos;
  int		nb;

  if (!file)
    {
      std::cerr << "Error: " << _unit << ": opening failed" << std::endl;
      return;
    }
  while(getline(file, str))
    {
      pos = str.find_first_of("=");
      std::istringstream (&str[pos + 1]) >> nb;
      this->_unit.insert(std::pair<std::string, int>(str.substr(0, pos), nb));
    }
  file.close();
}

void	Param::assignMap(const std::string _map)
{
  std::ifstream	file(_map.c_str(), std::ios::in);
  std::string	str;

  if (!file)
    {
      std::cerr << "Error: " << _map << ": opening failed" << std::endl;
      return;
    }
  file >> this->_size_x;
  file >> this->_size_y;
  while (getline(file, str))
    {
      if (str[0] != '\0')
	this->_map = this->_map + str + '\n';
    }
  file.close();
}
