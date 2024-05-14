#include "../personagens-hpp/Minion.hpp"

Minion::Minion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Minion::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Minion::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Minion::pegarDescricao() 
{
    return "Poopaye, banana, para tu!";
}