#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "Game.h"

int main()
{
    Game Avoid;

    while (Avoid.Running()) {

        Avoid.EventHandler();

        Avoid.Render();

    }
}
