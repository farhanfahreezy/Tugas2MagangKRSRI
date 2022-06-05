#include <iostream>
#include "RobotKRSRI.hpp"
#include "Boneka.hpp"
using namespace std;

int main() {
    RobotKRSRI robot("Robot KRSRI", OFF, 6);
    Boneka boneka("Zenitsu");

    robot.ambilBoneka(&boneka);
    robot.nyala();
    robot.jalan();
    robot.ambilBoneka();
    robot.jalan();
    robot.padamkanApi();
    robot.ambilBoneka(&boneka);
    robot.jalan();
}

// Result:
// Robot belum dinyalakan
// Robot telah dinyalakan
// Robot sedang berjalan
// Boneka telah diambil
// Robot sedang berjalan
// Api telah dipadamkan
// Boneka dengan nama Zenitsu telah diambil
// Robot sedang berjalan