-- MATHEUS ANDERSON DE SOUSA GOMES | UC22103034
-- CRIAÇÃO DO BANCO - LISTA DE EXERCÍCIOS ABAIXO

drop database if exists vendas; -- excluir database

create database if not exists vendas
default character set utf8 -- uft8 (8-bit Unicode Transformation Format - Pode representar qualquer caracter universal padrão do Unicode, sendo também compatível com o ASCII)
default collate utf8_general_ci;

use vendas;-- selecionar banco de dados
/*
Outros comandos:
show database; -- lista os banco de dados criados
show tables;  -- lista as tabelas do database
describe ou desc "nome da tabela"; -- descreve os itens da tabela
*/

CREATE TABLE IF NOT EXISTS clientes ( -- criar tabela
    id INT NOT NULL,
    nome VARCHAR(100) NOT NULL,
    endereco VARCHAR(200),
    cidade VARCHAR(50),
    cep CHAR(8),
    uf CHAR(2),
    cnpj VARCHAR(20) NOT NULL UNIQUE,
    ie varchar (30),
    PRIMARY KEY (id)
);

CREATE TABLE IF NOT EXISTS vendedores (
    id INT NOT NULL,
    nome VARCHAR(100) NOT NULL,
    salario DECIMAL(7 , 2 ) NOT NULL,
    faixa_comissao ENUM('A', 'B', 'C'),
    PRIMARY KEY (id)
);

CREATE TABLE IF NOT EXISTS pedidos (
    id INT NOT NULL,
    prazo_entrega INT UNSIGNED NOT NULL,
    id_cliente INT NOT NULL,
    id_vendedor INT NOT NULL,
    PRIMARY KEY (id),
    FOREIGN KEY (id_cliente)
        REFERENCES clientes (id),
    FOREIGN KEY (id_vendedor)
        REFERENCES vendedores (id)
);

CREATE TABLE IF NOT EXISTS produtos (
    id INT NOT NULL,
    unidade VARCHAR(5) NOT NULL,
    descricao VARCHAR(100) NOT NULL UNIQUE,
    valor_unitario DECIMAL(4 , 2 ),
    PRIMARY KEY (id)
);

CREATE TABLE IF NOT EXISTS itens_pedido (
    id_pedido INT NOT NULL,
    id_produto INT NOT NULL,
    quantidade INT UNSIGNED NOT NULL,
    PRIMARY KEY (id_pedido , id_produto), -- chave primária composta  
    FOREIGN KEY (id_pedido)
        REFERENCES pedidos (id),
    FOREIGN KEY (id_produto)
        REFERENCES produtos (id)
);

INSERT INTO clientes VALUES 
(720, "Ana" , "Rua 17 n. 19", "Niteroi", 24358310, "RJ", 12113231000134, 2134),
(870, "Flavio" , "Av. Pres. Vargas 10", "Sao Paulo", 2276393, "SP", 2253412693879, 4631),
(110, "Jorge" , "Rua Caiapo 13", "Curitiba", 30078500, "PR", 1451276498349, NULL),
(222, "Lucia" , "Rua Itabira 123 Loja 9", "Belo Horizonte", 2212439, "MG", 2831521393488, 2985),
(830, "Mauricio" , "Av. Paulista 1236 sl 2345", "Sao Paulo", 3012683, "SP", 3281698574656, 9343),
(130, "Edmar" , "Rua da Praia sn", "Salvador", 30079300, "BA", 234632842349, 7121),
(410, "Rodolfo" , "Largo da Lapa 27 sobrado", "Rio de Janeiro", 30078900, "RJ", 1283512823469, 7431),
(20, "Beth" , "Av. Climerio 45", "Sao Paulo", 25679300, "SP", 3248512673268, 9280),
(157, "Paulo" , "Tv, Moraes c/3", "Londrina", NULL, "PR", 328482233242, 1923),
(180, "Livio", "Av. Beira Mar n. 1256", "Florianopolis", 30077500, "SC", 1273657123474,NULL),
(260, "Susana", "Rua Lopes Mendes 12", "Niteroi", 30046500, "RJ", 217635712329, 2530),
(290, "Renato", "Rua Meireles 123 bl.2 sl. 345", "Sao Paulo", 30225900, "SP", 1327657112314, 1820),
(390, "Sebastiao", "Rua da Igreja 10", "Uberaba", 30438700, "MG",  321765472133, 9071),
(234, "Jose", "Quadra 3 bl. 3 st. 1003", "Brasilia", 22841650, "DF", 2176357612323, 293);

