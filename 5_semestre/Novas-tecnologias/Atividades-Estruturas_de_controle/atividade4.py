"""
4. Faça um programa que receba:
a) O código de um produto comprado,
supondo que a digitação do código do produto sejasempre válida, ou seja,
um número inteiro entre 1 e 10;
b) O peso do produto em quilos;
c) O código do país de origem,
supondo que a digitação do código do país seja sempre válida,
ou seja, um número entre 1 e 3.

Tabelas:
    +----------------+---------+         +-----------+-----------+
    | Código do país | Imposto |         | Código do | Preço por |
    |   de origem    |         |         |  Produto  |   Grama   |
    +----------------+---------+         +-----------+-----------+
    |       1        |    0%   |         |   1 a 4   |  $ 10,00  |
    +----------------+---------+         +-----------+-----------+
    |       2        |   15%   |         |   5 a 7   |  $ 25,00  |
    +----------------+---------+         +-----------+-----------+
    |       3        |   25%   |         |   8 a 10  |  $ 35,00  |
    +----------------+---------+         +-----------+-----------+

Calcule e mostre:
    - peso do produto convertido em gramas;
    - preço total do produto comprado;
    - valor do imposto,
    sabendo-se que o imposto é cobrado sobre o preço total do produto
    comprado e que depende do país de origem;
    - valor total, preço total do produto mais imposto.
"""

codigoProduto = 0;
codigoPais = 0;
count = 0;
while codigoProduto > 10 or codigoProduto < 1:
    count += count+1;
    if count > 1:
        print("Código do produto digiado é inválido!");

    codigoProduto = int(input("Digite o código do produto: "));
pesoKg = float(input("Digite o peso em kg do produto: "));
pesoG = pesoKg*1000;

count = 0;
while codigoPais > 3 or codigoPais < 1:
    count += count+1;
    if count > 1:
        print("Código de país inválido!");
    codigoPais = int(input("Digite o código do país de origem do produto: "));

if codigoProduto < 5:
    precoTotalProduto = 10 * pesoG;
if codigoProduto > 4 and codigoProduto < 8:
    precoTotalProduto = 25 * pesoG;
if codigoProduto >7:
    precoTotalProduto = 35 * pesoG;

if codigoPais == 1:
    imposto = precoTotalProduto * 0;
if codigoPais == 2:
    imposto = precoTotalProduto * 0.15;
if codigoPais == 3:
    imposto = precoTotalProduto * 0.25;


print(f"""
    peso do produto(g): {pesoG}g;
    preço total do produto: $ {precoTotalProduto:.2f};
    valor do imposto: $ {imposto:.2f};
    
  - valor total da compra: $ {imposto+precoTotalProduto:.2f}
""");
