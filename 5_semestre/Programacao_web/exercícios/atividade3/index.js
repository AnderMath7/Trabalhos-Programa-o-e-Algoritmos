const calc = require('./calc/calc');
const express = require('express');

const app = express();

app.get('/', function(req, res){
    res.send('CALCULADORA:<br>Acrescente:  <br>"/somar/(numero1)/(numero2)" para somar<br>"/subtrair/(numero1)/(numero2)" para subtrair'+
        '<br>"/multiplicar/(numero1)/(numero2)" para multiplicar<br>"/dividir/(numero1)/(numero2)" para dividir'
    );
});

app.get('/somar/:n1/:n2', function(req, res){
    let resultado = parseInt(req.params.n1) + parseInt(req.params.n2);
    res.send(`${req.params.n1} + ${req.params.n2} = ${resultado}`);
})

app.get('/subtrair/:n1/:n2', function(req, res){
    let resultado = parseInt(req.params.n1) - parseInt(req.params.n2);
    res.send(`${req.params.n1} - ${req.params.n2} = ${resultado}`);
})

app.get('/multiplicar/:n1/:n2', function(req, res){
    let resultado = parseInt(req.params.n1) * parseInt(req.params.n2);
    res.send(`${req.params.n1} * ${req.params.n2} = ${resultado}`);
})

app.get('/dividir/:n1/:n2', function(req, res){
    let resultado = parseInt(req.params.n1) / parseInt(req.params.n2);
    res.send(`${req.params.n1} / ${req.params.n2} = ${resultado}`);
})

const PORT = 8080;
app.listen(PORT, ()=>{
    console.log('app rodando na porta ' + PORT);
})