    #include <iostream>
    using namespace std;
    #include <Mascota.hpp>
    #include <Alimento.hpp>
    #include <list>
    #include <Dibujo.hpp>
    int main (int argc, char const *argv[]){
        Dibujo dibujo1("./assets/kokoa.txt");
        Dibujo dibujo2("./assets/auuu.txt");
        dibujo1.Dibujar();
        dibujo2.Dibujar();
        list<Dibujo> dibujos;
        // dibujos.push_front(dibujo1);
        // dibujos.push_front(dibujo2);


        Mascota m1,m2,m3;
       
        Alimento alimento(5);
        /*m1.Comer(alimento);
        m2.Comer(alimento);
        m3.Comer(alimento);*/
        list<Mascota>mascota;
        mascota.push_front(m1);
        mascota.push_front(m2);
        mascota.push_front(m3);

        for (auto &&mascotai : mascota)
        {
            mascotai.Comer(alimento);
        }
        
        
        for (auto &&mascotai : mascota)
        {
            cout<<"Mascota "<<mascotai.LeerEnergia()<<endl;

        }
        
    }