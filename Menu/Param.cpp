//
// Param.cpp for Param in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 17:43:53 2014 cedric paumard
// Last update Mon Aug  4 02:41:51 2014 cedric paumard
//

#include "Param.hh"
#include <fstream>
#include <sstream>
#include <iostream>

Param::Param()
{
  this->_size_x = MIN_SIZE_X;
  this->_size_y = MIN_SIZE_Y;

  this->_type_name = MT_CITY;
  this->_ai = AI_EASY;
  this->_fog = BEGIN_FOG;

  this->initMapList();
}

Param::~Param()
{
}

void	Param::initMapList()
{
  this->_list_map.push_back(std::make_pair(std::string(NAME_MAP_01), std::string(PATH_MAP_01)));
  this->_list_map.push_back(std::make_pair(std::string(NAME_MAP_RAND), std::string("\0")));
  this->_list_map.push_back(std::make_pair(std::string(NAME_MAP_CUST), std::string("\0")));

  this->_list_unit.push_back(std::make_pair(std::string(NAME_UNIT_MAP), std::string(BEGIN_UNIT)));
  this->_list_unit.push_back(std::make_pair(std::string(NAME_MAP_RAND), std::string("\0")));
  this->_list_unit.push_back(std::make_pair(std::string(NAME_MAP_CUST), std::string("\0")));
}

void	Param::assignUnit(const std::string unit)
{
  std::ifstream	file(unit.c_str(), std::ios::in);
  std::string	str;
  std::string	tmp;
  std::size_t	pos;
  int		nb;

  if (!file)
    {
      std::cerr << "Error: " << unit << ": opening failed" << std::endl;
      return;
    }
  while(getline(file, str))
    {
      pos = str.find_first_of("=");
      std::istringstream (&str[pos + 1]) >> nb;
      tmp = str.substr(0, pos);
      this->_unit[tmp] = nb;
    }
  file.close();
}

void	Param::assignMap(std::string map)
{
  std::ifstream	file((map.c_str()), std::ios::in);
  std::string	str;

  this->_map.clear();
  if (!file)
    {
      std::cerr << "Error: " << map << ": opening failed" << std::endl;
      return;
    }
  file >> this->_size_x;
  file >> this->_size_y;
  while (getline(file, str))
    {
      if (str[0] != '\0')
  	this->_map = this->_map + str + '\n';
    }
  std::cout << this->_size_x << " <=> " << this->_size_y << std::endl;
  std::cout << this->_map << std::endl;
  file.close();
}
