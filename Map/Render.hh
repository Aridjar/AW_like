//
// Render.hh for Render in /home/paumar_a/projet/git/AW_like/Map
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Wed Aug  6 13:38:54 2014 cedric paumard
// Last update Sat Aug 16 14:11:41 2014 cedric paumard
//

#ifndef RENDER_HH_
# define RENDER_HH_

/*
** Includes
*/

# include "Param.hh"
# include <SFML/Graphics.hpp>
# include <SFML/Window.hpp>

/*
** define
*/

# define VISU_X_MAX 20
# define VISU_Y_MAX 20

/*
** enum
*/

enum	e_render_position
  {
    RP_ERROR = -1,
    RP_REND = 0,
    RP_MENU,
  };

/*
** Class
*/

class	Render
{
  std::vector<std::vector<char> >	_map; //Case
  std::list<char>	_render; //sprite
  sf::RenderWindow	*_window;
  std::list<char>	_case;
  // Curseur		_curseur;
  // Graph		_graph;
  Param			*_param;
  int			_pos_x;
  int			_pos_y;
  int			_max_x;
  int			_max_y;
  
public:
  int			_save;
  Render();
  ~Render();

  void			prepareMap();
  int			keyPressed(int);
  void			viewMap(int, int);

  const std::list<char>	&getRender(void)const;
  void			setWindow(sf::RenderWindow &);
  void			setParam(Param &);
};

#endif /* !RENDER_HH_ */
