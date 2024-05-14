#ifndef CASCOTARTARUGA
#define CASCOTARTARUGA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class CascoTartaruga : public ArmaDefesa
{
    public:
        CascoTartaruga(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif