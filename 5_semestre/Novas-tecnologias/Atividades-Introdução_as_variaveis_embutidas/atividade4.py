"""
4. Escreva um aplicativo que insere um número consistindo em cinco dígitos do usuário, separa o
número em seus dígitos individuais e imprime os dígitos separados uns dos outros por três
espaços cada. Por exemplo, se o usuário digitar o número 42339, o programa deve imprimir: 4
2 3 3 9.

"""

numero = input("Digite um número: ")
digitos = len(numero)
numero = int(numero)

while (numero!=0):
    print(numero//(10**(digitos-1)), end="   ")
    numero %= (10**(digitos-1))
    digitos -=1
