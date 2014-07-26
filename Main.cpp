//
// Main.cpp for Main in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Sat Jul 26 16:03:52 2014 cedric paumard
// Last update Sat Jul 26 22:02:40 2014 cedric paumard
//

#include "Main.hh"

Main::Main()
{
  this->_window.create(sf::VideoMode(SIZE_WINDOW_X, SIZE_WINDOW_Y, 32), VIDEO_GAME_NAME); 
}

Main::~Main()
{
}

// int	Main::beginGame()
// {
//   while (this->_window.isOpen())
//     {
//       this->_window.draw(something);
//       this->_window.display();
//     }
// }
