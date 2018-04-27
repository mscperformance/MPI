#include <iostream>
#include "AStar.hpp"
using namespace std;
int main()
{
    AStar::Generator generator;
    // Set 2d map size.
    generator.setWorldSize({25, 25});
    // You can use a few heuristics : manhattan, euclidean or octagonal.
    generator.setHeuristic(AStar::Heuristic::euclidean);
    generator.setDiagonalMovement(true);

    cout << "Generate path ..." << endl ;
    // This method returns vector of coordinates from target to source.
    //add collision
    generator.addCollision({10,10});
    auto path = generator.findPath({0, 0}, {20, 20});


    for(auto& coordinate : path) {
        cout << coordinate.x << " " << coordinate.y << endl;
    }
}

