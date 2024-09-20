const express = require('express');
const mustacheExpress = require('mustache-express')
const app = express();

//Definindo renderizador html
app.engine('html', mustacheExpress());
app.set('view engine', 'html');
//localização dos arquivos html
app.set('views', _dirname + '/views');

app.get('/', ()=>{
    res.render('index.html');
});

const PORT = 8080;
app.listen(PORT, ()=>{
    console.log('app rodando na porta ' + PORT);
});