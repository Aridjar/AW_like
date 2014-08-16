//
// MyEvent.cpp for MyEvent in /home/paumar_a/projet/git/AW_like/Event
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Wed Jul 30 16:03:04 2014 cedric paumard
// Last update Fri Aug 15 22:06:36 2014 cedric paumard
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

e_graph_position	MyEvent::operator()(e_graph_position position)
{
  int	tmp;

  while (this->_window->pollEvent(this->_event))
    {
      if (this->_event.type == sf::Event::KeyPressed)
	{
	  if (position == GP_MENU)
	    {
	      if ((tmp = this->_menu->keyPressed(this->_event.key.code)) == -1)
		return (GP_ERROR);
	      else if (tmp == PM_RENDER)
		return (GP_RENDER);
	    }
	  else if (position == GP_RENDER)
	    {
	      if ((tmp = this->_render->keyPressed(this->_event.key.code)) == -1)
		return (GP_ERROR);
	      else if (tmp == RP_MENU)
		{
		  this->_menu->setPosition(this->_menu->getLastPosition());
		  return (GP_MENU);
		}	    
	    }
	  else
	    std::cout << "Parti graphique" << std::endl;
	}
    }
  return (position);
}

void	MyEvent::setWindow(sf::RenderWindow &_window)
{
  this->_window = &_window;
}

void	MyEvent::setMenu(Menu &menu)
{
  this->_menu = &menu;
}

void	MyEvent::setRender(Render &render)
{
  this->_render = &render;
}
