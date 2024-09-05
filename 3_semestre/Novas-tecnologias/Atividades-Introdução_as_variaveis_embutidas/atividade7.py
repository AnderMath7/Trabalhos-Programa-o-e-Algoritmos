"""
7. Escreva um programa que converta uma temperatura digitada em "Cˮ em “Fˮ. A fórmula para
essa conversão é:
F = 9/5C + 32
"""

tempC = int(input("Digite a temperatura em graus celcius: "));
tempF = int(((9/5)*tempC) + 32);

print(f"A temperatura em fahrenheit é {tempF}°F");
