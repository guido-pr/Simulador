#include "../personagens-hpp/IsaacNewton.hpp"

IsaacNewton::IsaacNewton(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int IsaacNewton::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int IsaacNewton::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string IsaacNewton::pegarDescricao() 
{
    return "Deve-se aprender sempre, ate mesmo com um inimigo.";
}