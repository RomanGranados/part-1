#include "video_game_catalog.h"

//Constructor definition using previous categories
// to initialize and use them in an array of video games.
videoGames::videoGames ( string gameConsole, string gameName, char gameRating, int gameYear, string gameType ) :
                        console ( gameConsole ),
                        name    ( gameName ),
                        rating  ( gameRating ),
                        year    ( gameYear ),
                        type    ( gameType )
                        { };
