#ifndef MINION
#define MINION
#include "../core-simulador-hpp/Personagem.hpp"
class Minion : public Personagem
{
    public:
        Minion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif