# Controle de luz
Este repositório contém o código-fonte e informações sobre um sistema de monitoramento de luminosidade implementado com Arduino. O sistema utiliza um sensor LDR (Light Dependent Resistor), LEDs e um buzzer para indicar o status da luminosidade ambiente.

## Componentes Necessários:

- Arduino Uno (ou similar)
- Sensor LDR
- Três LEDs (verde, amarelo e vermelho)
- Um buzzer
- Resistores para limitação de corrente dos LEDs (opcional)

## Instruções de Uso:

## Conexões Físicas:

- Conecte o sensor LDR ao pino analógico A0 do Arduino.
- Conecte os LEDs verde, amarelo e vermelho aos pinos digitais 13, 12 e 11 do Arduino, respectivamente.
- Conecte o buzzer ao pino digital 7 do Arduino.
- Se necessário, utilize resistores para limitar a corrente dos LEDs.
- Compilação e Carregamento:

## vrificaçoes 
- Abra o código-fonte vinho.ino em uma IDE Arduino compatível.
- Verifique se a placa e a porta estão configuradas corretamente na IDE.
- Compile o código e carregue-o na placa Arduino.

#  Funcionamento:

O sistema monitora continuamente a luminosidade ambiente através do sensor LDR.
Com base no valor lido pelo sensor, os LEDs e o buzzer são controlados da seguinte forma:
  - LED verde: Indica que a luminosidade está dentro dos limites aceitáveis.
  - LED amarelo: Indica um nível de alerta, com luminosidade moderada.
  - LED vermelho: Indica um problema, com luminosidade baixa.
Buzzer: Soa por 3 segundos quando a luminosidade está em nível de alerta ou indicando um problema.

## Manutenção:

Certifique-se de que o sensor LDR está adequadamente posicionado para capturar a luminosidade ambiente.
Verifique as conexões físicas para garantir que estão corretas e seguras.
Se necessário, ajuste os valores de limiar no código para adequá-los às condições específicas do ambiente.
Observações:

## Obeservações 
Este sistema é um projeto básico de monitoramento de luminosidade e pode ser expandido ou personalizado conforme necessário.
O código fonte está disponível no arquivo vinho.ino neste repositório.

link do projeto no tinkercad: https://www.tinkercad.com/things/hhuZCB7EN7i-project-vinho
