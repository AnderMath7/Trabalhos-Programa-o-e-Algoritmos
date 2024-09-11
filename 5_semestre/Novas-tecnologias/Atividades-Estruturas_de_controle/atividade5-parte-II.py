"""
(Impondo privacidade com criptografia - parte II)

Uma empresa que quer enviar dados pela internet pediu-lhe
que escrevesse um programa que criptografe dados
a fim de que eles possam ser transmitidos com maior segurança.
Todos os dados são transmitidos como inteiros de quatro dígitos.
Seu aplicativo deve ler um inteiro de quatro dígitos
inserido pelo usuário e criptografá-lo da seguinte maneira:
substitua cada dígito pelo resultado da adição de 7 ao dígito,
obtendo o restante depois da divisão do novo valor por 10.
Troque então o primeiro dígito pelo terceiro e o segundo dígito pelo quarto.
Então, imprima o inteiro criptografado.
Escreva um aplicativo separado que receba a entrada de um inteiro de quatro
dígitos criptografado e o descriptografe 
"""

tamanhoNum = 0;
count = 0;
while tamanhoNum == 0 or tamanhoNum>4:
    count += count+1;
    if count>1:
        print("Número inválido!");
        

    numero = input("Insira um numero inteiro de 4 digitos: ");
    tamanhoNum = len(numero);
    numero = int(numero);


    if tamanhoNum < 5 and tamanhoNum > 0:
        digito3 = numero // 1000;
        if digito3 < 7:
            digito3 += 10;
        digito3 = digito3 - 7;
        numero %= 1000;

        digito4 = numero // 100;
        if digito4 < 7:
            digito4 += 10;
        digito4 = digito4 - 7;
        numero %= 100;

        digito1 = numero // 10;
        if digito1 < 7:
            digito1 += 10;
        digito1 = digito1 - 7;
        numero %= 10;

        digito2 = numero;
        if digito2 < 7:
            digito2 += 10;
        digito2 = digito2 - 7;

        print(f"Número descriptografado: {digito1}{digito2}{digito3}{digito4}");

