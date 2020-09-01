<h6 align="center">URI Online Judge | 1045</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1045">
    Tipos de Triângulos
  </a>
</h2>
<h5 align="center">Adaptado por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
</p>
<p>
  <ul>
    <li>se A ≥ B+C, apresente a mensagem: <b>NAO FORMA TRIANGULO</b></li>
    <li>se A<sup>2</sup> = B<sup>2</sup> + C<sup>2</sup>, apresente a mensagem: <b>TRIANGULO RETANGULO</b></li>
    <li>se A<sup>2</sup> > B<sup>2</sup> + C<sup>2</sup>, apresente a mensagem: <b>TRIANGULO OBTUSANGULO</b></li>
    <li>se A<sup>2</sup> < B<sup>2</sup> + C<sup>2</sup>, apresente a mensagem: <b>TRIANGULO ACUTANGULO</b></li>
    <li>se os três lados forem iguais, apresente a mensagem: <b>TRIANGULO EQUILATERO</b></li>
    <li>se apenas dois dos lados forem iguais, apresente a mensagem: <b>TRIANGULO ISOSCELES</b></li>
  </ul>
</p>
<br>
<h3>Entrada</h3>
<p>
  A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
</p>
<br>
<h3>Saída</h3>
<p>
  Imprima todas as classificações do triângulo especificado na entrada.
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
        <td>7.0 5.0 7.0</td>
        <td>TRIANGULO ACUTANGULO<br>TRIANGULO ISOSCELES</td>
      </tr>
      <tr>
        <td>6.0 6.0 10.0</td>
        <td>TRIANGULO OBTUSANGULO<br>TRIANGULO ISOSCELES</td>
      </tr>
      <tr>
        <td>6.0 6.0 6.0</td>
        <td>TRIANGULO ACUTANGULO<br>TRIANGULO EQUILATERO</td>
      </tr>
      <tr>
        <td>5.0 7.0 2.0</td>
        <td>NAO FORMA TRIANGULO</td>
      </tr>
      <tr>
        <td>6.0 8.0 10.0</td>
        <td>TRIANGULO RETANGULO</td>
      </tr>
    </tbody>
  </table>
</code>