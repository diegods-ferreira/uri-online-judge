<h6 align="center">URI Online Judge | 1021</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1021">
    Notas e Moedas
  </a>
</h2>
<h5 align="center">Por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
</p>
<br>
<h3>Entrada</h3>
<p>
  O arquivo de entrada contém um valor de ponto flutuante <b>N</b> (0 ≤ <b>N</b> ≤ 1000000.00).
</p>
<br>
<h3>Saída</h3>
<p>
  Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
</p>
<p>
  Obs: Utilize ponto (.) para separar a parte decimal.
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
        <td>576.73</td>
        <td>
          NOTAS:<br>
          5 nota(s) de R$ 100.00<br>
          1 nota(s) de R$ 50.00<br>
          1 nota(s) de R$ 20.00<br>
          0 nota(s) de R$ 10.00<br>
          1 nota(s) de R$ 5.00<br>
          0 nota(s) de R$ 2.00<br>
          MOEDAS:<br>
          1 moeda(s) de R$ 1.00<br>
          1 moeda(s) de R$ 0.50<br>
          0 moeda(s) de R$ 0.25<br>
          2 moeda(s) de R$ 0.10<br>
          0 moeda(s) de R$ 0.05<br>
          3 moeda(s) de R$ 0.01
        </td>
      </tr>
      <tr>
        <td>4.00</td>
        <td>
          NOTAS:<br>
          0 nota(s) de R$ 100.00<br>
          0 nota(s) de R$ 50.00<br>
          0 nota(s) de R$ 20.00<br>
          0 nota(s) de R$ 10.00<br>
          0 nota(s) de R$ 5.00<br>
          2 nota(s) de R$ 2.00<br>
          MOEDAS:<br>
          0 moeda(s) de R$ 1.00<br>
          0 moeda(s) de R$ 0.50<br>
          0 moeda(s) de R$ 0.25<br>
          0 moeda(s) de R$ 0.10<br>
          0 moeda(s) de R$ 0.05<br>
          0 moeda(s) de R$ 0.01
        </td>
      </tr>
      <tr>
        <td>91.01</td>
        <td>
          NOTAS:<br>
          0 nota(s) de R$ 100.00<br>
          1 nota(s) de R$ 50.00<br>
          2 nota(s) de R$ 20.00<br>
          0 nota(s) de R$ 10.00<br>
          0 nota(s) de R$ 5.00<br>
          0 nota(s) de R$ 2.00<br>
          MOEDAS:<br>
          1 moeda(s) de R$ 1.00<br>
          0 moeda(s) de R$ 0.50<br>
          0 moeda(s) de R$ 0.25<br>
          0 moeda(s) de R$ 0.10<br>
          0 moeda(s) de R$ 0.05<br>
          1 moeda(s) de R$ 0.01
        </td>
      </tr>
    </tbody>
  </table>
</code>