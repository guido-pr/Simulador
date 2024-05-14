#ifndef FEITICOPROTETOR
#define FEITICOPROTETOR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class FeiticoProtetor : public ArmaDefesa
{
    public:
        FeiticoProtetor(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif