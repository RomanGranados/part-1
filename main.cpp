#include <iostream>
#include "video_game_catalog.h"

using namespace std;

int main()
{

//This array contain a catalog
// of ten video games.
videoGames videoGamesCatalog[10] =
{
    { "xbox", "FIFA", 'E', 2002, "Sports" },
    { "PC", "Minecraft", 'E', 2009, "Sandbox" },
    { "Atari", "Tetris", 'E', 1989, "Puzzle" },
    { "Playstation", "GTAV", 'M', 2013, "RolePlay" },
    { "xbox", "RedDeadRedemptionII", 'M', 2018, "RolePlay" },
    { "SNES", "SuperMarioWorld", 'E', 1990, "Platform" },
    { "xbox", "CallOfDuty:ModernWarfare", 'T', 2007, "Shooting" },
    { "Nintendo", "Goldeneye", 'T', 1997, "Shooting" },
    { "Atari", "Streetfighter", 'T', 1991, "Fighting" },
    { "Playstation", "GodOfWar", 'M', 2018, "RolePlay" }
};


cout << "The first videogame in my catalog is " << videoGamesCatalog[0].name << endl;
    
}
