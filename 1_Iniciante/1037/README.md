<h6 align="center">URI Online Judge | 1037</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1037">
    Intervalo
  </a>
</h2>
<h5 align="center">Adaptado por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.
</p>
<p>
  O símbolo ( representa "maior que". Por exemplo:<br>
  [0,25]  indica valores entre 0 e 25.0000, inclusive eles.<br>
  (25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000
</p>
<br>
<h3>Entrada</h3>
<p>
  O arquivo de entrada contém um número com ponto flutuante qualquer.
</p>
<br>
<h3>Saída</h3>
<p>
  A saída deve ser uma mensagem conforme exemplo abaixo.
</p>
<br>
<code>
  <table width="100%">
    <thead>
      <th>Exemplo de Entrada</th>
      <th>Exemplo de Saída</th>
    </thead>
    <tbody>
      <tr>
        <td>25.01</td>
        <td>Intervalo (25,50]</td>
      </tr>
      <tr>
        <td>25.00</td>
        <td>Intervalo [0,25]</td>
      </tr>
      <tr>
        <td>100.00</td>
        <td>Intervalo (75,100]</td>
      </tr>
      <tr>
        <td>-25.02</td>
        <td>Fora de intervalo</td>
      </tr>
    </tbody>
  </table>
</code>