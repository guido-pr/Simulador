#ifndef DRAGONSLAYER
#define DRAGONSLAYER

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class DragonSlayer : public ArmaAtaque
{
    public:
        DragonSlayer(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif