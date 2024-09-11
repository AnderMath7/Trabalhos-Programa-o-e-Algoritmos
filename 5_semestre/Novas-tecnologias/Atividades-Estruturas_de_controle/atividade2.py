"""
2. Numa certa agência bancária, as contas são identificadas por números de até seis dígitos
seguidos de um dígito verificador, calculado conforme exemplificado a seguir. Dado um número
de conta n, exiba o número de conta completo correspondente. Seja n  7314 o número da
conta. Adicionamos os dígitos de n e obtemos a soma s  4137  15; Calculamos o resto
da divisão de s por 10 e obtemos o dígito d  5. Número de conta completo: 0073145
"""

digitos = 0;
soma = 0;
while digitos == 0 or digitos>6:
    if digitos>6:
        print("Resposta inválida!\n");
    numero = input("Insira o número de 6 digitos da sua conta: ");
    digitos = len(numero);
    numero =int(numero);
auxiliar = numero;
digitos2 = digitos;
while(auxiliar!=0):
    soma +=(numero//(10**(digitos2-1)));
    auxiliar %=(10**(digitos2-1));
    digitos2 -=1;
soma=str(soma);
digitos2 = len(soma);
soma = int(soma);

digitoV = int(soma % 10);
impressao = "O número completo da conta é ";
zeros = "";
while (len(str(numero)) + len(zeros)) < 6:
    zeros+="0"


impressao += zeros + str(numero) + "-" + str(digitoV);
print(impressao);
