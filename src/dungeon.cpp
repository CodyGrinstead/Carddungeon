#include <string>


using namespace std;


class dungeon{
    string tile_set;
    string asset_loc;
    bool north_ex, south_ex, east_ex, west_ex;

    dungeon(string tile, string loc)
    {
        this->tile_set=tile;
        this->asset_loc=loc;
    }

    void set_north(bool is)
    {
        this->north_ex=is;
    }
     void set_south(bool is)
    {
        this->south_ex=is;
    }
     void set_east(bool is)
    {
        this->east_ex=is;
    }
     void set_west(bool is)
    {
        this->west_ex=is;
    }

    bool get_north()
    {
        return this->north_ex;
    }
    bool get_south()
    {
        return this->south_ex;
    }
    bool get_east()
    {
        return this->east_ex;
    }
    bool get_west()
    {
        return this->west_ex;
    }

    string get_assest()
    {
        return this->asset_loc;
    }
    void set_asset(string loc)
    {
        this->asset_loc=loc;
    }

    void set_tile(string t)
    {
        this->tile_set=t;
    }
    string get_tile()
    {
        return this->tile_set;
    }
    



};