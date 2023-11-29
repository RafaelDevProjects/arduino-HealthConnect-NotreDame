# Contador de Entrada na Clínica Médica

## Descrição do Problema de Saúde Abordado

O projeto visa abordar a necessidade das clínicas médicas de monitorar e registrar o número de pessoas que entram nas instalações. Este é um aspecto crucial para gerenciar o fluxo de pacientes e otimizar o atendimento, especialmente em situações onde a capacidade de atendimento pode ser limitada. Com o aumento da conscientização sobre a eficiência nos serviços de saúde, contar com dados precisos de entrada de pacientes torna-se fundamental.

## Visão Geral da Solução Proposta

A solução proposta consiste em um dispositivo Arduino que utiliza um sensor ultrassônico para medir a distância entre o dispositivo e uma pessoa. Quando a distância é inferior a um limiar predefinido, o Arduino registra a entrada de um paciente. Isso é indicado por LEDs de diferentes cores, representando diferentes estados: vermelho para indicação de entrada, amarelo para uma situação intermediária, e verde para indicar que o paciente está longe do sensor.

O projeto também incorpora uma funcionalidade de registrar a data e a hora da entrada de cada paciente, permitindo uma análise temporal do fluxo de pacientes.

## Instruções de Configuração e Execução

1. **Configuração do Hardware:**
   - Conecte o sensor ultrassônico os pinos GNV(negativo), 5V(positivo) e o sig ao pino 3 do Arduino.
   - Conecte LEDs aos pinos 11 (vermelho), 12 (amarelo) e 13 (verde).
   - Conecte o 1x LCD 16X2 como mostra a imagem do projeto
   <br>
    <img src="imagem do arduino.jpg" alt="imagem do arduino">

2. **Configuração do Software:**
   - Carregue o código Arduino fornecido no seu dispositivo.

3. **Execução:**
   - Ligue o Arduino.
   - Observe a iluminação dos LEDs para indicar o estado de entrada dos pacientes.
   - Os dados, incluindo o número de pacientes e a data/hora de entrada, serão exibidos na porta serial (Serial Monitor).

## Especificações de Componentes

| Componente          | Quantidade | Descrição                                           |
|---------------------|------------|-----------------------------------------------------|
| 1x Sensor Ultrassônico | [ x ]        | Modelo Arduino UNO     |
| 1x LED Vermelho        | [ x ]        | LED vermelho          |
| 1x LED Amarelo         | [ x ]        | LED amarelo            |
| 1x LED Verde           | [ x ]        | LED verde              |
| 4x Resistor            | [ x ]        | 3 Resistores de 330 Ω para os leds e resistor de 1k Ω para LCD       |
| 23x Fios e Conectores   | [ x ]        | fios: 9 verdes; 2 amarelos; 4 vermelhos; 1 laranja; 7 pretos; |
| 1x LCD                 | [ x ]        | LCD 16X2    |


## Simulação no Tinkercad

Você pode visualizar uma simulação do projeto no Tinkercad [clicando aqui](https://www.tinkercad.com/things/iDz8HZCpnFN-gs-edge/editel?returnTo=%2Fdashboard%3Ftype%3Dcircuits%26collection%3Ddesigns&sharecode=nb_CWYA2nTmFLDu0Aibett9ebNhmtJRMPGBdZdaMwYI), o codigo-fonte do sistema esta dentro do repositodio no arquivo '''codigo-fonte'''. Certifique-se de ajustar as conexões de acordo com as instruções fornecidas.

Este projeto oferece uma solução simples, porém eficaz, para a contagem de pacientes em clínicas médicas, proporcionando dados valiosos para melhorar a eficiência operacional e a qualidade do atendimento.
