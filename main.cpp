#include <iostream>

#include "Dominio.h"
#include "Entidade.h"
#include "Teste.h"

using namespace std;

int main(){

    cout << "--------------------------------------------------------------" << endl;
    cout << "Dominios" << endl;
    cout << "--------------------------------------------------------------" << endl;

    TUCodigo *testeCodigo = new TUCodigo();

    switch(testeCodigo -> run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA: cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    TUClasse *testeClasse= new TUClasse();

    switch(testeClasse -> run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA: cout << "FALHA   - CLASSE" << endl;
                                break;
    }

    TUDescricao *testeDescricao= new TUDescricao();

    switch(testeDescricao -> run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA: cout << "FALHA   - DESCRICAO" << endl;
                                break;
    }

    TUNumero *testeNumero= new TUNumero();

    switch(testeNumero -> run()){
        case TUNumero::SUCESSO: cout << "SUCESSO - NUMERO" << endl;
                                break;
        case TUNumero::FALHA: cout << "FALHA   - NUMERO" << endl;
                                break;
    }

    TUEndereco *testeEndereco= new TUEndereco();

    switch(testeEndereco -> run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA: cout << "FALHA   - ENDERECO" << endl;
                                break;
    }

    TUData *testeData= new TUData();

    switch(testeData -> run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA: cout << "FALHA   - DATA" << endl;
                                break;
    }

    TUMoeda *testeMoeda= new TUMoeda();

    switch(testeMoeda -> run()){
        case TUMoeda::SUCESSO: cout << "SUCESSO - MOEDA" << endl;
                                break;
        case TUMoeda::FALHA: cout << "FALHA   - MOEDA" << endl;
                                break;
    }

    TUNome testeNome;

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }

    TUEmail testeEmail;

    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }

    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    TUTelefone testeTelefone;

    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA   - TELEFONE" << endl;
                                break;
    }

    cout << "--------------------------------------------------------------" << endl;
    cout << "Entidades" << endl;
    cout << "--------------------------------------------------------------" << endl;

    TUImovel testeImovel;

    switch(testeImovel.run()){
        case TUImovel::SUCESSO: cout << "SUCESSO - IMOVEL" << endl;
                                break;
        case TUImovel::FALHA  : cout << "FALHA   - IMOVEL" << endl;
                                break;
    }

    TUProposta testeProposta;

    switch(testeProposta.run()){
        case TUProposta::SUCESSO: cout << "SUCESSO - PROPOSTA" << endl;
                                break;
        case TUProposta::FALHA  : cout << "FALHA   - PROPOSTA" << endl;
                                break;
    }

    TUUsuario testeUsuario;

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - USUARIO" << endl;
                                break;
    }


    return 0;
}


