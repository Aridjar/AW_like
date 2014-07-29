//
// Param.hh for Param.hh in /home/paumar_a/projet
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Fri Jul 25 18:05:59 2014 cedric paumard
// Last update Sun Jul 27 13:51:50 2014 cedric paumard
//

#ifndef PARAM_HH_
# define PARAM_HH_

/*
** Include
*/

# include <string>
# include <map>
/*
** define
*/

# define RANDOM		"random"
# define MAX_SIZE_X	50
# define MIN_SIZE_X	20
# define MAX_SIZE_Y	50
# define MIN_SIZE_Y	20

# define BEGIN_MAP	"External_Objects/Map/map_01.map"
# define BEGIN_UNIT	"External_Objects/Map/map_01.uni"
# define BEGIN_FOG	false

# define NAME_HELI	"Helicoptere"
# define NAME_TANK	"Tank"
# define NAME_MISS	"Missile"
# define NAME_BERS	"Berserk"
/*
** enum
*/

enum e_map_type
  {
    MT_CITY = 0,
    MT_FOREST,
    MT_MOUNTAIN,
    MT_PLAIN,
    MT_SWAMP,
    MT_ROAD
  };

enum e_ai
  {
    AI_EASY = 0,
    AI_MEDIUMM,
    AI_STRONG,
    AI_PLAYER
  };

enum e_unit_type
  {
    UT_TANK = 0,
    UT_MISS,
    UT_HELI,
    UT_BERS,
  };
  
/*
** class
*/

class	Param
{
  std::map<std::string, int>	_unit; // syntaxe : MAP_NAME.uni
  std::string		_map; // syntaxe : MAP_NAME.map
  e_map_type		_type_name;
  e_ai			_ai;
  bool			_fog;
  int			_size_x;
  int			_size_y;

public:
  Param();
  ~Param();

  void	assignUnit(const std::string);
  void	assignMap(const std::string);

  // the following fonctions are in the Param_getter.cpp file
  std::map<std::string, int>	getUnit(void)const;
  std::string			getMap(void)const;
  e_map_type			getTypeName(void)const;
  e_ai				getAi(void)const;
  bool				getFog(void)const;
  int				getSizeX(void)const;
  int				getSizeY(void)const;
};

#endif /* !PARAM_HH_ */
