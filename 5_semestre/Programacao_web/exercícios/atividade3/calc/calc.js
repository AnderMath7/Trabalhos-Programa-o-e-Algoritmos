function soma(a,b){
    return a+b;
}

function sub(a,b){
    return a-b;
}

function mult(a,b){
    return a*b;
}

function div(a,b){
    if(b != 0){
        return a/b;
    }else{
        return false;
    }
}

module.exports = {
    soma,
    sub,
    mult,
    div
}