INSERT INTO vendedores VALUES 
(209, "José", 1800, 'C'),
(111, "Carlos", 2490, 'A'),
(11, "João", 2780, 'C'),
(240, "Antônio", 9500, 'C'),
(720, "Felipe", 4600, 'A'),
(213, "Jonas", 2300, 'A'),
(101, "João", 2650, 'C'),
(310, "Josias", 870, 'B'),
(250, "Maurício", 2930, 'B');

INSERT INTO produtos VALUES 
(25, "Kg", "Queijo", 0.97),
(31, "BAR", "Chocolate", 0.87),
(78, "L", "Vinho", 2),
(22, "M", "Linho", 0.11),
(30, "SAC", "Açúcar", 0.3),
(53, "M", "Linha", 1.8),
(13, "G", "Ouro", 6.18),
(45, "M", "Madeira", 0.25),
(87, "M", "Cano", 1.97),
(77, "M", "Papel", 1.05);

INSERT INTO pedidos VALUES
(121,20,410,209),
(97,20,720,101),
(101,15,720,101),
(137,20,720,720),
(148,20,720,101),
(189,15,870,213),
(104,30,110,101),
(203,30,830,250),
(98,20,410,209),
(143,30,20,111),
(105,15,180,240),
(111,20,260,240),
(103,20,260,11),
(91,20,260,11),
(138,20,260,11),
(108,15,290,310),
(119,30,390,250),
(127,10,410,11);

INSERT INTO itens_pedido VALUES 
(97, 22, 31),
(98, 25, 77),
(101, 30, 31),
(103, 31, 78),
(104, 45, 13),
(105, 53, 77),
(108, 77, 45),
(111, 78, 31),
(119, 87, 77),
(121, 13, 25),
(127, 22, 78),
(137, 25, 53),
(138, 30, 31),
(143, 31, 78),
(148, 45, 31),
(189, 53, 78),
(203, 77, 78),
(91, 78, 25),
(97, 87, 78),
(98, 13, 53),
(101, 22, 77),
(103, 13, 22),
(104, 30, 77),
(105, 31, 53),
(108, 45, 13),
(119, 13, 77),
(121, 53, 13),
(127, 13, 22),
(137, 45, 53),
(138, 13, 13);

-- Listar todos os produtos com as respectivas descrições, unidades e valores unitários, obtendo o seguinte resultado:
SELECT id, unidade, descricao, valor_unitario
FROM produtos;

-- Listar todo o conteúdo de vendedor, obtendo o seguinte resultado, usando *:
SELECT*
FROM vendedores;

-- Listar da tabela CLIENTE o CNPJ, o nome do cliente e seu endereço, obtendo o seguinte resultado:
SELECT cnpj, nome, endereco
FROM clientes;

-- Listar todas as cidades em que há clientes
SELECT DISTINCT cidade AS cidades_clientes
FROM clientes;

-- Listar todas as cidades e estados em que há clientes
SELECT DISTINCT cidade, uf
FROM clientes;

-- Quais são os clientes que moram em Niterói?
SELECT* -- seleção de colunas
FROM clientes -- seleção de tabelas
WHERE cidade = 'Niterói'; -- seleção de linhas

-- Listar os produtos que tenham unidade igual a ‘M’ e valor unitário igual a R$ 1,05 da tabela produto:
SELECT*
FROM produtos
WHERE unidade = 'M' AND valor_unitario = 1.05;

-- Listar o código, a descrição e o valor unitario dos produtos que tenham o valor unitário na faixa de R$ 0,32 até R$ 2,00:
SELECT id, descricao, valor_unitario
FROM produtos
WHERE valor_unitario BETWEEN 0.32 AND 2;

-- Listar oo código, a descrição e o valor unitario dos produtos que NÃO tenham o valor unitário na faixa de R$ 0,32 até R$ 2,00:
SELECT id, descricao, valor_unitario
FROM produtos
WHERE valor_unitario NOT BETWEEN 0.32 AND 2;

-- Listar os nomes entre Ana e Jorge
SELECT nome
FROM clientes
WHERE nome BETWEEN 'Ana' AND 'Jorge';

-- Listar Listar os vendedores com faixas de comissão A ou B
SELECT nome, faixa_comissao
FROM vendedores
WHERE faixa_comissao = 'A' OR faixa_comissao = 'B';

SELECT * FROM vendedores WHERE faixa_comissao IN ('A', 'B');

-- Listar todos os clientes SEM Inscrição Estadual (IE)
SELECT *
FROM clientes
WHERE ie IS NULL;

-- Listar todos os clientes COM Inscrição Estadual (IE)
SELECT * FROM clientes
WHERE ie IS NOT NULL;

-- Listar apenas os dois primeiros vendedores
SELECT * FROM vendedores
LIMIT 2;

-- Listar todos os produtos que tenham o seu nome começando por Q:
SELECT * FROM produtos
WHERE descricao LIKE 'Q%';

-- Listar os vendedores que não começam por ‘Jo’:
SELECT * FROM vendedores
WHERE nome NOT LIKE 'Jo%';

-- Listar todos os produtos cujo nome termina com 's';
SELECT * FROM produtos
WHERE descricao LIKE '%s';

-- Listar os produtos que contenham as letras "inh"
SELECT * FROM produtos
WHERE descricao LIKE '%inh%';

-- Listar os chocolates e valores 
SELECT descricao AS 'Produto', valor_unitario
FROM produtos
WHERE descricao LIKE '%Chocolate%';

-- Listar os vendedores cuja segunda letra do nome seja 'a'
SELECT *
FROM vendedores
WHERE nome LIKE '_a%';

-- ORDER BY
-- Listar todos os vendedores ordenados por nome
SELECT * FROM vendedores
ORDER BY nome;

-- Listar todos os vendedores ordenados por nome de forma descrescente
SELECT * FROM vendedores
ORDER BY nome DESC;

-- Listar todos os vendedores ordenados por nome e salario 
SELECT * FROM vendedores
ORDER BY nome, salario;

-- Listar todos os clientes com seus estados, sendo que o estado deverá ser ordenado em ordem crescente e o nome por ordem descrescente
SELECT nome, uf FROM clientes
ORDER BY uf ASC, nome DESC;

-- Listar todos os vendedores que ganham MENOS de 1000 reais e apresentar em ordem crescente
SELECT * FROM vendedores
WHERE salario < 1000
ORDER BY nome;

-- Listar os vendedores que não começam por ‘Jo’ e apresentar ordenado de forma descrescente
SELECT * FROM vendedores
WHERE nome NOT LIKE 'Jo%'
ORDER BY nome;

-- FUNÇÕES COUNT(), AVG(), SUM(), MIN() e MAX()
-- Informe quantos clientes foram cadastrados
SELECT COUNT(id) AS qtde_clientes FROM clientes;

-- Informe quantos produtos tem valor unitário abaixo de 0.50 centavos
SELECT COUNT(id) FROM produtos
WHERE valor_unitario < 0.5;

-- Informe a média de salario dos vendedores
SELECT AVG(salario) AS media_salarios
FROM vendedores;

-- Informe a média de valores unitarios dos produtos vendidos a M
SELECT AVG(valor_unitario) AS media_valores_produdos_M
FROM produtos
WHERE unidade = 'M';

-- Somar o valor de todos os salários
SELECT SUM(salario) AS soma_salarios
FROM vendedores;

-- Somar o valor dos salarios da comissão A
SELECT SUM(salario) AS soma_salarios_A
FROM vendedores
WHERE faixa_comissao = 'A';

-- Somar a quantidade de itens de pedidos
SELECT SUM(quantidade) as quanidade_itens_pedidos
FROM itens_pedido;

-- Informe o menor salario do vendedores
SELECT MIN(salario) as menor_salario
FROM vendedores;

-- Informe o maior salario do vendedores
SELECT MAX(salario) as maior_salario
FROM vendedores;

-- Informe o maior salario do vendedores da faixa de comissão B
SELECT MAX(salario) AS maior_salario_B
FROM vendedores
WHERE faixa_comissao = 'B';

-- Listar os nomes entre Ana e Jorge, ordenado de forma descrescente
SELECT nome
FROM clientes
WHERE nome BETWEEN 'Ana'AND 'Jorge'
ORDER BY nome DESC;
 
-- GROUP BY
-- Informe o número de clientes por Estado
SELECT COUNT(id) AS numero_clientes, uf
FROM clientes
GROUP BY uf;

-- Informe a média salarial por faixa de comissão
SELECT AVG(salario) AS media_salarial, faixa_comissao
FROM vendedores
GROUP BY faixa_comissao
	-- Só para ficar ABC certinho -Matheus
	ORDER BY faixa_comissao;

-- Informe a média salarial por faixa de comissão ordenado de forma descrescente por valor
SELECT AVG(salario) as media_salarial, faixa_comissao
FROM vendedores
GROUP BY faixa_comissao
ORDER BY media_salarial DESC;

-- HAVING
-- Informe a média salarial por faixa de comissão apenas das faixas com ganho acima de 2000 
SELECT AVG(salario) AS media_salarial, faixa_comissao
FROM vendedores
GROUP BY faixa_comissao
HAVING media_salarial > 2000
	-- Só para ficar ABC certinho -Matheus
	ORDER BY faixa_comissao;

-- Informe a média salarial por faixa de comissão apenas das faixas com ganho acima de 2000 ordenado de forma descrescente por valor
SELECT AVG(salario) as media_salarial, faixa_comissao
FROM vendedores
GROUP BY faixa_comissao
HAVING media_salarial > 2000
ORDER BY media_salarial DESC;