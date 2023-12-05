#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "Game.h"

int main()
{
    // Startup
    Game Avoid;

    // Game Loop
    while (Avoid.Running()) {

        // Update
        Avoid.EventHandler();

        // Render
        Avoid.Render();

    }
}
