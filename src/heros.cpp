#include <string>
#include "cards.cpp"
#include <vector>

using namespace std;



class Hero{
    public:
        string name;
        string avatar_loc;
        string frame_loc;
        class card; //TODO create card class
        vector <card> decklist;

        Hero(string name, string avatar_loc, string frame_loc, vector <card> decklist)
        {
            this->name=name;
            this->avatar_loc=avatar_loc;
            this->frame_loc=frame_loc;
            this->decklist=decklist;
        
        }

    void draw_frame(){

    }
    
    void draw_avatar(){


    }
    
    string drawcard(){

        string card= "empty";
        return card;
    }

    void playcard(string card){


    }
        



};

