#ifndef __ROBOT_HPP__
#define __ROBOT_HPP__

#include <iostream>
#include "State.hpp"
using namespace std;

class Robot {
    protected:
        state statusRobot;
        // Implementasi dibuat di kelas turunan
        virtual void jalan() = 0;
        
    private:
    // access modifier:
        // lengkapi atribut
        string nama;
    
    public:
    // access modifier:
        // default constructor: atribut nama dibebaskan, status OFF
        Robot(){
            Robot::statusRobot = OFF;
            Robot::nama = "Robot General";
        }

        // user defined constructor: atribut nama, status diisi sesuai dengan parameter
        Robot(string nama, state status){
            Robot::nama = nama;
            Robot::statusRobot = status;
        }

        
        // copy constructor: copy semua atribut dari robot yang diberikan
        Robot(const Robot &robot){
            Robot::nama = robot.nama;
            Robot::statusRobot = robot.statusRobot;
        }
        
        // destructor: buat destructor kosong
        ~Robot(){

        }
        

        // Mencetak "Robot telah dinyalakan"
        void nyala(){
            Robot::statusRobot=ON;
            cout << "Robot telah dinyalakan" << endl;
        }

        // Mencetak "Robot telah dimatikan"
        void mati(){
            Robot::statusRobot=OFF;
            cout << "Robot telah dimatikan" << endl;
        }
    
};

#endif