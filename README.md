# Final_Project
This is an unfinished Battle Ship game . I was trying to make the setup look like this online game :https://battleship-game.org/en/.
To start exploring and learning about Qt Creator, I watched alot of Qt Creator youtube videos. This little series implementing a game
really helped me get started : https://www.youtube.com/watch?v=9lqhMLFHj3A&list=PLMgDVIa0Pg8WrI9WmZR09xAbfXyfkqKWy.

One of the most interesting things I learned from the video was the ability to add photos and graphics to objects in the scene. 
I added my photos to a folder within this project called Resources. 
It must have been very exciting for me because I have never had this in regular C++ before with just visual studios or Xcode.
This has pushed me to exploring the Graphics library that C++ does have and seeing what it has to offer. 

I have a working opponents grid that will randomly selected a valid grid filled with 10 ships: 1 4 unit, 2 3 unit, 3 2 unit, and 4 1 unit.
I stuggled alot with randomly filling a grid at compliation time. It was because it had so many precations like check if in bound, check if that component
isn't already a part of other ship. It was easier to fill a map with valid vectors of coordinates to ship and randomly select from that map.
To add to the randomness I would like to increase the number of valid vectors in that map to add to the randomness.

I did not finish the game because I still need to make the players grid work as in make the ships of the player moveable so the player can decide where to place their ships.
Also programmming a random shooter to select coordinates of the player grid and have it play with the current player. 


