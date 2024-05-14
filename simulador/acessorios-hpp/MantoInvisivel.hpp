#ifndef MANTOINVISIVEL
#define MANTOINVISIVEL

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class MantoInvisivel : public ArmaDefesa
{
    public:
        MantoInvisivel(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif