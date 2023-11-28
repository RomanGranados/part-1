## Initial Design Document:

**Title:** Video Game Catalog
**Student:** Roman Granados
**Course:** COSC 2436 Fall 2023
**Professor:** Alan Gandy

## Object:

The project will be centered around a collection of video games; cataloged in efficient ways to nagivate, manage and provide the user with a spedient solutions. Video games have wide variety of attributes, for the purposes of this project the focus will be on the main five descriptive attributes. 

**Console:** The specialized computer system designed for playing a video game.
**Name:** The official name/title given to a video game.
**Rating:** Assigned to games by various organizations to provide information regarding the content and age suitability.
**Year:** The year the game was released to the public.
**Type:** The category of a video game which refers to the style of gameplay.

## Data Structures:

**Array List:** An Array list will be used to store the video game catalog and its atributes. This allows a constant time access to it's indexes. 

**Hash Table:** A hash table also provides constant time access making it perfect for fast data retriaval to the user.

## Search Algorithms:

**Linear Search:** Linear Search provides the advantage of searching through an unsorted array; furthermore it has a Big O runtime of O(n) which is ideal for a small video game catalog. **_As catalog size increases performance speed decreases._**

**Hash-Maps:** A hash table provides O(1) constant time which provides an efficient way when searching by a unique identifier; in this case an attribute. Hash tables also provide the user the ability to seach for an item by name.

## User Interface: 

For a video game catalog a menu style user interface will be implemented using the main attributes as the primary options for the user to select and launch the program.

## Exception Handling:

The program will handle exceptions with 'If' statements to keep the user within bounds and redirecting the back to the last choice intered. 
