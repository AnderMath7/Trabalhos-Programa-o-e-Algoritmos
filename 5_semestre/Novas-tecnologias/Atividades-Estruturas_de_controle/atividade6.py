"""
6. Faça um programa que leia um valor N qualquer, inteiro e positivo, calcule e mostre a seguinte
soma:
E = 1+(1/2!)+(1/3!)+...+(1/n!)
"""
n = int(input("Digite um número inteiro e positivo: "))
resultado = 1;
fatorial = 1;
for i in range (2, n+1):
    j = i;
    fatorial = i;
    print(F"fatorial de {fatorial} é:")
    while j > 1:
        fatorial *= (j-1);
        j-=1;
    resultado += 1/fatorial;
    print(fatorial)
print(f"A soma da série até 1/{n}! é: {resultado}")
