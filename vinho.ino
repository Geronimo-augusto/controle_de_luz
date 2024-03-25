//modo -> se a porta analogica do ldr servir como fonte positiva  -> quanto maior a luz menor sera o valor lido pela porta
//modo -> se a porta analogica do ldr servir como fonte negatica -> quanto maior a luz maior sera o valor lido pela porta
int pinLDR = A0;
int pinVER = 13;
int pinAM = 12;
int pinVED = 11;
int pinBUZ = 7;

void setup(){
    Serial.begin(9600); 
  	pinMode(pinVER, OUTPUT);
    pinMode(pinAM, OUTPUT);
  	pinMode(pinVED, OUTPUT);
  	pinMode(pinBUZ, OUTPUT);
  	pinMode(pinLDR, INPUT);
}

void loop(){
    int valorLDR= analogRead(pinLDR);
    Serial.println(valorLDR);   //imprime el
  	delay(550);
    	
  	if (valorLDR >= 900 ) {
    	digitalWrite(pinVER,LOW);
      	digitalWrite(pinAM, HIGH);
      	digitalWrite(pinVED, HIGH);
      	digitalWrite(pinBUZ,LOW);
      	delay(3000);
      	digitalWrite(pinBUZ,HIGH);
  }
    else if (valorLDR<= 899 and valorLDR >= 700  ) {
      	digitalWrite(pinVER, HIGH);
      	digitalWrite(pinVED, HIGH);
    	digitalWrite(pinAM,LOW);
  }
  	else if (valorLDR <= 500 and valorLDR >= 401 ) {
    	digitalWrite(pinAM,LOW);
      	digitalWrite(pinVED, HIGH);
      	digitalWrite(pinVER, HIGH);
  }
  	else if (valorLDR <= 400 ) {
    	digitalWrite(pinVER,LOW);
        digitalWrite(pinAM, HIGH);
      	digitalWrite(pinVED, HIGH);
      	digitalWrite(pinBUZ,LOW);
      	delay(3000);
      	digitalWrite(pinBUZ,HIGH);
  }
  
  	else {
      digitalWrite(pinVER, HIGH);
      digitalWrite(pinAM, HIGH);
      digitalWrite(pinVED, LOW); 
      digitalWrite(pinBUZ,HIGH);
    }

    	
//  	if (valorLDR >= 500 ) {
//   		digitalWrite(pin,LOW);
//  }
//    else if (valorLDR <= 200 ) {
//    	digitalWrite(pin,LOW);
//  }
//  	else {
//      digitalWrite(pin, HIGH);
//    }
}

// Definição dos pinos conectados aos componentes
int pinLDR = A0;  // Pino analógico conectado ao sensor LDR
int pinVER = 13;  // Pino digital conectado ao LED verde
int pinAM = 12;   // Pino digital conectado ao LED amarelo
int pinVED = 11;  // Pino digital conectado ao LED vermelho
int pinBUZ = 7;   // Pino digital conectado ao buzzer

// Configuração inicial do Arduino
void setup() {
  // Inicia a comunicação serial com uma taxa de 9600 bauds
  Serial.begin(9600);
  
  // Define os pinos como saídas ou entradas conforme necessário
  pinMode(pinVER, OUTPUT);
  pinMode(pinAM, OUTPUT);
  pinMode(pinVED, OUTPUT);
  pinMode(pinBUZ, OUTPUT);
  pinMode(pinLDR, INPUT);
}

// Loop principal do programa
void loop() {
  // Lê o valor analógico do sensor LDR e armazena na variável "valorLDR"
  int valorLDR = analogRead(pinLDR);
  
  // Imprime o valor do sensor LDR no monitor serial
  Serial.println(valorLDR);
  
  // Aguarda 550 milissegundos antes de continuar a execução do código
  delay(550);
  
  // Verifica o valor lido pelo sensor LDR e controla os dispositivos conectados aos pinos de saída
  if (valorLDR >= 900) {
    // Se a luz for muito forte (valorLDR maior ou igual a 900)
    digitalWrite(pinVER, LOW);   // liga o LED verde
    digitalWrite(pinAM, HIGH);   // desLiga o LED amarelo
    digitalWrite(pinVED, HIGH);  // desLiga o LED vermelho
    tone(pinBUZZER, 1000);  // Ativa o buzzer com frequência de 1000 Hz
    delay(3000);                 // Aguarda 3 segundos
    digitalWrite(pinBUZ, HIGH);  // desLiga o buzzer novamente
  } else if (valorLDR <= 899 && valorLDR >= 700) {
    // Se a luz for moderadamente forte (valorLDR entre 700 e 899)
    digitalWrite(pinVER, HIGH);  // desLiga o LED verde
    digitalWrite(pinVED, HIGH);  // desLiga o LED vermelho
    digitalWrite(pinAM, LOW);    // liga o LED amarelo
  } else if (valorLDR <= 500 && valorLDR >= 401) {
    // Se a luz for moderadamente fraca (valorLDR entre 401 e 500)
    digitalWrite(pinAM, LOW);    // liga o LED amarelo
    digitalWrite(pinVED, HIGH);  // desLiga o LED vermelho
    digitalWrite(pinVER, HIGH);  // desLiga o LED verde
  } else if (valorLDR <= 400) {
    // Se a luz for muito fraca (valorLDR menor ou igual a 400)
    digitalWrite(pinVER, LOW);   // liga o LED verde
    digitalWrite(pinAM, HIGH);   // desLiga o LED amarelo
    digitalWrite(pinVED, HIGH);  // desLiga o LED vermelho
    tone(pinBUZZER, 1000);  // Ativa o buzzer com frequência de 1000 Hz
    delay(3000);                 // Aguarda 3 segundos
    digitalWrite(pinBUZ, HIGH);  // desLiga o buzzer novamente
  } else {
    // Se nenhuma das condições acima for atendida
    digitalWrite(pinVER, HIGH);  // desLiga o LED verde
    digitalWrite(pinAM, HIGH);   // desLiga o LED amarelo
    digitalWrite(pinVED, LOW);   // liga o LED vermelho
    digitalWrite(pinBUZ, HIGH);  // desLiga o buzzer
  }
}




void chatgpt(){
  // Definição dos pinos
  int pinLDR = A0;  // Pino analógico conectado ao sensor LDR
  int pinVERDE = 11;  // Pino digital conectado ao LED verde
  int pinAMARELO = 12;   // Pino digital conectado ao LED amarelo
  int pinVERMELHO = 13;  // Pino digital conectado ao LED vermelho
  int pinBUZZER = 7;   // Pino digital conectado ao buzzer

  void setup() {
    Serial.begin(9600); 
    pinMode(pinVERDE, OUTPUT);
    pinMode(pinAMARELO, OUTPUT);
    pinMode(pinVERMELHO, OUTPUT);
    pinMode(pinBUZZER, OUTPUT);
    pinMode(pinLDR, INPUT);
  }

  void loop() {
    // Leitura do sensor LDR
    int valorLDR = analogRead(pinLDR);
    Serial.println(valorLDR);   //imprime el
    delay(550);
    
      // Verifica o valor lido pelo sensor LDR
    if (valorLDR >= 900) {
      // Nível de luminosidade OK
      digitalWrite(pinVERDE, LOW);
      digitalWrite(pinAMARELO, HIGH);
      digitalWrite(pinVERMELHO, HIGH);
      digitalWrite(pinBUZZER,HIGH);
    } else if (valorLDR <= 799 && valorLDR >= 500) {
      // Nível de alerta
      digitalWrite(pinVERDE, HIGH);
      digitalWrite(pinAMARELO, LOW);
      digitalWrite(pinVERMELHO, HIGH);
      digitalWrite(pinBUZZER,HIGH); // Ativa o buzzer com frequência de 1000 Hz
    } else {
      // Problema detectado
      digitalWrite(pinVERDE, HIGH);
      digitalWrite(pinAMARELO, HIGH);
      digitalWrite(pinVERMELHO, LOW);
      tone(pinBUZZER, 1000);  // Ativa o buzzer com frequência de 1000 Hz
      delay(3000);  // Mantém o buzzer ativo por 3 segundos
      noTone(pinBUZZER);
    }
  }
}