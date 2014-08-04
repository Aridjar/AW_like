//
// MenuChoose.cpp for MenuChoose in /home/paumar_a/projet/git/AW_like
// 
// Made by cedric paumard
// Login   <paumar_a@epitech.net>
// 
// Started on  Mon Aug  4 14:05:38 2014 cedric paumard
// Last update Mon Aug  4 15:36:53 2014 cedric paumard
//

#include "MenuChoose.hh"

MenuChoose::MenuChoose(std::list<sf::Sprite> *font, std::list<sf::Sprite> *curs,
		       std::list<sf::Text> *text, Param *param, std::vector<sf::Text> *mod)
{
  this->_font = font;
  this->_curseur = curs;
  this->_text = text;
  this->_param = param;
  this->_mod = mod;
}

MenuChoose::~MenuChoose()
{
}

void			MenuChoose::putArrow()
{
  const sf::Texture	&rarrow = this->_texture.getMenuRArrow();
  const sf::Texture	&larrow = this->_texture.getMenuLArrow();
  sf::Sprite		sprite;

  sprite.setTexture(rarrow);
  sprite.setPosition(sf::Vector2f(840, 85));
  this->_font->push_back(sprite);
  sprite.setPosition(sf::Vector2f(840, 205));
  this->_font->push_back(sprite);
  sprite.setPosition(sf::Vector2f(840, 325));
  this->_font->push_back(sprite);
  sprite.setPosition(sf::Vector2f(840, 445));
  this->_font->push_back(sprite);

  sprite.setTexture(larrow);
  sprite.setPosition(sf::Vector2f(1395, 85));
  this->_font->push_back(sprite);
  sprite.setPosition(sf::Vector2f(1395, 205));
  this->_font->push_back(sprite);
  sprite.setPosition(sf::Vector2f(1395, 325));
  this->_font->push_back(sprite);
  sprite.setPosition(sf::Vector2f(1395, 445));
  this->_font->push_back(sprite);
}

void			MenuChoose::leftArrow()
{
  if (this->_pos2.front() == 0)
    {
      this->_param->getListMap().push_front(this->_param->getListMap().back());
      this->_param->getListMap().pop_back();
    }
  else if (this->_pos2.front() == 1)
    {
      this->_param->getListUnit().push_front(this->_param->getListUnit().back());
      this->_param->getListUnit().pop_back();
    }  
  else if (this->_pos2.front() == 2)
    this->_param->setAi(this->_param->getAi() - 1);
  else if (this->_pos2.front() == 3)
    this->_param->setFog();
}

void			MenuChoose::rightArrow()
{
  if (this->_pos2.front() == 0)
    {
      this->_param->getListMap().push_back(this->_param->getListMap().front());
      this->_param->getListMap().pop_front();
    }
  else if (this->_pos2.front() == 1)
    {
      this->_param->getListUnit().push_back(this->_param->getListUnit().front());
      this->_param->getListUnit().pop_front();
    }  
  else if (this->_pos2.front() == 2)
    this->_param->setAi(this->_param->getAi() + 1);
  else if (this->_pos2.front() == 3)
    this->_param->setFog();
}

int			MenuChoose::modifyText()
{
  sf::Text		text;

  text = this->_all_text.getGame();
  text.setPosition(sf::Vector2f(425, 110));
  this->_text->push_front(text);
  text = this->_all_text.getUnit();
  text.setPosition(sf::Vector2f(420, 230));
  this->_text->push_front(text);
  text = this->_all_text.getAI();
  text.setPosition(sf::Vector2f(465, 350));
  this->_text->push_front(text);
  text = this->_all_text.getFog();
  text.setPosition(sf::Vector2f(430, 470));
  this->_text->push_front(text);

  text = this->_all_text.getVisu();
  text.setPosition(sf::Vector2f(650, 590));
  this->_text->push_front(text);
  text = this->_all_text.getLaunch();
  text.setPosition(sf::Vector2f(707, 710));
  this->_text->push_front(text);
  text = this->_all_text.getReturn();
  text.setPosition(sf::Vector2f(707, 830));
  this->_text->push_front(text);
  return (0);
}

