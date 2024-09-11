function transporMatriz(a){
    a_string = "";
    for(let linha = 0; linha < a.length; linha++){
        for(let coluna = 0; coluna < a[0].length; coluna++){
            a_string += "" + a[linha][coluna] + " ";
        }
        a_string += "\n";
    }
    console.log(a_string);

    aTransposta = "";
    for(coluna = 0; coluna < a[0].length; coluna++){
        for(linha = 0; linha < a.length; linha++){
            aTransposta += "" + a[linha][coluna] + " ";
        }
        aTransposta += "\n";
    }
    console.log(aTransposta);
}

let a = [
    [1,2],
    [3,4],
    [5,6]
];

transporMatriz(a);
/*for(let linha = 0; linha <= 2 ;linha++){
    for (let coluna = 0; coluna <= 1;coluna++){
        let b = [[],[]];
        b[linha][coluna] = a[coluna][linha];
    }
}   */
//console.log(a);
// console.log(b);