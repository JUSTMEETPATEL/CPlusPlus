#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <SFML/Graphics.hpp>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 800;
const int NUM_POINTS = 1000000;
const int NUM_VERTICES = 3;
const int VERTEX_RADIUS = 5;
const int POINT_RADIUS = 1;
const int MAX_ITERATIONS = 100000;

struct Point {
    float x, y;
    Point(float x, float y) : x(x), y(y) {}
};

void drawVertices(sf::RenderWindow& window, const std::vector<Point>& vertices) {
    sf::CircleShape vertexShape(VERTEX_RADIUS);
    vertexShape.setFillColor(sf::Color::White);
    for (const auto& vertex : vertices) {
        vertexShape.setPosition(vertex.x - VERTEX_RADIUS, vertex.y - VERTEX_RADIUS);
        window.draw(vertexShape);
    }
}

void drawPoint(sf::RenderWindow& window, const Point& point) {
    sf::CircleShape pointShape(POINT_RADIUS);
    pointShape.setFillColor(sf::Color::Red);
    pointShape.setPosition(point.x - POINT_RADIUS, point.y - POINT_RADIUS);
    window.draw(pointShape);
}

int main() {
    std::srand(std::time(nullptr));

    std::vector<Point> vertices = {
        {WINDOW_WIDTH / 2, 0},
        {0, WINDOW_HEIGHT},
        {WINDOW_WIDTH, WINDOW_HEIGHT}
    };

    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Chaos Game in Snow");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        drawVertices(window, vertices);

        Point currentPoint(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);
        for (int i = 0; i < NUM_POINTS; i++) {
            int vertexIndex = std::rand() % NUM_VERTICES;
            Point chosenVertex = vertices[vertexIndex];
            currentPoint.x = (currentPoint.x + chosenVertex.x) / 2;
            currentPoint.y = (currentPoint.y + chosenVertex.y) / 2;

            drawPoint(window, currentPoint);

            if (i > MAX_ITERATIONS) {
                break;
            }
        }

        window.display();
    }

    return 0;
}
