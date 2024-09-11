"""
3. Escreva um programa em Python que funcione como um conversor de unidades. O programa
deve permitir a conversão entre diferentes unidades de temperatura (Celsius, Fahrenheit,
Kelvin), distância (metros, quilômetros, milhas), e tempo (segundos, minutos, horas). Use
um match para determinar o tipo de conversão e as unidades de entrada e saída.
"""

opcoes = 0;

while opcoes!=4:
    print("CONVERSOR DE MEDIDAS: \n");

    opcoes = int(input("""Digite a opção desejada:
    [1] conversão de temperatura
    [2] conversão de distância
    [3] coversão de tempo
    [4] sair
    """));

    subOpcao = 0;

    match opcoes:
        case 1:
            temp = int(input("Digite o valor da temperatura: "));
            subOpcao = int(input("""Digite a medida da temperatura colocada:
    [1] Celcius
    [2] Fahrenheit
    [3] Kelvin
            """));

            match subOpcao:
                case 1:
                    tempC = temp;
                    tempF = int(tempC * 1.8 + 32);
                    tempK = tempC + 273;
                    print(f"Temperatura em Celsius: {tempC}ºC");
                    print(f"Temperatura em Celsius: {tempF}ºF");
                    print(f"Temperatura em Celsius: {tempK}ºK");
                case 2:
                    tempC = int((temp-32)/1.8);
                    tempF = temp;
                    tempK = int((temp-32)*5/9 + 273);
                    print(f"Temperatura em Celsius: {tempC}ºC");
                    print(f"Temperatura em Celsius: {tempF}ºF");
                    print(f"Temperatura em Celsius: {tempK}ºK");
                case 3:
                    tempC = temp - 273;
                    tempF = int((temp-273)*1.8 + 32);
                    tempK = temp;
                    print(f"Temperatura em Celsius: {tempC}ºC");
                    print(f"Temperatura em Celsius: {tempF}ºF");
                    print(f"Temperatura em Celsius: {tempK}ºK");
        case 2:
            dist = float(input("Digite o valor da distância: "));
            subOpcao = int(input("""Digite a medida da utilizada:
    [1] metros
    [2] quilômetros
    [3] milhas
            """));

            match subOpcao:
                case 1:
                    distM = dist;
                    distKm = distM/1000;
                    distMi = distM/1609.34
                    print(f"Distância em metros: {distM}m");
                    print(f"Distância em quilômetros: {distKm}Km");
                    print(f"Distância em milhas: {distMi} milhas");
                case 2:
                    distM = dist*1000;
                    distKm = dist;
                    distMi = distM/1609.34;
                    print(f"Distância em metros: {distM}m");
                    print(f"Distância em quilômetros: {distKm}Km");
                    print(f"Distância em milhas: {distMi} milhas");
                case 3:
                    distM = dist*1609.34
                    distKm = distM/1000;
                    distMi = dist;
                    print(f"Distância em metros: {distM}m");
                    print(f"Distância em quilômetros: {distKm}Km");
                    print(f"Distância em milhas: {distMi} milhas");
            
        case 3:
            tempo = float(input("Digite o periodo de tempo: "));
            subOpcao = int(input("""Digite a medida da utilizada:
    [1] segundos
    [2] minutos
    [3] horas
            """));

            match subOpcao:
                case 1:
                    tempoS = tempo;
                    tempoM = tempoS/60;
                    tempoH = tempoS/3600;
                    print(f"Período em segundos: {tempoS:.2f} s");
                    print(f"Período em minutos: {tempoM:.2f} m");
                    print(f"Período em horas: {tempoH:.2f} h");
                case 2:
                    tempoS = tempo*60;
                    tempoM = tempo;
                    tempoH = tempoM/60;
                    print(f"Período em segundos: {tempoS:.2f} s");
                    print(f"Período em minutos: {tempoM:.2f} m");
                    print(f"Período em horas: {tempoH:.2f} h");
                case 3:
                    tempoS = tempo*3600;
                    tempoM = tempo*60;
                    tempoH = tempo;
                    print(f"Período em segundos: {tempoS:.2f} s");
                    print(f"Período em minutos: {tempoM:.2f} m");
                    print(f"Período em horas: {tempoH:.2f} h");
        case 4:
            print("Obrigado por usar o conversor de medidas! :)\nAté logo...");
