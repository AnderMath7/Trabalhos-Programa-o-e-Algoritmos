"""
(Impondo privacidade com criptografia - parte I)

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
        digito1 = ((numero // 1000) + 7) % 10;
        numero %= 1000;

        digito2 = ((numero // 100) + 7) % 10;
        numero %= 100;

        digito3 = ((numero // 10) + 7) % 10;
        numero %= 10;

        digito4 = (numero + 7) % 10;

        print(f"Número criptografado: {digito3}{digito4}{digito1}{digito2}");
