#ifndef __ROBOTKRSRI_HPP__
#define __ROBOTKRSRI_HPP__

#include <iostream>
using namespace std;
#include "Robot.hpp"
#include "Boneka.hpp"
#include "State.hpp"


class RobotKRSRI: public Robot {
    private:
    // access modifier:
        // lengkapi atribut
        // Boneka* boneka; (hanya jika mengerjakan bonus)
        string nama;
        int jumlah_kaki;
        Boneka* boneka;
        

    public:
    // access modifier:
        
        // default constructor: atribut nama dibebaskan, status OFF, jumlah kaki dibebaskan
        RobotKRSRI(){
            RobotKRSRI::nama = "Robot KRSRI";
            RobotKRSRI::statusRobot = OFF;
            RobotKRSRI::jumlah_kaki = 6;
        }

        // user defined constructor: atribut nama, status, dan jumlah_kaki diisi sesuai dengan parameter
        RobotKRSRI(string nama, state status, int jumlah_kaki){
            RobotKRSRI::nama = nama;
            RobotKRSRI::statusRobot = status;
            RobotKRSRI::jumlah_kaki = jumlah_kaki;
        }

        
        // copy constructor: copy semua atribut dari robot yang diberikan
        RobotKRSRI(const RobotKRSRI &robot){
            RobotKRSRI::nama = robot.nama;
            RobotKRSRI::statusRobot = robot.statusRobot;
            RobotKRSRI::jumlah_kaki = robot.jumlah_kaki;
        }
        
        // destructor: jika mengerjakan bonus, delete boneka. jika tidak, biarkan berupa destructor kosong
        ~RobotKRSRI(){

        }


        // Mencetak "Api telah dipadamkan" jika status robot ON
        void padamkanApi(){
            if (RobotKRSRI::statusRobot==ON){
                cout << "Api telah dipadamkan" << endl;
            } else {
                cout << "Robot belum dinyalakan" << endl;
            }
        }

        // Mencetak "Boneka telah diambil" jika status robot ON
        void ambilBoneka(){
            if (RobotKRSRI::statusRobot==ON){
                cout << "Boneka telah diambil" << endl;
            } else {
                cout << "Robot belum dinyalakan" << endl;
            }
        }
        

        
        // Mencetak "Boneka dengan nama <nama_boneka> telah diambil" jika status robot ON
        // Method ini dibuat hanya jika mengerjakan bonus
        void ambilBoneka(Boneka*){
            if (RobotKRSRI::statusRobot==ON){
                cout << "Boneka dengan nama " << boneka->getNama() <<" telah diambil" << endl;
            } else {
                cout << "Robot belum dinyalakan" << endl;
            }
        }
       
        // Mencetak "Robot sedang berjalan" jika status robot ON
        void jalan(){
            if (RobotKRSRI::statusRobot==ON){
                cout << "Robot sedang berjalan" << endl;
            } else {
                cout << "Robot belum dinyalakan" << endl;
            }
        }

};

#endif