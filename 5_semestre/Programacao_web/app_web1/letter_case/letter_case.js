
function upper(palavra){
    if(typeof(palavra) == "string"){
        return palavra.toUpperCase();
    }else{
        return false;
    }
}

function lower(palavra){
    if(typeof(palavra) == "string"){
        return palavra.toLowerCase();
    }else{
        return false;
    }
}

module.exports = {
    upper,
    lower
}