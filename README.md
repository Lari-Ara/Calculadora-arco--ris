<h1>Projeto de robótica: Calculadora-arco-íris</h1>
<h2>Definição</h2>
<p>Este dispositivo de simulação permite ao usuário realizar as quatro operações matemáticas básicas: adição, subtração, multiplicação e divisão. A calculadora é composta pelos seguintes componentes:</p>
<ul>
  
<h2>Componentes:</h2>
<ul>
  <li><strong>1 Arduino:</strong> Serve como o cérebro do projeto, onde o código em linguagem C é carregado para processar as entradas e controlar os LEDs.</li>
  <li><strong>4 LEDs:</strong> Um de cada cor (branco, laranja, azul e amarelo) para indicar a operação matemática realizada.</li>
  <li><strong>1 Resistor:</strong> Para limitar a corrente para os LEDs e evitar que queimem.</li>
  <li><strong>1 Breadboard:</strong> Para montar o circuito de forma organizada e sem a necessidade de soldagem.</li>
  <li><strong>Vários Jumpers:</strong> Para conectar os componentes no breadboard.</li>
 <img src="https://github.com/Lari-Ara/Calculadora-arco--ris/assets/166271278/7736a346-c43d-40de-802c-1968e56940a3" alt="Circuito" />

</ul>

<h2>Funcionamento:</h2>
<ol>
  <li>O usuário insere dois números (termos) e escolhe uma operação matemática básica (+, -, *, /) através da interface serial do Tinkercad.</li>
  <li>O Arduino recebe essas entradas e realiza o cálculo.</li>
  <li>Dependendo da operação escolhida, o Arduino acende o LED correspondente:
    <ul>
      <li><strong>Adição:</strong> Acende o LED branco.</li>
      <li><strong>Subtração:</strong> Acende o LED laranja.</li>
      <li><strong>Multiplicação:</strong> Acende o LED azul.</li>
      <li><strong>Divisão:</strong> Acende o LED amarelo.</li>
    </ul>
  </li>
  <li>O resultado é exibido na interface serial.</li>
</ol>

