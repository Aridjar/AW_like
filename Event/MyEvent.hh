//
// MyEvent.hh for MyEvent in /home/paumar_a/projet/git/AW_like/Event
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Wed Jul 30 16:02:01 2014 cedric paumard
// Last update Thu Jul 31 01:09:02 2014 cedric paumard
//

#ifndef MYEVENT_HH_
# define MYEVENT_HH_

/*
** includes
*/

# include "Menu.hh"

/*
** enum
*/

enum	e_graph_position
  {
    GP_MENU = 0,
    GP_GAME,
  };

/*
**
*/

class MyEvent
{
  sf::RenderWindow	*_window;
  sf::Event		_event;
  Menu			*_menu;
  
public:
  MyEvent();
  ~MyEvent();

  int	operator()(e_graph_position);
  void	setWindow(sf::RenderWindow&);
  void	setMenu(Menu&);
};

#endif /* !MYEVENT_HH_ */