void			MenuChoose::putInfoText(std::string str, unsigned int pos)
{
  sf::Text		text;
  sf::FloatRect		text_rect;

  text.setFont(this->_all_text.getFont());
  text.setString(str);
  text.setCharacterSize(60);
  text_rect = text.getLocalBounds();
  text.setOrigin(text_rect.left + text_rect.width/2.0f,
		 0);
  text.setPosition(sf::Vector2f(1180, 110 + 120 * pos));
  if (this->_mod->size() == pos)
    this->_mod->push_back(text);
  else
    this->_mod[0][pos] = text;
}

void			MenuChoose::modifyInfo(int key)
{

  if (key == sf::Keyboard::Left)
    this->leftArrow();
  else if (key == sf::Keyboard::Right)
    this->rightArrow();

  if (this->_pos2.front() == 0 || key == -1)
    this->putInfoText(this->_param->getListMap().front().first, 0);
  if (this->_pos2.front() == 1 || key == -1)
    this->putInfoText(this->_param->getListUnit().front().first, 1);
  if (this->_pos2.front() == 2 || key == -1)
    this->putInfoText("Faire une MAP", 2);
    // this->putInfoText(this->_param->getAi(), 2);
  if (this->_pos2.front() == 3 || key == -1)
    {
      if (this->_param->getFog() == true)
	this->putInfoText("Enable", 3);
      else
	this->putInfoText("Disable", 3);
    }
}

int			MenuChoose::modifyBack()
{
  const sf::Texture	&back = this->_texture.getMenuBackSelect();
  const sf::Texture	&sele = this->_texture.getMenuBack();
  sf::Sprite		sprite;

  this->_font->clear();
  sprite.setTexture(back);
  sprite.setPosition(sf::Vector2f(0, 0));
  this->_font->push_front(sprite);

  if (this->_curseur->size() <= 1)
    {
      sprite.setTexture(sele);
      sprite.setPosition(sf::Vector2f(DIS_CHOOSE_SELECT_X, DIS_CHOOSE_SELECT_Y));
      this->_curseur->push_front(sprite);
    }

  this->putArrow();
  this->_text->clear();
  this->modifyText();
  this->_pos2.push_front(0);
  this->modifyInfo(-1);
  return (0);
}


e_position_menu		MenuChoose::execEnter()
{
  if (this->_pos2.front() == 4)
    {
      this->_param->assignUnit(this->_param->getListUnit().front().second);
      this->_param->assignMap(this->_param->getListMap().front().second);
    }
  else if (this->_pos2.front() == 5)
    std::cout << "Launch Game" << std::endl;
  else if (this->_pos2.front() == 6)
    {
      if (this->_pos2.size() >= 2)
	this->_pos2.pop_front();
      if (this->_curseur->size() >= 2)
	this->_curseur->pop_front();
      return (PM_ENTER);
    }
  return (PM_CHOOSE);
}

e_position_menu		MenuChoose::modifyCurseur(int key)
{
  const sf::Texture	&sele = this->_texture.getMenuBack();
  sf::Sprite		sprite;
  int			pos_x = DIS_CHOOSE_SELECT_X;

  if (key == sf::Keyboard::Return)
    return (this->execEnter());
  else if (key == sf::Keyboard::Up || key == sf::Keyboard::Down ||
	   key == sf::Keyboard::Escape)
    {
      if (this->_curseur->size() >= 2)
	this->_curseur->pop_front();

      if (key == sf::Keyboard::Escape)
	{
	  if (this->_pos2.size() >= 2)
	    this->_pos2.pop_front();
	  return (PM_ENTER);
	}
      else if (key == sf::Keyboard::Down && this->_pos2.front() + 1 <= 6)
	this->_pos2.front() += 1;
      else if (key == sf::Keyboard::Up && this->_pos2.front() - 1 >= 0)
	this->_pos2.front() -= 1;
    }

  if (this->_pos2.front() >= 4)
    pos_x = DIS_CHOOSE_SELECT_X2;
  sprite.setTexture(sele);
  sprite.setPosition(sf::Vector2f(pos_x, DIS_CHOOSE_SELECT_Y +
				  DIS_CHOOSE_SELECT_DIF * this->_pos2.front()));
  this->_curseur->push_front(sprite);
  return (PM_CHOOSE);
}
