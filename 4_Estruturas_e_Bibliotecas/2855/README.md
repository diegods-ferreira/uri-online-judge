<h6 align="center">URI Online Judge | 2855</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/2855">
    Números de Sorte
  </a>
</h2>
<h5 align="center">Por Felipe C. Ochial, URI BR Brazil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Um número de sorte é um número em uma dada sequência que sobrevive ao seguinte processo de eliminação: Inicialmente todo segundo elemento é eliminado. Após isso, todo terceiro elemento é eliminado e assim sucessivamente até que o número em questão esteja em uma posição menor do que o próximo índice a ser eliminado.
</p>
<p>
  Por exemplo, na sequência [1,2,3,4,5,6,7,8,9,10,11,12,13…] gostaríamos de saber se os números 7 e 9 são sortudos. Após a primeira passada teremos [1,3,5,7,9,11…], após a segunda passada teremos [1,3,7,9,13…]. Após a quarta passada [1,3,7,13…]. Assim podemos concluir que o número 7 é sortudo e que o número 9 é um número azarado nesta sequência.
</p>
<p>
  Um número de sorte é um número em uma dada sequência que sobrevive ao seguinte processo de eliminação: Inicialmente todo segundo elemento é eliminado. Após isso, todo terceiro elemento é eliminado e assim sucessivamente até que o número em questão esteja em uma posição menor do que o próximo índice a ser eliminado.
</p>
<br>
<h3>Entrada</h3>
<p>
  A entrada é composta por diversos casos de teste. Cada caso de teste é composto por um inteiro <b>N</b> (0 < <b>N</b> < 305000) que determina quantos números existem na sequência. Após isso, seguem N inteiros <b>N<i>i</i></b> (0 < <b>N<i>i</i></b> < 305000) em ordem crescente. Por fim, um inteiro <b>M</b> (0 < <b>M</b> < 305000) o qual representa o digito da sequência que deve ser testado.
</p>
<br>
<h3>Saída</h3>
<p>
  Imprima “<b>N</b>” caso o número testado não for um número de sorte e “<b>Y</b>” caso contrário. Pule uma linha após cada caso de teste.
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
          1 2 3 4 5 6 7 8 9 10<br>
          7<br>
          10<br>
          1 2 3 4 5 6 7 8 9 10<br>
          9<br>
          25<br>
          1 3 8 9 11 12 13 14 15 26 29 38 44 49 50 55 56 57 58 66 77 88 99 105 123<br>
          58
        </td>
        <td>Y<br>N<br>Y</td>
      </tr>
    </tbody>
  </table>
</code>