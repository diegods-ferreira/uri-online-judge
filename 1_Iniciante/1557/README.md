<h6 align="center">URI Online Judge | 1557</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1557">
    Matriz Quadrada III
  </a>
</h2>
<h5 align="center">Por Gabriel Dalalio, ITA BR Brazil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.
</p>
<br>
<h3>Entrada</h3>
<p>
  A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. O final da entrada é marcado por um valor de ordem igual a zero (0).
</p>
<br>
<h3>Saída</h3>
<p>
  Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. Os valores das matrizes devem ser formatados em um campo de tamanho <b>T</b> justificados à direita e separados por espaço, onde <b>T</b> é igual ao número de dígitos do maior número da matriz. Após o último caractere de cada linha da matriz não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.
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
        <td>1<br>2<br>3<br>4<br>5<br>0</td>
        <td>
          1<br>
          <br>
          1&nbsp;2<br>
          2&nbsp;4<br>
          <br>
          1&nbsp;&nbsp;2&nbsp;&nbsp;4<br>
          2&nbsp;&nbsp;4&nbsp;&nbsp;8<br>
          4&nbsp;&nbsp;8&nbsp;16<br>
          <br>
          1&nbsp;&nbsp;2&nbsp;&nbsp;4&nbsp;&nbsp;8<br>
          2&nbsp;&nbsp;4&nbsp;&nbsp;8&nbsp;16<br>
          4&nbsp;&nbsp;8&nbsp;16&nbsp;32<br>
          8&nbsp;16&nbsp;32&nbsp;64<br>
          <br>
          &nbsp;1&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;16<br>
          &nbsp;2&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;16&nbsp;&nbsp;32<br>
          &nbsp;4&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;16&nbsp;&nbsp;32&nbsp;&nbsp;64<br>
          &nbsp;8&nbsp;&nbsp;16&nbsp;&nbsp;32&nbsp;&nbsp;64&nbsp;128<br>
          16&nbsp;&nbsp;32&nbsp;&nbsp;64&nbsp;128&nbsp;256
        </td>
      </tr>
    </tbody>
  </table>
</code>