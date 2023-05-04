//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//

#include "lab11.h"
#include <SFML/Graphics.hpp>
int lab11::start()
{
    sf::RenderWindow window(sf::VideoMode(800, 1200), "SFML works!");
    sf::CircleShape triangle(225.f, 3);
    triangle.setFillColor(sf::Color(255,255,255));
    triangle.setOutlineThickness(10.f);
    triangle.setOutlineColor(sf::Color(0, 0, 0));

    sf::RectangleShape rectangle(sf::Vector2f(400.f, 400.f));
    rectangle.setFillColor(sf::Color(255,255,255));
    rectangle.setOutlineThickness(10.f);
    rectangle.setOutlineColor(sf::Color(0, 0, 0));

    sf::RectangleShape smoke(sf::Vector2f(30.f, 150.f));
    smoke.setFillColor(sf::Color(255,255,255));
    smoke.setOutlineThickness(10.f);
    smoke.setOutlineColor(sf::Color(0, 0, 0));

    sf::RectangleShape door(sf::Vector2f(80.f, 300.f));
    door.setFillColor(sf::Color(255,255,255));
    door.setOutlineThickness(10.f);
    door.setOutlineColor(sf::Color(0, 0, 0));

    sf::RectangleShape view(sf::Vector2f(150.f, 175.f));
    view.setFillColor(sf::Color(255,255,255));
    view.setOutlineThickness(10.f);
    view.setOutlineColor(sf::Color(0, 0, 0));
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        smoke.setPosition(500,270);
        rectangle.setPosition(200,550);
        triangle.setPosition(175,205);
        door.setPosition(500,650);
        view.setPosition(250,650);
        window.clear(sf::Color(255,255,255));
        window.draw(smoke);
        window.draw(triangle);
        window.draw(rectangle);
        window.draw(door);
        window.draw(view);
        window.display();
    }

    return 0;
}