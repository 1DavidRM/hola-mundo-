#pragma once
class Alimento
{
private:
    /* data */
    int Energia;
public:
    Alimento(int Energia) {
        this->Energia=Energia;
    }

    ~Alimento() {}
    int ExtraerEnergia(){
        return Energia;
    }

    
};