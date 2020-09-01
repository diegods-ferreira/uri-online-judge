<h6 align="center">URI Online Judge | 1036</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1036">
    Fórmula de Bhaskara
  </a>
</h2>
<h5 align="center">Adaptado por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente <i>“Impossivel calcular”</i>, caso haja uma divisão por 0 ou raiz de numero negativo.
</p>
<br>
<h3>Entrada</h3>
<p>
  Leia três valores de ponto flutuante (double) A, B e C.
</p>
<br>
<h3>Saída</h3>
<p>
  Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.
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
        <td>10.0 20.1 5.1</td>
        <td>R1 = -0.29788<br>R2 = -1.71212</td>
      </tr>
      <tr>
        <td>0.0 20.0 5.0</td>
        <td>Impossivel calcular</td>
      </tr>
      <tr>
        <td>10.3 203.0 5.0</td>
        <td>R1 = -0.02466<br>R2 = -19.68408</td>
      </tr>
      <tr>
        <td>10.0 3.0 5.0</td>
        <td>Impossivel calcular</td>
      </tr>
    </tbody>
  </table>
</code>