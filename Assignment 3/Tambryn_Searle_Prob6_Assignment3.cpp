#include <iostream>
#include <string>

using namespace std;

class Spaceship {
private:
    int x, y;
    string position;        // prints {k: v}

public:
    Spaceship() {               // No argument constructor which sets x and y coordinates to 0 and initializes the position with "{x: 0, y:0, direction: 'up'}"
        position = "{x:0, y:0, direction:up}";
    }

    Spaceship(const std::string& path) {        // X, Y values
        int X = 0;
        int Y = 0;
        string facing[4] = {"up", "right", "down", "left"};
        int facingIndex = 0;
        for(int i = 0; i < path.size(); i++) {      // R, L are direction changes, A is one step in direction of facing
            if(path[i] == 'R') {
                facingIndex = (facingIndex + 1) % 4;        // Mod 4 to keep within index bounds
            }
            else if(path[i] == 'L') {
                facingIndex = (facingIndex -1 + 4) % 4;     // +4 to prevent from negative index
            }
            else if(path[i] == 'A') {
                if(facingIndex == 0) {          // Coordination (origin is upper left)
                    Y--;
                }
                if(facingIndex == 1) {
                    X++;
                }
                if(facingIndex == 2) {
                    Y++;
                }
                if(facingIndex == 3) {
                    X--;
                }
            }
        }
        position = "{x:" + std::to_string(X) + ", " + "y: " + std::to_string(Y) + ", " + "direction: " + "'" + facing[facingIndex] + "'" + "}";        // Convert X, Y to string to display
    }

    string getPosition() const {            // Constant accessor function (getPosition())- returns the position of the spaceship
        return position;
    }
};

int main(void) {
    Spaceship astrochuckler;
    std::cout << astrochuckler.getPosition() << std::endl;

    Spaceship lunacycle("RAALALL");
    std::cout << lunacycle.getPosition() << std::endl;
    
    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    std::cout << quirkonaut.getPosition() << std::endl;
    
    Spaceship zanyverse("");
    std::cout << zanyverse.getPosition() << std::endl;
    
    Spaceship cosmocomedy("LAAA");
    std::cout << cosmocomedy.getPosition() << std::endl;
    return 0;
   }