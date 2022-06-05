#ifndef __BONEKA_HPP__
#define __BONEKA_HPP__

// DIBUAT HANYA JIKA MENGERJAKAN BONUS
#include <iostream>
using namespace std;

class Boneka {
    public:
    // access modifier:
        // lengkapi atribut
        string nama;
    
    // access modifier:
        // default constructor: atribut nama dibebaskan
        Boneka(){
            Boneka::nama="Boneqah";
        }

        // user defined constructor: atribut nama diisi sesuai dengan parameter
        Boneka(string nama){
            Boneka::nama=nama;
        }
        
        // copy constructor: copy semua atribut dari boneka yang diberikan
        Boneka(const Boneka &boneka){
            Boneka::nama=boneka.nama;
        }

        // destructor: buat destructor kosong
        ~Boneka(){

        }
        
        // mengembalikan nama boneka
        string getNama(){
            return Boneka::nama;
        }
};

#endif