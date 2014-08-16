//
// MyEvent.hh for MyEvent in /home/paumar_a/projet/git/AW_like/Event
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Wed Jul 30 16:02:01 2014 cedric paumard
// Last update Thu Aug 14 11:31:09 2014 cedric paumard
//

#ifndef MYEVENT_HH_
# define MYEVENT_HH_

/*
** includes
*/

# include "Menu.hh"
# include "Render.hh"

/*
** enum
*/

enum	e_graph_position
  {
    GP_ERROR = -1,
    GP_MENU = 0,
    GP_GAME,
    GP_RENDER,
  };

/*
**
*/

class MyEvent
{
  sf::RenderWindow	*_window;
  sf::Event		_event;
  Render		*_render;
  Menu			*_menu;
  
public:
  MyEvent();
  ~MyEvent();

  e_graph_position	operator()(e_graph_position);
  void			setWindow(sf::RenderWindow&);
  void			setMenu(Menu&);
  void			setRender(Render&);
};

#endif /* !MYEVENT_HH_ */
