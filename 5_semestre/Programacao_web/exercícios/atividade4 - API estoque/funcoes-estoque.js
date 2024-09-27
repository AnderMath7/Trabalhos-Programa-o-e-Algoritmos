const estoque = [];
let produto = [];

function adicionarProduto(id, nome, quantidade){
    quantidade = parseInt(quantidade);
    produto = [id, nome, quantidade];
    estoque.push(produto);
  
}

function listarProdutos(){
    let listagem = "";
    for(x = 0; x < estoque.length; x++){
        for(i = 0; i < 3; i++){
            if(i == 0){
                listagem = listagem + 'Id: ' + estoque[x][i];
            }
            if(i == 1){
                listagem = listagem + '<br>Produto: ' + estoque[x][i];
            }
            if(i == 2){
                listagem = listagem + '<br>Quantidade: ' + estoque[x][i] + '<br><br>';
            }
        }
    }
    return listagem;
}

function removerProduto(id) {
    for (let i = 0; i < estoque.length; i++) {
        if (id == estoque[i][0]) { 
            estoque.splice(i, 1);
            break;
        }
    }
}

function alterarQuantidadeProduto(id, quantidade){
    for(x = 0; x < estoque.length; x++){
        if(id == estoque[x][0]){
            estoque[x][2] = quantidade;
        }
    }
}

module.exports = {
    estoque,
    adicionarProduto,
    listarProdutos,
    removerProduto,
    alterarQuantidadeProduto
}