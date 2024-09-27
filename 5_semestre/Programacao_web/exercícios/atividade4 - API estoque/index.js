const express = require('express');
const funcoes = require('./funcoes-estoque.js');

const app = express();

app.get('/', function(req, res){
    res.send('Controle de estoque:<br>Acrescente:  <br>"/adicionar/:id/:nome/:qtd" - Adiciona um novo produto ao estoque<br>"/listar" - Lista todos os produtos do estoque<br>"/remover/:id" - Remove um produto do estoque<br>"/editar/:id/:qtd" - Altera a quantidade de um produto do estoque');
})

app.get('/adicionar/:id/:nome/:quantidade', function(req, res){
    funcoes.adicionarProduto(req.params.id, req.params.nome, req.params.quantidade);
    res.send(`${req.params.nome} adicionado com sucesso!`);
})

app.get('/listar/', function(req, res){
    lista = funcoes.listarProdutos();
    res.send(lista);
})

app.get('/remover/:id', function(req, res){
    funcoes.removerProduto(req.params.id);
    res.send(`Produto: ${req.params.id} removido com sucesso!`);
})

app.get('/editar/:id/:qtd', function(req, res){
    funcoes.alterarQuantidadeProduto(req.params.id, req.params.qtd);
    res.send(`Produto: ${req.params.id} agora possui ${req.params.qtd} unidades!`);
})

const PORT = 8080;
app.listen(PORT, ()=>{
    console.log('app rodando na porta ' + PORT);
})