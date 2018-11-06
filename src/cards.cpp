#include <string>


using namespace std;


class Card
{
    string name="null";
    int mana=0;
    string desc="no desc";
    string card_pic_loc;

    Card(string name, int mana, string desc, string pic)
    {
        this->name = name;
        this->mana = mana;
        this->desc = desc;
        this->card_pic_loc= pic;
    }


    void draw()
    {

    }



};
