#ifndef ISAACNEWTON
#define ISAACNEWTON
#include "../core-simulador-hpp/Personagem.hpp"
class IsaacNewton : public Personagem
{
    public:
        IsaacNewton(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif