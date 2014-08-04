//
// Param_setter.cpp for Param in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 21:34:55 2014 cedric paumard
// Last update Mon Aug  4 17:29:45 2014 cedric paumard
//

#include "Param.hh"

void	Param::setFog()
{
  if (this->_fog == true)
    this->_fog = false;
  else
    this->_fog = true;
}
