#ifndef VIDEO_GAME_CATALOG_HEADER_H
#define VIDEO_GAME_CATALOG_HEADER_H
#include <string>

using namespace std;

//Class declaration with its objects
class videoGames
{
private:
        //default constructor
        videoGames(){};

        // private attributes to avoid
        // user interference with data.
        string console;
        string name;
        char rating;
        int year;
        string type;

public:

        //constructor
        videoGames ( string gameConsole, string gameName, char gameRating, int gameYear, string gameType );
    
        // getters to access data
        // in private attributes.
        string getConsole()
         {
            return console;
         }
        string getName()
         {
           return name;
         }
        char getRating()
         {
            return rating;
         }
        int getYear()
         {
            return year;
         }
        string getType()
         {
            return type;
         }


};

#endif
