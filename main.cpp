//
// main.cpp for main in /home/paumar_a/rendu/cpp_va
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sun Jul 20 00:53:23 2014 cedric paumard
// Last update Sat Jul 26 21:44:51 2014 cedric paumard
//

#include "Main.hh"
#include <iostream>

int	main()
{
  Main	_main;

  srand(time(NULL));
  std::cout << _main._menu._param.getMap() << std::endl;
  std::cout << _main._menu._param.getTypeName() << std::endl;
  std::cout << _main._menu._param.getAi() << std::endl;
  std::cout << _main._menu._param.getFog() << std::endl;
  std::cout << _main._menu._param.getSizeX() << std::endl;
  std::cout << _main._menu._param.getSizeY() << std::endl;
  // return (_main.beginGame());
}
