//
// MyEvent.cpp for MyEvent in /home/paumar_a/projet/git/AW_like/Event
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Wed Jul 30 16:03:04 2014 cedric paumard
// Last update Thu Jul 31 01:09:45 2014 cedric paumard
//

#include "MyEvent.hh"
#include <iostream>

// map<type, pointeur sur fonction>
// vecteur de vecteur de vecteur

MyEvent::MyEvent()
{
}

MyEvent::~MyEvent()
{
}

int	MyEvent::operator()(e_graph_position position)
{
  while (this->_window->pollEvent(this->_event))
    {
      if (this->_event.type == sf::Event::KeyPressed)
	{
	  if (position == GP_MENU)
	    {
	      if (this->_menu->keyPressed(this->_event.key.code) == -1)
		return (-1);
	    }	    
	  else
	    std::cout << "Parti graphique" << std::endl;
	}
    }
  return (0);
}

void	MyEvent::setWindow(sf::RenderWindow &_window)
{
  this->_window = &_window;
}

void	MyEvent::setMenu(Menu &menu)
{
  this->_menu = &menu;
}
