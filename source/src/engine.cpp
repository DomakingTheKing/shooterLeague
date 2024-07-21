//
// Created by byzac on 21/07/2024.
//

#include "engine.hpp"

Engine::Engine()
    : resolution(Vector2f(1280, 720)), // 16:9
      window(VideoMode(resolution.x,resolution.y), "Shooter League", Style::Default),
      car(Vector2f(400, 400),Vector2f(100, 60))
{
    window.setFramerateLimit(FPS); // 60
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