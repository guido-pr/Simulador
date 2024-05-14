#ifndef CHICOBENTO
#define CHICOBENTO
#include "../core-simulador-hpp/Personagem.hpp"
class ChicoBento : public Personagem
{
    public:
        ChicoBento(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif