"""
6. Escreva um programa que leia a quantidade em segundos e imprima o resultado em dias,
horas, minutos e segundos.
"""

segundos = int(input("Digite os segundos: "));
minutos = 0;
horas = 0;
dias = 0;
if segundos>=60:
    minutos = segundos//60;
    segundos = segundos % 60;

if minutos>=60:
    horas = minutos//60;
    minutos = minutos % 60;

if horas>=24:
    dias = horas//24;
    horas = horas % 24;


print(f"TEMPO: {dias} dias, {horas} horas, {minutos} minutos e {segundos} segundos")
