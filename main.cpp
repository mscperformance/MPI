#include <iostream>
#include "AStar.hpp"
using namespace std;
int main()
{
    AStar::Generator generator;
    // Set 2d map size.
    generator.setWorldSize({10, 10});
    // You can use a few heuristics : manhattan, euclidean or octagonal.
    generator.setHeuristic(AStar::Heuristic::euclidean);
    generator.setDiagonalMovement(true);


    cout << "Generate path ..." << endl ;
    // This method returns vector of coordinates from target to source.
    //add collision
    generator.addCollision({5,5});
    generator.addCollision({5,6});
    generator.printWorld();
    auto path = generator.findPath({0, 0}, {10,10});

    for(auto& coordinate : path) {
        cout << coordinate.x << " " << coordinate.y << endl;
    }
}

