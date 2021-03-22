#include "Teste.h"

void TUCodigo::setUp(){
    codigo = new Codigo();
    this -> estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            this -> estado = FALHA;
    }
    catch(invalid_argument &excecao){
        this -> estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO)
            this -> estado = FALHA;
        return;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUClasse::setUp(){
    classe = new Classe();
    this -> estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete classe;
}

void TUClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(VALOR_VALIDO);
        if (classe->getClasse() != CLASSE_VALIDA1 && classe->getClasse() != CLASSE_VALIDA2 && classe->getClasse() != CLASSE_VALIDA3)
            this -> estado = FALHA;
    }
    catch(invalid_argument &excecao){
        this -> estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
    try{
        classe->setClasse(VALOR_INVALIDO);
    }
    catch(invalid_argument &excecao){
        if (classe->getClasse() == CLASSE_VALIDA1 || classe->getClasse() == CLASSE_VALIDA2 || classe->getClasse() == CLASSE_VALIDA3)
            this -> estado = FALHA;
        return;
    }
}

int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDescricao::setUp(){
    descricao = new Descricao();
    this -> estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() != VALOR_VALIDO)
            this -> estado = FALHA;
    }
    catch(invalid_argument &excecao){
        this -> estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescricao(VALOR_INVALIDO);
    }
    catch(invalid_argument &excecao){
        if (descricao->getDescricao() == VALOR_INVALIDO)
            this -> estado = FALHA;
        return;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNumero::setUp(){
    numero = new Numero();
    this -> estado = SUCESSO;
}

void TUNumero::tearDown(){
    delete numero;
}

void TUNumero::testarCenarioSucesso(){
    try{
        numero->setNumero(VALOR_VALIDO);
        if (numero->getNumero() != VALOR_VALIDO)
            this -> estado = FALHA;
    }
    catch(invalid_argument &excecao){
        this -> estado = FALHA;
    }
}

void TUNumero::testarCenarioFalha(){
    try{
        numero->setNumero(VALOR_INVALIDO);
    }
    catch(invalid_argument &excecao){
        if (numero->getNumero() == VALOR_INVALIDO)
            this -> estado = FALHA;
        return;
    }
}

int TUNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUData::setUp(){
    data = new Data();
    this -> estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            this -> estado = FALHA;
    }
    catch(invalid_argument &excecao){
        this -> estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
    }
    catch(invalid_argument &excecao){
        if (data->getData() == VALOR_INVALIDO)
            this -> estado = FALHA;
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEndereco::setUp(){
    endereco = new Endereco();
    this -> estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            this -> estado = FALHA;
    }
    catch(invalid_argument &excecao){
        this -> estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
    }
    catch(invalid_argument &excecao){
        if (endereco->getEndereco() == VALOR_INVALIDO)
            this -> estado = FALHA;
        return;
    }
}

int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUMoeda::setUp(){
    token = new Moeda();
    estado = SUCESSO;
}

void TUMoeda::tearDown(){
    delete token;
}

void TUMoeda::testarCenarioSucesso(){
    try{
        token->setValor(VALOR_VALIDO);
        if (token->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMoeda::testarCenarioFalha(){
    try{
        token->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (token->getValor() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUMoeda::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNome::setUp(){
    token = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete token;
}

void TUNome::testarCenarioSucesso(){
    try{
        token->setNome(VALOR_VALIDO);
        if (token->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        token->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (token->getNome() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEmail::setUp(){
    token = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete token;
}

void TUEmail::testarCenarioSucesso(){
    try{
        token->setEmail(VALOR_VALIDO);
        if (token->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        token->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (token->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    token = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete token;
}

void TUSenha::testarCenarioSucesso(){
    try{
        token->setSenha(VALOR_VALIDO);
        if (token->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        token->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (token->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTelefone::setUp(){
    token = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete token;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        token->setTelefone(VALOR_VALIDO);
        if (token->getTelefone() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        token->setTelefone(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (token->getTelefone() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUImovel::setUp(){
    entidade = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete entidade;
}

void TUImovel::testarCenario(){
    Codigo dominio1;
    dominio1.setCodigo(VALOR_VALIDO_CODIGO);
    entidade->setcodigo(dominio1);
    if(entidade->getcodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Classe dominio2;
    dominio2.setClasse(VALOR_VALIDO_CLASSE);
    entidade->setclasse(dominio2);
    if(entidade->getclasse().getClasse() != VALOR_VALIDO_CLASSE_STRING)
        estado = FALHA;

    Descricao dominio3;
    dominio3.setDescricao(VALOR_VALIDO_DESCRICAO);
    entidade->setdescricao(dominio3);
    if(entidade->getdescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;

    Endereco dominio4;
    dominio4.setEndereco(VALOR_VALIDO_ENDERECO);
    entidade->setendereco(dominio4);
    if(entidade->getendereco().getEndereco() != VALOR_VALIDO_ENDERECO)
        estado = FALHA;

    Data dominio5;
    dominio5.setData(VALOR_VALIDO_DATA_1);
    entidade->setdata_inicial(dominio5);
    if(entidade->getdata_inicial().getData() != VALOR_VALIDO_DATA_1)
        estado = FALHA;

    Data dominio6;
    dominio6.setData(VALOR_VALIDO_DATA_2);
    entidade->setdata_final(dominio6);
    if(entidade->getdata_final().getData() != VALOR_VALIDO_DATA_2)
        estado = FALHA;

    Numero dominio7;
    dominio7.setNumero(VALOR_VALIDO_NUMERO);
    entidade->sethospedes(dominio7);
    if(entidade->gethospedes().getNumero() != VALOR_VALIDO_NUMERO)
        estado = FALHA;

    Moeda dominio8;
    dominio8.setValor(VALOR_VALIDO_MOEDA);
    entidade->setvalor(dominio8);
    if(entidade->getvalor().getValor() != VALOR_VALIDO_MOEDA)
        estado = FALHA;
}

int TUImovel::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

void TUProposta::setUp(){
    entidade = new Proposta();
    estado = SUCESSO;
}

void TUProposta::tearDown(){
    delete entidade;
}

void TUProposta::testarCenario(){
    Codigo dominio1;
    dominio1.setCodigo(VALOR_VALIDO_CODIGO);
    entidade->setcodigo(dominio1);
    if(entidade->getcodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Data dominio2;
    dominio2.setData(VALOR_VALIDO_DATA_1);
    entidade->setdata_inicial(dominio2);
    if(entidade->getdata_inicial().getData() != VALOR_VALIDO_DATA_1)
        estado = FALHA;

    Data dominio3;
    dominio3.setData(VALOR_VALIDO_DATA_2);
    entidade->setdata_final(dominio3);
    if(entidade->getdata_final().getData() != VALOR_VALIDO_DATA_2)
        estado = FALHA;

    Numero dominio4;
    dominio4.setNumero(VALOR_VALIDO_NUMERO);
    entidade->sethospedes(dominio4);
    if(entidade->gethospedes().getNumero() != VALOR_VALIDO_NUMERO)
        estado = FALHA;

    Moeda dominio5;
    dominio5.setValor(VALOR_VALIDO_MOEDA);
    entidade->setvalor(dominio5);
    if(entidade->getvalor().getValor() != VALOR_VALIDO_MOEDA)
        estado = FALHA;
}

int TUProposta::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

void TUUsuario::setUp(){
    entidade = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete entidade;
}

void TUUsuario::testarCenario(){
    Nome dominio1;
    dominio1.setNome(VALOR_VALIDO_NOME);
    entidade->setnome(dominio1);
    if(entidade->getnome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Email dominio2;
    dominio2.setEmail(VALOR_VALIDO_EMAIL);
    entidade->setemail(dominio2);
    if(entidade->getemail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;

    Senha dominio3;
    dominio3.setSenha(VALOR_VALIDO_SENHA);
    entidade->setsenha(dominio3);
    if(entidade->getsenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;

    Telefone dominio4;
    dominio4.setTelefone(VALOR_VALIDO_TELEFONE);
    entidade->settelefone(dominio4);
    if(entidade->gettelefone().getTelefone() != VALOR_VALIDO_TELEFONE)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
