"""
1. O fatorial de um inteiro não negativo n é escrito como n! (pronuncia-se "n fatorial") e é definido
como segue:
n! = n · (n - 1) · (n - 2) · ... · 1 (para valores de n maiores ou iguais a 1) e n! = 1 (para n = 0)
Por exemplo, 5! = 5 · 4 · 3 · 2 · 1, o que dá 120.
Escreva um aplicativo que lê um inteiro não negativo, calcula e imprime seu fatorial.

"""

numero = int(input("Digite um número inteiro: "));
if numero < 0:
    numero = (numero * (-2))//2;

impressao = "O fatorial de " + str(numero) +"! = ";
fatorial = numero;

if numero == 0 or numero == 1:
    fatorial = 1;

if numero>1:
    impressao += str(numero) + " ·  ";
    numero-=1;
    while numero>1:
        if numero>1:
            fatorial *= numero;
            impressao += str(numero) + " · ";
            numero-=1;
if numero == 1:
    fatorial *= numero;
    impressao += str(numero);


if fatorial>1:
    impressao += " = " + str(fatorial);
    print(impressao);

if fatorial == 1:
    impressao += str(fatorial);
    print(impressao);
