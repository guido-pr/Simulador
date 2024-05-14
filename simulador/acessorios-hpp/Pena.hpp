#ifndef PENA
#define PENA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Pena : public ArmaAtaque
{
    public:
        Pena(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif