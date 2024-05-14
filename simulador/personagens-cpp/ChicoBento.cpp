#include "../personagens-hpp/ChicoBento.hpp"

ChicoBento::ChicoBento(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int ChicoBento::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int ChicoBento::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string ChicoBento::pegarDescricao() 
{
    return "Vai pru inferrrrno, lazarento!";
}