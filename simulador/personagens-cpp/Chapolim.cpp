#include "../personagens-hpp/Chapolim.hpp"

Chapolim::Chapolim(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Chapolim::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Chapolim::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Chapolim::pegarDescricao() 
{
    return "Vou fulmina-lo a golpes com minha marreta!";
}