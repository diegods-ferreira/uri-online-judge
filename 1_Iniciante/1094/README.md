<h6 align="center">URI Online Judge | 1094</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1094">
    Experiências
  </a>
</h2>
<h5 align="center">Adaptado por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
</p>
<p>
  Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
</p>
<br>
<h3>Entrada</h3>
<p>
  A primeira linha de entrada contém um valor inteiro <b>N</b> que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro <b>Quantia</b> (1 ≤ <b>Quantia</b> ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere <b>Tipo</b> ('C', 'R' ou 'S'), indicando o tipo de cobaia (<i>R</i>:Rato <i>S</i>:Sapo <i>C</i>:Coelho).
</p>
<br>
<h3>Saída</h3>
<p>
  Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
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
        <td>
          10<br>
          10 C<br>
          6 R<br>
          15 S<br>
          5 C<br>
          14 R<br>
          9 C<br>
          6 R<br>
          8 S<br>
          5 C<br>
          14 R
        </td>
        <td>
          Total: 92 cobaias<br>
          Total de coelhos: 29<br>
          Total de ratos: 40<br>
          Total de sapos: 23<br>
          Percentual de coelhos: 31.52 %<br>
          Percentual de ratos: 43.48 %<br>
          Percentual de sapos: 25.00 %
        </td>
      </tr>
    </tbody>
  </table>
</code>