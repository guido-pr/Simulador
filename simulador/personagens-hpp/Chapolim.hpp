#ifndef CHAPOLIM
#define CHAPOLIM
#include "../core-simulador-hpp/Personagem.hpp"
class Chapolim : public Personagem
{
    public:
        Chapolim(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif