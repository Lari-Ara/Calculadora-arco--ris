#define ledBranco 2
#define ledLaranja 3
#define ledAzul 4
#define ledAmarelo 5


int num = 0;
char op; // Alterado para char para aceitar operadores
int num2 = 0;

void setup() {
  pinMode(ledBranco, OUTPUT);
  pinMode(ledLaranja, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  Serial.begin(9600);
  Serial.println("Inicio da aplicacao");
}

void loop() {
    Serial.println("Digite o primeiro termo");
    while (!Serial.available()); // Espera até que o usuário digite algo
    num = Serial.parseInt(); // Lê o número fornecido
    Serial.println(num);

    Serial.println("Digite o operador");
    while (!Serial.available());
    op = Serial.read(); // Lê o operador fornecido
    Serial.println(op);

    Serial.println("Digite o segundo termo");
    while (!Serial.available());
    num2 = Serial.parseInt();
    Serial.println(num2);

    int resultado;
    switch (op) {
      case '+':
        digitalWrite(ledBranco, HIGH);
        digitalWrite(ledLaranja, LOW);
        digitalWrite(ledAzul, LOW);
        digitalWrite(ledAmarelo, LOW);
        resultado = num + num2;
        Serial.print("Resultado = ");
        Serial.println(resultado);
        break;
      default:
        Serial.println("Operador invalido");
        break;
      case '-':
        digitalWrite(ledLaranja, HIGH);
        digitalWrite(ledBranco, LOW);
        digitalWrite(ledAzul, LOW);
        digitalWrite(ledAmarelo, LOW);
        resultado = num - num2;
        Serial.print("Resultado = ");
        Serial.println(resultado);
        break;
      case '*':
        digitalWrite(ledAzul, HIGH);
        digitalWrite(ledLaranja, LOW);
        digitalWrite(ledBranco, LOW);
        digitalWrite(ledAmarelo, LOW);
        resultado = num * num2;
        Serial.print("Resultado = ");
        Serial.println(resultado);
        break;
      case '/':
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledLaranja, LOW);
        digitalWrite(ledAzul, LOW);
        digitalWrite(ledBranco, LOW);
        resultado = num / num2;
        Serial.print("Resultado = ");
        Serial.println(resultado);
        break; 
      
    }
}
