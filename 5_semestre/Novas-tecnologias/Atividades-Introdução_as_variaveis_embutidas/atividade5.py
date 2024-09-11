"""
5. Escreva um aplicativo que receba a, b e c, coeficientes de uma equação do segundo grau, e
calcule as raízes xʼ e xˮ através da fórmula de Báskara.

"""

print("CALCULADORA DE RAIZ DE SEGUNDO GRAU");
a = float(input("Digite o valor de a: "));
b = float(input("Digite o valor de b: "));
c = float(input("Digite o valor de c: "));

delta = (b**2) - (4*a*c);

if delta > 0:
    x1 = (-(b) + (delta ** (1/2))) / (2*a);
    x2 = (-(b) - (delta ** (1/2))) / (2*a);

print(f"As raizes da equação são {x1} e {x2}");
