#ifndef EINSTEIN
#define EINSTEIN
#include "../core-simulador-hpp/Personagem.hpp"
class Einstein : public Personagem
{
    public:
        Einstein(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif