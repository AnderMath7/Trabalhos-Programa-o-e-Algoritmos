-- 3 ERROS, para mim 2,6;

-- crie o banco de dados
	CREATE DATABASE IF NOT EXISTS universidade;

-- crie as tabelas, considerando a elaboração de atributos condizentes ao tema, com tipos de dados diversos.
	USE universidade; 
	CREATE TABLE IF NOT EXISTS professores(
		matricula INTEGER AUTO_INCREMENT NOT NULL UNIQUE,
		nome VARCHAR(100) NOT NULL UNIQUE,
		formacao ENUM('mestrado', 'doutorado', 'graduação'),
		PRIMARY KEY(matricula)
	);

	CREATE TABLE IF NOT EXISTS turmas(
		codigo INTEGER AUTO_INCREMENT NOT NULL UNIQUE,
		curso_nome varchar(100) NOT NULL,
        curso ENUM('bacharelado','licenciatura','tecnológico'),
		periodo integer,
		PRIMARY KEY (codigo)
	);

	CREATE TABLE IF NOT EXISTS professores_turmas(
		codigo INTEGER AUTO_INCREMENT NOT NULL UNIQUE,
		matricula_professores INTEGER UNIQUE,
		codigo_turmas INTEGER UNIQUE,
		sala char(4),
		PRIMARY KEY (codigo),
		FOREIGN KEY (matricula_professores) REFERENCES professores(matricula),
		FOREIGN KEY (codigo_turmas) REFERENCES turmas(codigo)
	);


	CREATE TABLE IF NOT EXISTS disciplinas(
		codigo CHAR(8) NOT NULL UNIQUE,
		nome VARCHAR(50) UNIQUE NOT NULL,
		qtd_horas INTEGER,
		codigo_turmas INTEGER NOT NULL UNIQUE,
		PRIMARY KEY (codigo),
		FOREIGN KEY (codigo_turmas) REFERENCES turmas(codigo) -- ERRO: chave da disciplina vai para turma
	);

-- faça a exclusão de uma tabela (deixe a linha de comando como comentário)
	-- DROP TABLE professores_turmas;

-- ------------------------------------------------------------------------------
	INSERT INTO professores (nome, formacao)
	VALUES ('JOYCE MELHOR PROFESSORA S2', NULL);
    -- GARANTINDO MEU 10? ;D KSKSKS | Brincadeira só pra desncontrair KSKS, mas você é a melhor mesmo!! ;)
-- ------------------------------------------------------------------------------

-- faça o update adicionando um atributo em uma tabela
	UPDATE professores -- ERRO: alter table
	SET nome = 'Joyce Siqueira'
	WHERE matricula = 1;
    
    UPDATE professores
    set formacao = 'doutorado'
    WHERE matricula = 1;

-- faça o insert de 3 linhas em cada tabela
	INSERT INTO professores (nome, formacao)
	VALUES ('Hially Rabelo', 'doutorado'),
    ('Diego Dias', 'mestrado'),
    ('João Evangelista', 'mestrado'),
    ('Remis Balaniuk', 'doutorado');
    
    INSERT INTO turmas (curso_nome, curso, periodo)
	VALUES ('Ciência da Computação', 'bacharelado', 4),
    ('Analise e Desenvolvimento de Sistemas', 'tecnológico', 1),
    ('Física', 'licenciatura', 5);
    
    INSERT INTO professores_turmas (matricula_professores, codigo_turmas, sala)
	VALUES (1, 1,'M111'),
    ( 2, 2,'R013'),
    (5, 3,'A205');
    
    INSERT INTO disciplinas (codigo, nome, qtd_horas, codigo_turmas)
	VALUES ('LMO04569', 'Laboratório de banco de dados', 80, 1),
    ('ABY08910','Engenharia de Software', 70, 2),
    ('KPO02030', 'vetores', 3, 3);
    
-- faça o delete de 1 linha na tabela de sua escolha 
	/*DELETE FROM professores
    WHERE nome = 'Diego Dias'; */

-- faça o update de 1 linhana tabela de sua escolha
	/*UPDATE professores_turmas
    SET sala = 'A206'
    WHERE codigo = 3;
    */

-- QUERYS
-- selecione todos os dados da tabela de sua escolha
	SELECT* FROM professores;

-- selecione todas as disciplinas do semestre corrente
	SELECT * FROM disciplinas
    WHERE codigo_turmas != NULL; -- ERRADO: sem semestre

-- selecione todos os professores doutores
	SELECT * FROM professores
    WHERE formacao IN ('doutorado');

-- selecione os nomes das disciplinas, sem repetição, ordenadas de forma descrescente, que tem carga horária superior a 4h
SELECT DISTINCT * FROM disciplinas
WHERE qtd_horas > 4
ORDER BY qtd_horas DESC;

-- informe quantos professores estão cadastrados
	SELECT COUNT(matricula) AS professores_cadastrados FROM professores;

-- os cursos são categorizados por Bacharelado, Licenciatura e Tecnologico. Selecione apenas os de Licenciatura e os Tecnológicos
	SELECT curso_nome, curso FROM turmas
    WHERE curso IN ('licenciatura','tecnologico');

-- liste os códigos de todas as turmas de um determinado professor
	-- Professora Joyce
    SELECT codigo_turmas FROM  professores_turmas
    WHERE matricula_professores = 1;

-- liste as turmas com seus respectivos códigos de disciplina, por ordem alfabética
	SELECT codigo_turmas, codigo FROM disciplinas
    ORDER BY codigo;