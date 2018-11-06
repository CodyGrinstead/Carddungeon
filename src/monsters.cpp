#include <string>
#include <vector>


using namespace std;


class Monster_spell
{
    string name;
    string description;
    int damage;

    Monster_spell(string name, string desc, int damage)
    {
        this->name= name;
        this->description= desc;
        this->damage=damage;
    }

    void set_damage(int damage)
    {
        this->damage=damage;
    }

    void set_name(string name)
    {
        this->name=name;
    }
    
    void set_desc(string d)
    {
        this->description=d;
    }

    int get_damage()
    {
        return this->damage;
    }
    
    string get_name()
    {
        return this->name;
    }

    string get_desc()
    {
        return this->description;
    }
};

class Monster
{
    string name;
    int health;
    int x_pos=0, y_pos=0;
    vector <Monster_spell> spells;

    Monster(string name, int health, int x_pos, int y_pos)
    {
        this->name=name;
        this->x_pos=x_pos;
        this->y_pos=y_pos;
        this->health=health;
    }

    void set_health(int h)
    {
        this->health=h;
    }

    int get_health()
    {
        return this->health;
    }

    void set_x(int x)
    {
        this->x_pos=x;
    }
    void set_y(int y)
    {
        this->y_pos=y;
    }

    void set_pos(int x, int y)
    {
        this->x_pos=x;
        this->y_pos=y;
    }

    int get_x()
    {
        return this->x_pos;
    }

    int get_y()
    {
        return this->y_pos;
    }


    void draw()
    {

    }

    void delete_monster()
    {

    }

    void kill_monster()
    {
        if(this->health<=0) delete_monster();
    }

    void cast_spell()
    {

    }

    void set_spellbook(Monster_spell spell)
    {
        this->spells.push_back(spell);
    }
    



};

