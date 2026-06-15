using namespace std;
#ifndef cafetiere_h
#define cafetiere_h
#include <string>
class cafetiere {
    private:
       float niveaueau;
       string couleur;
    public: 
       cafetiere();
       ~cafetiere();
       void couler();
};
#endif