//
// Created by byzac on 21/07/2024.
//

#include "engine.hpp"

Engine::Engine()
    : resolution(Vector2f(1280, 720)),
      window(VideoMode(resolution.x,resolution.y), "tuamamma", Style::Default)
{
    window.setFramerateLimit(FPS);
}


void Engine::run() {
    while (window.isOpen())
    {
        for (auto event = Event{}; window.pollEvent(event);)
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }

        draw();
    }
}